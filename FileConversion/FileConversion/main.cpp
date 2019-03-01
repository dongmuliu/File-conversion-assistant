#include "fileconversion.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FileConversion w;
	w.show();
	return a.exec();
}
