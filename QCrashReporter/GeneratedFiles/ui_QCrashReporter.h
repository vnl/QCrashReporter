/********************************************************************************
** Form generated from reading UI file 'QCrashReporter.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCRASHREPORTER_H
#define UI_QCRASHREPORTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QCrashReporterClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QCrashReporterClass)
    {
        if (QCrashReporterClass->objectName().isEmpty())
            QCrashReporterClass->setObjectName(QStringLiteral("QCrashReporterClass"));
        QCrashReporterClass->resize(329, 217);
        centralWidget = new QWidget(QCrashReporterClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 70, 75, 23));
        QCrashReporterClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QCrashReporterClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 329, 21));
        QCrashReporterClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QCrashReporterClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QCrashReporterClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QCrashReporterClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QCrashReporterClass->setStatusBar(statusBar);

        retranslateUi(QCrashReporterClass);

        QMetaObject::connectSlotsByName(QCrashReporterClass);
    } // setupUi

    void retranslateUi(QMainWindow *QCrashReporterClass)
    {
        QCrashReporterClass->setWindowTitle(QApplication::translate("QCrashReporterClass", "QCrashReporter", 0));
        pushButton->setText(QApplication::translate("QCrashReporterClass", "Crash Test", 0));
    } // retranslateUi

};

namespace Ui {
    class QCrashReporterClass: public Ui_QCrashReporterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCRASHREPORTER_H
