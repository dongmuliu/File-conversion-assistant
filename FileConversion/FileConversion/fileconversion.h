#ifndef FILECONVERSION_H
#define FILECONVERSION_H

#include <QtWidgets/QMainWindow>
#include "ui_fileconversion.h"
#include<qfiledialog.h>
#include<qmessagebox.h>
#include<qimage.h>
#include <opencv2\opencv.hpp>
#include<QGraphicsScene>  
#include<QGraphicsView>                   //graphicsview类
#include<opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>  //opencv申明
#include <qfiledialog.h>                //getopenfilename 类申明
#include <qlabel.h>                     //label类
#include <stdio.h>
#include <stdint.h>
#include <fstream>
#include <vector>
#include <iostream>
#include <QtCore/QTextStream>
#include <QtCore/QFile>
#include <QtCore/QIODevice>
#include<qdebug.h>
#include<QMouseEvent>

using namespace std;
using namespace cv;

#define   Img_width   (320)
#define   Img_height  (240)
#define IMG_B(img,y,x) img.at<Vec3b>(y,x)[0]
#define IMG_G(img,y,x) img.at<Vec3b>(y,x)[1]
#define IMG_R(img,y,x) img.at<Vec3b>(y,x)[2]



class FileConversion : public QMainWindow
{
	Q_OBJECT

public:
	FileConversion(QWidget *parent = 0);
	~FileConversion();

private:
	Ui::FileConversionClass ui;
	QString fileName;
	QString upcount;
	QString downcount;
	QString leftcount;
	QString rightcount;
	QString framecount;
	QString currentframe;
	QString image_x ;
	QString image_y ;
	QStringList tempOption;
	double maxdepth;
	double mindepth;
	double interdepth;
	double img_distance = 0;
	double img_depth;
	ushort img_tmp;
	
	

	int filestate = 0;
	int   frameheight;
	uint16_t depth[240][320];
	uint16_t savedepth[240][320];
	
	Mat zip;
	Mat img_color;
	Mat depthzip;
	Mat img_infor;
	QLabel *label;
	void showcurrentframe();
	void showgrayimage();
	void showimage();
	void showcolorimage();
	void mousePressEvent(QMouseEvent *event);
private slots:
	void OpenFileSlot();
	void SaveFileSlot();
	void ConfirmSlot();
	void SaveAllFileSlot();
	void TurnLeftSlot();
	void TurnRightSlot();
	void AboutSlot();
	void SetColorSlot();
};

#endif // FILECONVERSION_H
