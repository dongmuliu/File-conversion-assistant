#include "fileconversion.h"
Mat savemat(Img_height, Img_width, CV_16UC1);
Mat showgray(240, 320, CV_8UC1, Scalar(0));
FileConversion::FileConversion(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//������
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
}

FileConversion::~FileConversion()
{

}
//��굥����Ӧ����ȡ��ǰ���ֵ
void FileConversion::mousePressEvent(QMouseEvent *event)
{
	//����������Ļ������
	QPoint sPoint1 = event->globalPos();
	//qDebug() << "�������Ļ����1:" << "(" << sPoint1.rx() << "," << sPoint1.ry() << ")";
	//�������ڿؼ�������
	QPoint widgetPoint = ui.graylabel->mapFromGlobal(sPoint1);
	//qDebug() << "����ڿؼ�����:" << "(" << widgetPoint.rx() << "," << widgetPoint.ry() << ")";
	image_x = QString::number(widgetPoint.rx());
	ui.xlineEdit->setText(image_x);
	image_y = QString::number(widgetPoint.ry());
	ui.ylineEdit->setText(image_y);
	img_infor = savemat.clone();
	img_depth = img_infor.at<ushort>(image_y.toInt(), image_x.toInt());
	img_distance = img_depth * 12 / 30000;
	QString point_depth = QString::number(img_depth);
	ui.depthlineEdit->setText(point_depth);
	QString point_dis = QString::number(img_distance);
	ui.DislineEdit->setText(point_dis);
	
	
}
//���ļ�
void FileConversion::OpenFileSlot()
{
	//��ȡ�ļ�·��
	fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Images(*.csv *.bin *.png)"));
	if (fileName.isEmpty())//isNull
		return;
	QFile file(fileName);
	if (!file.open(QIODevice::ReadOnly))
	{
		QMessageBox::information(this, "Error Message", "Please Select a Right File");
		return;  //�ļ��򿪴�����ʾ������Ϣ
	}

	//�ж��ļ���׺��
	if (fileName.endsWith(".csv", Qt::CaseInsensitive))        
	{
		filestate = 1;
		ui.currentlineEdit->setText("1");
		//��ȡcsv�ļ�֡��
		QTextStream * out = new QTextStream(&file);//�ı���
		tempOption = out->readAll().split("\n");//ÿ����\n����
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
		//bin�ļ�תmat�ļ�
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
		//�ж��Ƿ�Ϊ16λ��ͼƬ
		if (savemat.type() != CV_16U)
		{
			QMessageBox::information(this, "Error Message", "Should open 16bits depth image.");
		}
		showimage();
	}

	//��ȡ����Ĭ�ϲ���
	upcount = ui.uplineEdit->text();
	downcount = ui.downlineEdit->text();
	leftcount = ui.leftlineEdit->text();
	rightcount = ui.rightlineEdit->text();
	maxdepth = (ui.maxdepthLineEdit->text()).toInt();
	mindepth = (ui.mindepthLineEdit->text()).toInt();
}
//���浥��ͼƬ
void FileConversion::SaveFileSlot()
{
	if (filestate != 1 && filestate != 2 && filestate != 3)
	{
		QMessageBox::information(this, "Error Message", "Please Open a File,Then Save");
		return;  //�ļ����������ʾ������Ϣ
	}
	QString filename = QFileDialog::getSaveFileName(this, tr("Save Image"), "", tr("Images (*.png *.bmp *.jpg)")); //ѡ��·��
	if (filename.isEmpty())//���δѡ���ļ���ȷ�ϣ�������
		return;
	string fileAsSave = filename.toStdString();
	imwrite(fileAsSave, savemat);
	
}
//�������ͼƬ
void FileConversion::SaveAllFileSlot()
{
	if (filestate != 1 && filestate != 2 && filestate != 3)
	{
		QMessageBox::information(this, "Error Message", "Please Open a File,Then Save");
		return;  //�ļ����������ʾ������Ϣ
	}
	
	if (filestate == 1)
	{
		QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"), "/home", QFileDialog::ShowDirsOnly);
		if (dir.isEmpty())//���δѡ���ļ���ȷ�ϣ�������
			return;
		string fileAsSave = dir.toStdString();
		int k = 1;
		int pixelDep = 0;                      //���ص���ֵ
		int pixelCounter = 0;				//�����ؼ���
		int rowCounter = 0;					//�м���
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
					//����ָ���ͼƬ
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
		QString filename = QFileDialog::getSaveFileName(this, tr("Save Image"), "", tr("Images (*.png *.bmp *.jpg)")); //ѡ��·��
		if (filename.isEmpty())//���δѡ���ļ���ȷ�ϣ�������
			return;
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
	QMessageBox::information(this, " Message", "Other features are under development!!!");
	return;
}

//��ȡ���º��ӳ�����
void FileConversion::SetColorSlot()
{
	showimage();
}
//���²�����Ϣ
void FileConversion::ConfirmSlot()
{
	if (filestate == 1)
	{
		upcount = ui.uplineEdit->text();
		downcount = ui.downlineEdit->text();
		leftcount = ui.leftlineEdit->text();
		rightcount = ui.rightlineEdit->text();
		frameheight = upcount.toInt() + downcount.toInt() + Img_height;
		framecount = QString::number((tempOption.count() - 1) / (frameheight));//������֡��
		ui.totalframelineEdit->setText(framecount);
		showcurrentframe();
	}
	else
	{
		QMessageBox::information(this, "Warning Message", "This is not a csv file, No need to set");
		return;
	}
	
}
//��ʾ��ǰ֡
void FileConversion::showcurrentframe()
{
	currentframe = ui.currentlineEdit->text();
	int downrowCounter = currentframe.toInt()*frameheight;
	int uprowCounter = (currentframe.toInt() - 1)*frameheight;
	int pixelDep = 0;                      //���ص���ֵ
	int pixelCounter = 0;				//�����ؼ���
	int rowCounter = 0;					//�м���
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
				//��ʾ��ǰ֡
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
	//��QT������ʾ
	QImage img = QImage((const unsigned char*)(showgray.data), showgray.cols, showgray.rows, QImage::Format_Indexed8);
	label = new QLabel();
	ui.graylabel->setAlignment(Qt::AlignCenter);		//������ʾ
	ui.graylabel->setPixmap(QPixmap::fromImage(img));
	//ui.graytextlabel->setText("gray");
	//topPoint.x = leftTopLeftPoint.x() - xoffset;
	//int  viewPoint = event.globalPos();
	/*QString x = QString::number(yoffset);
	ui.lineEdit->setText(x);*/
	//setMouseCallback(label, on_mouse, &savemat);
	
	
}
void FileConversion::showcolorimage()
{
	img_color.create(Img_height, Img_width, CV_8UC3);//����RGBͼ��
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
	//��QT������ʾ��α��ɫ��
	QImage img = QImage((const unsigned char*)(img_color.data), img_color.cols, img_color.rows, QImage::Format_RGB888);
	label = new QLabel();
	ui.colorlabel->setAlignment(Qt::AlignCenter);		//������ʾ
	ui.colorlabel->setPixmap(QPixmap::fromImage(img));
	//ui.colortextlabel->setText("color");
}
//��ʾ�Ҷ�ͼ��α��ɫͼ
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


