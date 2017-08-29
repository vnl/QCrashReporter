#include "stdafx.h"
#include "QCrashReporter.h"

QCrashReporter::QCrashReporter(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void QCrashReporter::on_pushButton_clicked()
{
	////Crash Examples

	////Null Pointer
	//int *ptr = nullptr;
	//*ptr = 12;
	//invalid memory
	delete reinterpret_cast<QString*>(0xFEE1DEAD);
}
