#include "fileconversion.h"
Mat savemat(Img_height, Img_width, CV_16UC1);
Mat showgray(Img_height, Img_width, CV_8UC1, Scalar(0));

FileConversion::FileConversion(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//槽连接
	QObject::connect(ui.openAction, SIGNAL(triggered()), this, SLOT(OpenFileSlot()));
	QObject::connect(ui.opentoolAction, SIGNAL(triggered()), this, SLOT(OpenFileSlot()));
	QObject::connect(ui.saveAction, SIGNAL(triggered()), this, SLOT(SaveFileSlot()));
	QObject::connect(ui.savetoolAction, SIGNAL(triggered()), this, SLOT(SaveFileSlot()));
	QObject::connect(ui.saveallAction, SIGNAL(triggered()), this, SLOT(SaveAllFileSlot()));
	QObject::connect(ui.savealltoolAction, SIGNAL(triggered()), this, SLOT(SaveAllFileSlot()));
	QObject::connect(ui.nextButton, SIGNAL(triggered()), this, SLOT(TurnRightSlot()));
	QObject::connect(ui.backButton, SIGNAL(triggered()), this, SLOT(TurnLeftSlot()));
	QObject::connect(ui.aboutAction, SIGNAL(triggered()), this, SLOT(AboutSlot()));
	QObject::connect(ui.confirmButton, SIGNAL(triggered()), this, SLOT(ConfirmSlot()));
	QObject::connect(ui.abouttoolAction, SIGNAL(triggered()), this, SLOT(AboutSlot()));
	QObject::connect(ui.setColorButton, SIGNAL(triggered()), this, SLOT(SetColorSlot()));
	QObject::connect(ui.mindepthLineEdit, SIGNAL(editingFinished()), this, SLOT(SetColorSlot()));
	QObject::connect(ui.maxdepthLineEdit, SIGNAL(editingFinished()), this, SLOT(SetColorSlot()));
	img_color.create(Img_height, Img_width, CV_8UC3);//构造RGB图像
   _matimg_short.create(Img_height, Img_width, CV_16UC1);
}

FileConversion::~FileConversion()
{

}
//鼠标单击相应，获取当前深度值
void FileConversion::mousePressEvent(QMouseEvent *event)
{
	//获得相对于屏幕的坐标
	QPoint sPoint1 = event->globalPos();
	//qDebug() << "相对于屏幕坐标1:" << "(" << sPoint1.rx() << "," << sPoint1.ry() << ")";
	//获得相对于控件的坐标
	QPoint widgetPoint = ui.graylabel->mapFromGlobal(sPoint1);
	//qDebug() << "相对于控件坐标:" << "(" << widgetPoint.rx() << "," << widgetPoint.ry() << ")";
	if (sPoint1.rx() >= (sPoint1.rx() - widgetPoint.rx()) & sPoint1.rx() <= (sPoint1.rx() - widgetPoint.rx() + Img_width) & sPoint1.ry() >= (sPoint1.ry() - widgetPoint.ry()) & sPoint1.ry() <= (sPoint1.ry() - widgetPoint.ry()+Img_height))
	{
		//qDebug() << "偏移量:" << "(" << (sPoint1.rx() - widgetPoint.rx()) << "," << (sPoint1.ry()- widgetPoint.ry()) << ")";
		image_x = QString::number(widgetPoint.rx());
		ui.xlineEdit->setText(image_x);
		image_y = QString::number(widgetPoint.ry());
		ui.ylineEdit->setText(image_y);
		img_infor = savemat.clone();
		img_depth = img_infor.at<ushort>(image_y.toInt(), image_x.toInt());
		img_distance = img_depth * 12.5 / 30000;
		QString point_depth = QString::number(img_depth);
		ui.depthlineEdit->setText(point_depth);
		QString point_dis = QString::number(img_distance);
		ui.DislineEdit->setText(point_dis);
	}
	else
	{
		//QMessageBox::information(this, "Error Message", "Please Select a Right Place");
	}
	
	
	
}
//打开文件
void FileConversion::OpenFileSlot()
{
	//获取文件路径
	fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Images(*.csv *.bin *.png)"));
	if (fileName.isEmpty())//isNull
		return;
	QFile file(fileName);
	if (!file.open(QIODevice::ReadOnly))
	{
		QMessageBox::information(this, "Error Message", "Please Select a Right File");
		return;  //文件打开错误显示错误信息
	}

	//判断文件后缀名
	if (fileName.endsWith(".csv", Qt::CaseInsensitive))        
	{
		filestate = 1;
		ui.currentlineEdit->setText("1");
		//获取csv文件帧数
		QTextStream * out = new QTextStream(&file);//文本流
		tempOption = out->readAll().split("\n");//每行以\n区分
		framecount = QString::number((tempOption.count() - 1) / (Img_height));
		ui.totalframelineEdit->setText(framecount);
		file.close();
		showcurrentframe();
	}
	else if (fileName.endsWith(".bin", Qt::CaseInsensitive))
	{
		filestate = 2;
		ui.totalframelineEdit->setText("1");
		ui.currentlineEdit->setText("1");
		unsigned short * imagebuf = new unsigned short[Img_width*Img_height];
		file.read((char*)imagebuf, Img_width*Img_height*sizeof(unsigned short));
		file.close();
		//bin文件转mat文件
		for (int i = 0; i < Img_height; i++)
		{
			for (int j = 0; j < Img_width; j++)
			{
				if (imagebuf[j + i * Img_width] < 30000)
					savemat.at<ushort>(i, j) = imagebuf[j + i * Img_width];
				else
					savemat.at<ushort>(i, j) = 30000;
			}
		}
		
		delete[] imagebuf;
		showimage();
	}
	else if (fileName.endsWith(".png", Qt::CaseInsensitive))
	{
		filestate = 3;
		ui.totalframelineEdit->setText("1");
		ui.currentlineEdit->setText("1");
		string pngfilename = string(fileName.toLocal8Bit());
		savemat = imread(pngfilename, CV_LOAD_IMAGE_ANYCOLOR | CV_LOAD_IMAGE_ANYDEPTH);
		//判断是否为16位的图片
		if (savemat.type() != CV_16U)
		{
			QMessageBox::information(this, "Error Message", "Should open 16bits depth image.");
		}
		showimage();
	}

	//获取界面默认参数
	upcount = ui.uplineEdit->text();
	downcount = ui.downlineEdit->text();
	leftcount = ui.leftlineEdit->text();
	rightcount = ui.rightlineEdit->text();
	maxdepth = (ui.maxdepthLineEdit->text()).toInt();
	mindepth = (ui.mindepthLineEdit->text()).toInt();
}
//保存单张图片
void FileConversion::SaveFileSlot()
{
	if (filestate != 1 && filestate != 2 && filestate != 3)
	{
		QMessageBox::information(this, "Error Message", "Please Open a File,Then Save");
		return;  //文件保存错误显示错误信息
	}
	QString filename = QFileDialog::getSaveFileName(this, tr("Save Image"), "", tr("Images (*.png *.bmp *.jpg)")); //选择路径
	if (filename.isEmpty())//如果未选择文件便确认，即返回
		return;
	string fileAsSave = filename.toLocal8Bit();
	imwrite(fileAsSave, savemat);
	
}
//保存多张图片
void FileConversion::SaveAllFileSlot()
{
	if (filestate != 1 && filestate != 2 && filestate != 3)
	{
		QMessageBox::information(this, tr("Error Message"), tr("Please Open a File,Then Save"));
		return;  //文件保存错误显示错误信息
	}
	
	if (filestate == 1)
	{
		QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"), "/home", QFileDialog::ShowDirsOnly);
		if (dir.isEmpty())//如果未选择文件便确认，即返回
			return;
		string fileAsSave = dir.toLocal8Bit();
		int k = 1;
		int pixelDep = 0;                      //像素点数值
		int pixelCounter = 0;				//行像素计数
		int rowCounter = 0;					//行计数
		QFile file(fileName);
		if (file.open(QIODevice::ReadOnly | QIODevice::Text))
		{
			while (!file.atEnd())
			{
				int downrowCounter = k*frameheight;
				int uprowCounter = (k - 1)*frameheight;
				QByteArray line = file.readLine();
				QString str(line);
				char* ch;
				QByteArray ba = str.toLatin1();
				ch = ba.data();
				for (int i = 0; i < str.count(); i++)
				{
					//保存分割后的图片
					if ((pixelCounter>leftcount.toInt()) && (pixelCounter <= (Img_width + rightcount.toInt())) && (rowCounter > (uprowCounter + upcount.toInt())) && (rowCounter <= (downrowCounter - downcount.toInt())))
					{
						if (ch[i] == 'N' || ch[i] == 'a')
							pixelDep = 0;
						else if (ch[i] != ',' && ch[i] != '\n')
							pixelDep = pixelDep * 10 + ch[i] - '0';
						if (ch[i] == ',')
						{
							depth[rowCounter - upcount.toInt() - 1 - uprowCounter][pixelCounter - leftcount.toInt() - 1] = pixelDep;
						}
					}
					if (ch[i] == ',')
					{
						pixelDep = 0;
						pixelCounter++;
					}
					if (ch[i] == '\n')
					{
						pixelCounter = 0;
						rowCounter++;

					}
				}
				if ((rowCounter > (downrowCounter - downcount.toInt())) || (rowCounter == (tempOption.count() - 1)))
				{
					Mat src_1(Img_height, Img_width, CV_16UC1, Scalar(0));
					for (int i = 0; i < Img_height; i++)
					{
						for (int j = 0; j < Img_width; j++)
						{
							src_1.at<ushort>(i, j) = depth[Img_height - i][j];
						}
					}
					if (k <= framecount.toInt())
					{
						imwrite(fileAsSave + "/" + to_string(k) + ".png", src_1);
						k++;
					}
				}
			}
			file.close();
		}

	}
	else
	{
		QString filename = QFileDialog::getSaveFileName(this, tr("Save Image"), "", tr("Images (*.png *.bmp *.jpg)")); //选择路径
		if (filename.isEmpty())//如果未选择文件便确认，即返回
			return;
		string fileAsSave = filename.toLocal8Bit();
		imwrite(fileAsSave, savemat);
	}

}
void FileConversion::TurnLeftSlot()
{
	currentframe = ui.currentlineEdit->text();
	if (currentframe.toInt() >1)
	{
		currentframe = QString::number(currentframe.toInt() - 1);
	}
	ui.currentlineEdit->setText(currentframe);
	showcurrentframe();
}
void FileConversion::TurnRightSlot()
{
	currentframe = ui.currentlineEdit->text();
	if (currentframe.toInt() < framecount.toInt())
	{
		currentframe = QString::number(currentframe.toInt() + 1);
	}
	ui.currentlineEdit->setText(currentframe);
	showcurrentframe();
}
void FileConversion::AboutSlot()
{
	QMessageBox::information(this, tr(" Message"), tr("Other features are under development!!!"));
	return;
}

//获取更新后的映射距离
void FileConversion::SetColorSlot()
{
	showimage();
}
//更新参数信息
void FileConversion::ConfirmSlot()
{
	if (filestate == 1)
	{
		upcount = ui.uplineEdit->text();
		downcount = ui.downlineEdit->text();
		leftcount = ui.leftlineEdit->text();
		rightcount = ui.rightlineEdit->text();
		frameheight = upcount.toInt() + downcount.toInt() + Img_height;
		framecount = QString::number((tempOption.count() - 1) / (frameheight));//计算总帧数
		ui.totalframelineEdit->setText(framecount);
		showcurrentframe();
	}
	else
	{
		QMessageBox::information(this, tr("Warning Message"), tr("This is not a csv file, No need to set"));
		ui.uplineEdit->setText("0");
		ui.downlineEdit->setText("0");
		ui.leftlineEdit->setText("0");
		ui.rightlineEdit->setText("0");
		return;
	}
	
}
//显示当前帧
void FileConversion::showcurrentframe()
{
	currentframe = ui.currentlineEdit->text();
	int downrowCounter = currentframe.toInt()*frameheight;
	int uprowCounter = (currentframe.toInt() - 1)*frameheight;
	int pixelDep = 0;                      //像素点数值
	int pixelCounter = 0;				//行像素计数
	int rowCounter = 0;					//行计数
	QFile file(fileName);
	if (file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		while (!file.atEnd())
		{
			QByteArray line = file.readLine();
			QString str(line);
			char* ch;
			QByteArray ba = str.toLatin1();
			ch = ba.data();
			for (int i = 0; i < str.count(); i++)
			{
				//显示当前帧
				if ((pixelCounter>leftcount.toInt()) && (pixelCounter <= (Img_width + rightcount.toInt())) && (rowCounter>(uprowCounter + upcount.toInt())) && (rowCounter <= (downrowCounter - downcount.toInt())))
				{
					if (ch[i] == 'N' || ch[i] == 'a')
						pixelDep = 0;
					else if (ch[i] != ',' && ch[i] != '\n')
						pixelDep = pixelDep * 10 + ch[i] - '0';
					if (ch[i] == ',')
					{
						depth[rowCounter - upcount.toInt() - 1 - uprowCounter][pixelCounter - leftcount.toInt() - 1] = pixelDep;
					}
				}
				if (ch[i] == ',')
				{
					pixelDep = 0;
					pixelCounter++;
				}
				if (ch[i] == '\n')
				{
					pixelCounter = 0;
					rowCounter++;

				}
			}
			if ((rowCounter > (downrowCounter - downcount.toInt())) || (rowCounter == (tempOption.count() - 1)))
			{
				for (int i = 0; i < Img_height; i++)
				{
					for (int j = 0; j < Img_width; j++)
					{
						savemat.at<ushort>(i, j) = depth[Img_height - i][j];
					}
				}
				
				showimage();
				break;
			}

		}

		file.close();
	}
}

void FileConversion::showgrayimage()
{
	//在QT界面显示
	QImage img = QImage((const unsigned char*)(showgray.data), showgray.cols, showgray.rows, QImage::Format_Indexed8);
	label = new QLabel();
	ui.graylabel->setAlignment(Qt::AlignCenter);		//居中显示
	ui.graylabel->setPixmap(QPixmap::fromImage(img));
	

}
void FileConversion::showcolorimage()
{
	
	//double interdepth = 894.0 / (maxdepth - mindepth);
	//Mat zip = _matimg_short.clone();
	for (int i = 0; i < Img_height; i++)
	{
		for (int j = 0; j < Img_width; j++)
		{
			img_tmp = _matimg_short.at<ushort>(i,j);
			if (img_tmp < 64)
			{
				IMG_R(img_color, i, j) = 191+ img_tmp;
				IMG_G(img_color, i, j) = img_tmp;
				IMG_B(img_color, i, j) = 0;
			}
			else if (img_tmp < 255)
			{
				IMG_R(img_color, i, j) = 255;
				IMG_G(img_color, i, j) = img_tmp;
				IMG_B(img_color, i, j) = 0;
			}
			else if (img_tmp < 510)
			{
				img_tmp -= 255;
				IMG_B(img_color, i, j) = img_tmp;
				IMG_G(img_color, i, j) = 255;
				IMG_R(img_color, i, j) = 255 - img_tmp;
			}
			else if (img_tmp < 765)
			{
				img_tmp -= 510;
				IMG_B(img_color, i, j) = 255;
				IMG_G(img_color, i, j) = 255 - img_tmp;
				IMG_R(img_color, i, j) = 0;
			}
			else
			{
				img_tmp -= 765;
				IMG_B(img_color, i, j) = 255 - img_tmp;
				IMG_G(img_color, i, j) = 0;
				IMG_R(img_color, i, j) = 0;
			}
		}
	}
	//在QT界面显示（伪彩色）
	cv::cvtColor(img_color, img_color, CV_BGR2RGB);//Opencv默认BGR存储，Qt需要RGB
	QImage img = QImage((const unsigned char*)(img_color.data), img_color.cols, img_color.rows, QImage::Format_RGB888);
	label = new QLabel();
	ui.colorlabel->setAlignment(Qt::AlignCenter);		//居中显示
	ui.colorlabel->setPixmap(QPixmap::fromImage(img));
	//ui.colortextlabel->setText("color");
}
//显示灰度图和伪彩色图
void FileConversion::showimage()
{
	
	depthzip = savemat.clone();
	maxdepth = (ui.maxdepthLineEdit->text()).toInt();
	mindepth = (ui.mindepthLineEdit->text()).toInt();
	if (mindepth > maxdepth)
	{
		QMessageBox::information(this, "Error Message", "Please Enter The Correct Format");
	}
	interdepth = 255.0 / (maxdepth - mindepth);
	color_interdepth = 894.0 / (maxdepth - mindepth);
	for (int i = 0; i < Img_height; i++)
	{
		for (int j = 0; j < Img_width; j++)
		{
			if (depthzip.at<ushort>(i, j) > maxdepth)
			{
				depthzip.at<ushort>(i, j) = maxdepth;
			}
			else if (depthzip.at<ushort>(i, j) < mindepth)
			{
				depthzip.at<ushort>(i, j) = mindepth;
			}
			showgray.at<uchar>(i, j) = 255 - (uchar)((depthzip.at<ushort>(i, j)-mindepth)*interdepth);
			_matimg_short.at<ushort>(i, j) = (ushort)((depthzip.at<ushort>(i, j) - mindepth)*interdepth);
		}
	}
	showgrayimage();
	showcolorimage();
	
}


