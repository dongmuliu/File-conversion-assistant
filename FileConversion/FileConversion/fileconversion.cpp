#include "fileconversion.h"
Mat savemat(Img_height, Img_width, CV_16UC1);
Mat showgray(240, 320, CV_8UC1, Scalar(0));
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
	QObject::connect(ui.setcolorButton, SIGNAL(triggered()), this, SLOT(SetColorSlot()));
}

FileConversion::~FileConversion()
{

}
void FileConversion::OpenFileSlot()
{
	//get the file name
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
		string pngfilename = fileName.toStdString();
		savemat = imread(pngfilename, CV_LOAD_IMAGE_ANYCOLOR | CV_LOAD_IMAGE_ANYDEPTH);
		if (savemat.type() != CV_16U)
		{
			QMessageBox::information(this, "Error Message", "Should open 16bits depth image.");
		}
		showimage();
	}

	//获取默认参数
	upcount = ui.uplineEdit->text();
	downcount = ui.downlineEdit->text();
	leftcount = ui.leftlineEdit->text();
	rightcount = ui.rightlineEdit->text();
	maxdepth = (ui.maxdepthlineEdit->text()).toInt();
	mindepth = (ui.mindepthlineEdit->text()).toInt();
}
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
	string fileAsSave = filename.toStdString();
	imwrite(fileAsSave, savemat);
	
}
void FileConversion::SaveAllFileSlot()
{
	if (filestate != 1 && filestate != 2 && filestate != 3)
	{
		QMessageBox::information(this, "Error Message", "Please Open a File,Then Save");
		return;  //文件保存错误显示错误信息
	}
	
	if (filestate == 1)
	{
		QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"), "/home", QFileDialog::ShowDirsOnly);
		string fileAsSave = dir.toStdString();
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
					Mat src_1(240, 320, CV_16UC1, Scalar(0));
					for (int i = 0; i < 240; i++)
					{
						for (int j = 0; j < 320; j++)
						{
							src_1.at<ushort>(i, j) = depth[240 - i][j];
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
		string fileAsSave = filename.toStdString();
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
	
}
void FileConversion::SetColorSlot()
{
	showimage();
}
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
		QMessageBox::information(this, "Warning Message", "This is not a csv file, No need to set");
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
				for (int i = 0; i < 240; i++)
				{
					for (int j = 0; j < 320; j++)
					{
						savemat.at<ushort>(i, j) = depth[240 - i][j];
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
	ui.graylabel->setPixmap(QPixmap::fromImage(img));
	ui.graytextlabel->setText("gray");
}
//显示伪彩色
void FileConversion::showcolorimage()
{
	img_color.create(Img_height, Img_width, CV_8UC3);//构造RGB图像
	for (int y = 0; y < Img_height; y++)
	{
		for (int x = 0; x < Img_width; x++)
		{
			img_tmp = showgray.at<uchar>(y, x);
			if (img_tmp < 51)
			{
				IMG_B(img_color, y, x) = 0;
				IMG_G(img_color, y, x) = img_tmp*5;
				IMG_R(img_color, y, x) = 0;
			}
			else if (img_tmp < 102)
			{
				img_tmp -= 51;
				IMG_B(img_color, y, x) = 255 - img_tmp*5;
				IMG_G(img_color, y, x) = 255;
				IMG_R(img_color, y, x) = 0;
			}
			else if (img_tmp < 153)
			{
				img_tmp -= 102;
				IMG_B(img_color, y, x) = 0;
				IMG_G(img_color, y, x) = 255;
				IMG_R(img_color, y, x) = img_tmp*5;
			}
			else if (img_tmp <= 204)
			{
				img_tmp -= 153;
				IMG_B(img_color, y, x) = 0;
				IMG_G(img_color, y, x) = 255 - uchar(128.0*img_tmp / 51 + 0.5);
				IMG_R(img_color, y, x) = 255;
			}
			else
			{
				img_tmp -= 204;
				IMG_B(img_color, y, x) = 0;
				IMG_G(img_color, y, x) = 127 - uchar(127.0*img_tmp / 51 +0.5);
				IMG_R(img_color, y, x) = 255;
			}
		}
	}
	//在QT界面显示（伪彩色）
	QImage img = QImage((const unsigned char*)(img_color.data), img_color.cols, img_color.rows, QImage::Format_RGB888);
	label = new QLabel();
	ui.colorlabel->setPixmap(QPixmap::fromImage(img));
	ui.colortextlabel->setText("color");
}
//显示灰度图和伪彩色图
void FileConversion::showimage()
{
	
	depthzip = savemat.clone();
	maxdepth = (ui.maxdepthlineEdit->text()).toInt();
	mindepth = (ui.mindepthlineEdit->text()).toInt();
	if (mindepth > maxdepth)
	{
		QMessageBox::information(this, "Error Message", "Please Enter The Correct Format");
	}
	interdepth = 255.0 / (maxdepth - mindepth);
	for (int i = 0; i < 240; i++)
	{
		for (int j = 0; j < 320; j++)
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
		}
	}
	showgrayimage();
	showcolorimage();
}

