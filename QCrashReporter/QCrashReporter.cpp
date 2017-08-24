#include "stdafx.h"
#include "QCrashReporter.h"

QCrashReporter::QCrashReporter(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void QCrashReporter::on_pushButton_clicked()
{
	//this example of null ptr crash...
	int *ptr = nullptr;
	*ptr = 12;
}
