/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *emulatorTitle;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QPushButton *button1;
    QPushButton *button3;
    QPushButton *button5;
    QPushButton *button4;
    QPushButton *buttonClear;
    QPushButton *button2;
    QPushButton *button7;
    QPushButton *buttonCancel;
    QPushButton *button6;
    QPushButton *button00;
    QPushButton *button8;
    QPushButton *button0;
    QPushButton *button9;
    QPushButton *pushButton_14;
    QPushButton *buttonEnter;
    QPushButton *pushButton_16;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *dataTitle;
    QTextBrowser *dataResponse;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(794, 499);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 40, 382, 401));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        emulatorTitle = new QTextBrowser(verticalLayoutWidget);
        emulatorTitle->setObjectName(QString::fromUtf8("emulatorTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(emulatorTitle->sizePolicy().hasHeightForWidth());
        emulatorTitle->setSizePolicy(sizePolicy);
        emulatorTitle->setMaximumSize(QSize(16777215, 35));

        verticalLayout_3->addWidget(emulatorTitle);

        widget = new QWidget(verticalLayoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        button1 = new QPushButton(widget);
        button1->setObjectName(QString::fromUtf8("button1"));

        gridLayout_4->addWidget(button1, 0, 0, 1, 1);

        button3 = new QPushButton(widget);
        button3->setObjectName(QString::fromUtf8("button3"));

        gridLayout_4->addWidget(button3, 0, 2, 1, 1);

        button5 = new QPushButton(widget);
        button5->setObjectName(QString::fromUtf8("button5"));

        gridLayout_4->addWidget(button5, 1, 1, 1, 1);

        button4 = new QPushButton(widget);
        button4->setObjectName(QString::fromUtf8("button4"));

        gridLayout_4->addWidget(button4, 1, 0, 1, 1);

        buttonClear = new QPushButton(widget);
        buttonClear->setObjectName(QString::fromUtf8("buttonClear"));

        gridLayout_4->addWidget(buttonClear, 0, 3, 1, 1);

        button2 = new QPushButton(widget);
        button2->setObjectName(QString::fromUtf8("button2"));

        gridLayout_4->addWidget(button2, 0, 1, 1, 1);

        button7 = new QPushButton(widget);
        button7->setObjectName(QString::fromUtf8("button7"));

        gridLayout_4->addWidget(button7, 2, 0, 1, 1);

        buttonCancel = new QPushButton(widget);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        gridLayout_4->addWidget(buttonCancel, 1, 3, 1, 1);

        button6 = new QPushButton(widget);
        button6->setObjectName(QString::fromUtf8("button6"));

        gridLayout_4->addWidget(button6, 1, 2, 1, 1);

        button00 = new QPushButton(widget);
        button00->setObjectName(QString::fromUtf8("button00"));

        gridLayout_4->addWidget(button00, 3, 0, 1, 1);

        button8 = new QPushButton(widget);
        button8->setObjectName(QString::fromUtf8("button8"));

        gridLayout_4->addWidget(button8, 2, 1, 1, 1);

        button0 = new QPushButton(widget);
        button0->setObjectName(QString::fromUtf8("button0"));

        gridLayout_4->addWidget(button0, 3, 1, 1, 1);

        button9 = new QPushButton(widget);
        button9->setObjectName(QString::fromUtf8("button9"));

        gridLayout_4->addWidget(button9, 2, 2, 1, 1);

        pushButton_14 = new QPushButton(widget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

        gridLayout_4->addWidget(pushButton_14, 3, 2, 1, 1);

        buttonEnter = new QPushButton(widget);
        buttonEnter->setObjectName(QString::fromUtf8("buttonEnter"));

        gridLayout_4->addWidget(buttonEnter, 2, 3, 1, 1);

        pushButton_16 = new QPushButton(widget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));

        gridLayout_4->addWidget(pushButton_16, 3, 3, 1, 1);


        verticalLayout_3->addWidget(widget);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(410, 40, 371, 401));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        dataTitle = new QTextBrowser(verticalLayoutWidget_2);
        dataTitle->setObjectName(QString::fromUtf8("dataTitle"));
        sizePolicy.setHeightForWidth(dataTitle->sizePolicy().hasHeightForWidth());
        dataTitle->setSizePolicy(sizePolicy);
        dataTitle->setMaximumSize(QSize(16777215, 35));

        verticalLayout_4->addWidget(dataTitle);

        dataResponse = new QTextBrowser(verticalLayoutWidget_2);
        dataResponse->setObjectName(QString::fromUtf8("dataResponse"));

        verticalLayout_4->addWidget(dataResponse);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 794, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        emulatorTitle->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">ATM PinPad Emulator</span></p></body></html>", nullptr));
        button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        buttonClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        buttonCancel->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button00->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_14->setText(QString());
        buttonEnter->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        pushButton_16->setText(QString());
        dataTitle->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Data</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
