#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QCrashReporter.h"

class QCrashReporter : public QMainWindow
{
	Q_OBJECT

public:
	QCrashReporter(QWidget *parent = Q_NULLPTR);
private slots:
	void on_pushButton_clicked();
private:
	Ui::QCrashReporterClass ui;
};
