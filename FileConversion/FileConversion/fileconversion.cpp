#include "fileconversion.h"
Mat binmat(Img_height, Img_width, CV_16UC1);
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
	QObject::connect(ui.framespinBox, SIGNAL(triggered()), this, SLOT(TurnSlot()));
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
	}
	else if (fileName.endsWith(".bin", Qt::CaseInsensitive))
	{
		filestate = 2;
		unsigned short * imagebuf = new unsigned short[Img_width*Img_height];
		file.read((char*)imagebuf, Img_width*Img_height*sizeof(unsigned short));
		file.close();
		//bin文件转mat文件
		for (int i = 0; i < Img_height; i++)
		{
			for (int j = 0; j < Img_width; j++)
			{
				if (imagebuf[j + i * Img_width] < 30000)
					binmat.at<ushort>(i, j) = imagebuf[j + i * Img_width];
				else
					binmat.at<ushort>(i, j) = 30000;
			}
		}
		delete[] imagebuf;
		binmat.convertTo(zip, CV_8U, 25.0/ 3000, 0);
		cv::resize(zip, zip, Size(320, 240));
		imshow("1", zip);
		//在QT界面显示
		QImage img = QImage((const unsigned char*)(zip.data), zip.cols, zip.rows, QImage::Format_Indexed8);
		label = new QLabel();
		ui.graylabel->setPixmap(QPixmap::fromImage(img));
		ui.graytextlabel->setText("gray");
		ui.colorlabel->setPixmap(QPixmap::fromImage(img));
	}
	else if (fileName.endsWith(".png", Qt::CaseInsensitive))
	{
		filestate = 3;
	}
}
void FileConversion::SaveFileSlot()
{

}
void FileConversion::SaveAllFileSlot()
{

}
void FileConversion::TurnSlot()
{

}
void FileConversion::AboutSlot()
{

}
void FileConversion::SetColorSlot()
{
	maxdepth = (ui.maxdepthlineEdit->text()).toInt()*25./3000;
	mindepth = (ui.mindepthlineEdit->text()).toInt()*25.0/3000;
	double intervaldistance = (maxdepth - mindepth) / 5;
	img_color.create(Img_height, Img_width, CV_8UC3);//构造RGB图像
	for (int y = 0; y < Img_height; y++)
	{
		for (int x = 0; x < Img_width; x++)
		{
			img_tmp = zip.at<uchar>(y, x);
			if (img_tmp < mindepth)
			{
				img_tmp = mindepth;
			}
			else if (img_tmp >maxdepth)
			{
				img_tmp = maxdepth;
			}
			double intervaldistance = (maxdepth - mindepth) / 5;
			if (img_tmp < intervaldistance)
			{
				IMG_B(img_color, y, x) = 0;
				IMG_G(img_color, y, x) = img_tmp * 255 / intervaldistance;
				IMG_R(img_color, y, x) = 0;
			}
			else if (img_tmp < 2 * intervaldistance)
			{
				img_tmp -= intervaldistance;
				IMG_B(img_color, y, x) = 255 - img_tmp * 255 / intervaldistance;
				IMG_G(img_color, y, x) = 255;
				IMG_R(img_color, y, x) = 0;
			}
			else if (img_tmp < 3 * intervaldistance)
			{
				img_tmp -= 2 * intervaldistance;
				IMG_B(img_color, y, x) = 0;
				IMG_G(img_color, y, x) = 255;
				IMG_R(img_color, y, x) = img_tmp * 255 / intervaldistance;
			}
			else if (img_tmp <= 4 * intervaldistance)
			{
				img_tmp -= 3 * intervaldistance;
				IMG_B(img_color, y, x) = 0;
				IMG_G(img_color, y, x) = 255 - uchar(128.0*img_tmp / intervaldistance + 0.5);
				IMG_R(img_color, y, x) = 255;
			}
			else
			{
				img_tmp -= 4 * intervaldistance;
				IMG_B(img_color, y, x) = 0;
				IMG_G(img_color, y, x) = 127 - uchar(127.0*img_tmp / intervaldistance + 0.5);
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
void FileConversion::ConfirmSlot()
{

}

