#include "stdafx.h"
#include "QCrashReporter.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QCrashReporter w;
	w.show();
	return a.exec();
}
