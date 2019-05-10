/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *key_Minus;
    QPushButton *key_EQ;
    QPushButton *key_6;
    QPushButton *key_Percent;
    QPushButton *key_ParClose;
    QPushButton *key_ParOpen;
    QPushButton *key_1;
    QPushButton *key_2;
    QPushButton *key_3;
    QPushButton *key_Plus;
    QPushButton *key_0;
    QPushButton *key_000;
    QPushButton *key_Comma;
    QPushButton *key_8;
    QPushButton *key_VAT;
    QPushButton *key_C;
    QPushButton *key_CE;
    QPushButton *key_Mul;
    QPushButton *key_9;
    QPushButton *key_4;
    QPushButton *key_Div;
    QPushButton *key_Backspace;
    QPushButton *key_7;
    QPushButton *key_5;
    QPushButton *key_OnOff;
    QPushButton *key_Mode;
    QPushButton *key_Start;
    QPushButton *key_Stop;
    QFrame *frame;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLCDNumber *dig_5;
    QLCDNumber *dig_0;
    QLCDNumber *dig_2;
    QLCDNumber *dig_7;
    QLCDNumber *dig_6;
    QLCDNumber *dig_4;
    QLCDNumber *dig_3;
    QLCDNumber *dig_8;
    QLCDNumber *dig_1;
    QLCDNumber *dig_9;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *dot_2;
    QLabel *dot_5;
    QLabel *dot_4;
    QLabel *dot_6;
    QLabel *dot_7;
    QLabel *dot_8;
    QLabel *dot_0;
    QLabel *dot_9;
    QLabel *dot_1;
    QLabel *dot_3;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *colon_2;
    QLabel *colon_4;
    QLabel *colon_5;
    QLabel *colon_6;
    QLabel *colon_7;
    QLabel *colon_8;
    QLabel *colon_0;
    QLabel *colon_9;
    QLabel *colon_1;
    QLabel *colon_3;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLabel *comma_2;
    QLabel *comma_4;
    QLabel *comma_5;
    QLabel *comma_6;
    QLabel *comma_7;
    QLabel *comma_8;
    QLabel *comma_0;
    QLabel *comma_9;
    QLabel *comma_1;
    QLabel *comma_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1275, 727);
        MainWindow->setStyleSheet(QString::fromUtf8("QGridLayout {\n"
"    background-color: #FF0000;\n"
"}\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(16, 120, 331, 361));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        key_Minus = new QPushButton(gridLayoutWidget_2);
        key_Minus->setObjectName(QString::fromUtf8("key_Minus"));
        key_Minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_Minus, 4, 3, 1, 1);

        key_EQ = new QPushButton(gridLayoutWidget_2);
        key_EQ->setObjectName(QString::fromUtf8("key_EQ"));
        key_EQ->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_EQ, 6, 3, 1, 1);

        key_6 = new QPushButton(gridLayoutWidget_2);
        key_6->setObjectName(QString::fromUtf8("key_6"));
        key_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8ff;\n"
"    width: 60px;;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_6, 4, 2, 1, 1);

        key_Percent = new QPushButton(gridLayoutWidget_2);
        key_Percent->setObjectName(QString::fromUtf8("key_Percent"));
        key_Percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_Percent, 1, 2, 1, 1);

        key_ParClose = new QPushButton(gridLayoutWidget_2);
        key_ParClose->setObjectName(QString::fromUtf8("key_ParClose"));
        key_ParClose->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_ParClose, 1, 1, 1, 1);

        key_ParOpen = new QPushButton(gridLayoutWidget_2);
        key_ParOpen->setObjectName(QString::fromUtf8("key_ParOpen"));
        key_ParOpen->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_ParOpen, 1, 0, 1, 1);

        key_1 = new QPushButton(gridLayoutWidget_2);
        key_1->setObjectName(QString::fromUtf8("key_1"));
        key_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8ff;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_1, 5, 0, 1, 1);

        key_2 = new QPushButton(gridLayoutWidget_2);
        key_2->setObjectName(QString::fromUtf8("key_2"));
        key_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8ff;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));
        key_2->setAutoDefault(false);
        key_2->setFlat(false);

        gridLayout_2->addWidget(key_2, 5, 1, 1, 1);

        key_3 = new QPushButton(gridLayoutWidget_2);
        key_3->setObjectName(QString::fromUtf8("key_3"));
        key_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8ff;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_3, 5, 2, 1, 1);

        key_Plus = new QPushButton(gridLayoutWidget_2);
        key_Plus->setObjectName(QString::fromUtf8("key_Plus"));
        key_Plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_Plus, 5, 3, 1, 1);

        key_0 = new QPushButton(gridLayoutWidget_2);
        key_0->setObjectName(QString::fromUtf8("key_0"));
        key_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8ff;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_0, 6, 1, 1, 1);

        key_000 = new QPushButton(gridLayoutWidget_2);
        key_000->setObjectName(QString::fromUtf8("key_000"));
        key_000->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8ff;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_000, 6, 0, 1, 1);

        key_Comma = new QPushButton(gridLayoutWidget_2);
        key_Comma->setObjectName(QString::fromUtf8("key_Comma"));
        key_Comma->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_Comma, 6, 2, 1, 1);

        key_8 = new QPushButton(gridLayoutWidget_2);
        key_8->setObjectName(QString::fromUtf8("key_8"));
        key_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8ff;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_8, 3, 1, 1, 1);

        key_VAT = new QPushButton(gridLayoutWidget_2);
        key_VAT->setObjectName(QString::fromUtf8("key_VAT"));
        key_VAT->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 12pt \"MS Shell Dlg 2\";\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_VAT, 1, 3, 1, 1);

        key_C = new QPushButton(gridLayoutWidget_2);
        key_C->setObjectName(QString::fromUtf8("key_C"));
        key_C->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_C, 2, 0, 1, 1);

        key_CE = new QPushButton(gridLayoutWidget_2);
        key_CE->setObjectName(QString::fromUtf8("key_CE"));
        key_CE->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_CE, 2, 1, 1, 1);

        key_Mul = new QPushButton(gridLayoutWidget_2);
        key_Mul->setObjectName(QString::fromUtf8("key_Mul"));
        key_Mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_Mul, 3, 3, 1, 1);

        key_9 = new QPushButton(gridLayoutWidget_2);
        key_9->setObjectName(QString::fromUtf8("key_9"));
        key_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8ff;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_9, 3, 2, 1, 1);

        key_4 = new QPushButton(gridLayoutWidget_2);
        key_4->setObjectName(QString::fromUtf8("key_4"));
        key_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8ff;\n"
"    width: 60px;;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_4, 4, 0, 1, 1);

        key_Div = new QPushButton(gridLayoutWidget_2);
        key_Div->setObjectName(QString::fromUtf8("key_Div"));
        key_Div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_Div, 2, 3, 1, 1);

        key_Backspace = new QPushButton(gridLayoutWidget_2);
        key_Backspace->setObjectName(QString::fromUtf8("key_Backspace"));
        key_Backspace->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_Backspace, 2, 2, 1, 1);

        key_7 = new QPushButton(gridLayoutWidget_2);
        key_7->setObjectName(QString::fromUtf8("key_7"));
        key_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8ff;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_7, 3, 0, 1, 1);

        key_5 = new QPushButton(gridLayoutWidget_2);
        key_5->setObjectName(QString::fromUtf8("key_5"));
        key_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8ff;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_5, 4, 1, 1, 1);

        key_OnOff = new QPushButton(gridLayoutWidget_2);
        key_OnOff->setObjectName(QString::fromUtf8("key_OnOff"));
        key_OnOff->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 12pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_OnOff, 0, 0, 1, 1);

        key_Mode = new QPushButton(gridLayoutWidget_2);
        key_Mode->setObjectName(QString::fromUtf8("key_Mode"));
        key_Mode->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 12pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_Mode, 0, 1, 1, 1);

        key_Start = new QPushButton(gridLayoutWidget_2);
        key_Start->setObjectName(QString::fromUtf8("key_Start"));
        key_Start->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 12pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_Start, 0, 2, 1, 1);

        key_Stop = new QPushButton(gridLayoutWidget_2);
        key_Stop->setObjectName(QString::fromUtf8("key_Stop"));
        key_Stop->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 12pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 2px solid #aaaaaa;\n"
"    border-radius: 6px;\n"
"    background-color: #e8e8e8;\n"
"    width: 60px;\n"
"	height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 3px solid #888888;\n"
"}"));

        gridLayout_2->addWidget(key_Stop, 0, 3, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setRowStretch(2, 1);
        gridLayout_2->setRowStretch(3, 1);
        gridLayout_2->setRowStretch(4, 1);
        gridLayout_2->setRowStretch(5, 1);
        gridLayout_2->setRowStretch(6, 1);
        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(2, 1);
        gridLayout_2->setColumnStretch(3, 1);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(16, 20, 331, 80));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border: 4px solid #888888;\n"
"    border-radius: 12px;\n"
"    background-color: #F0F3DC;\n"
"}\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(13, 4, 301, 71));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        dig_5 = new QLCDNumber(gridLayoutWidget);
        dig_5->setObjectName(QString::fromUtf8("dig_5"));
        dig_5->setStyleSheet(QString::fromUtf8("QLCDNumber {\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));
        dig_5->setSmallDecimalPoint(false);
        dig_5->setDigitCount(1);
        dig_5->setMode(QLCDNumber::Hex);

        gridLayout->addWidget(dig_5, 0, 4, 1, 1);

        dig_0 = new QLCDNumber(gridLayoutWidget);
        dig_0->setObjectName(QString::fromUtf8("dig_0"));
        dig_0->setStyleSheet(QString::fromUtf8("QLCDNumber {\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));
        dig_0->setSmallDecimalPoint(false);
        dig_0->setDigitCount(1);
        dig_0->setMode(QLCDNumber::Hex);
        dig_0->setProperty("intValue", QVariant(0));

        gridLayout->addWidget(dig_0, 0, 9, 1, 1);

        dig_2 = new QLCDNumber(gridLayoutWidget);
        dig_2->setObjectName(QString::fromUtf8("dig_2"));
        dig_2->setStyleSheet(QString::fromUtf8("QLCDNumber {\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));
        dig_2->setSmallDecimalPoint(false);
        dig_2->setDigitCount(1);
        dig_2->setMode(QLCDNumber::Hex);

        gridLayout->addWidget(dig_2, 0, 7, 1, 1);

        dig_7 = new QLCDNumber(gridLayoutWidget);
        dig_7->setObjectName(QString::fromUtf8("dig_7"));
        dig_7->setStyleSheet(QString::fromUtf8("QLCDNumber {\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));
        dig_7->setSmallDecimalPoint(false);
        dig_7->setDigitCount(1);
        dig_7->setMode(QLCDNumber::Hex);

        gridLayout->addWidget(dig_7, 0, 2, 1, 1);

        dig_6 = new QLCDNumber(gridLayoutWidget);
        dig_6->setObjectName(QString::fromUtf8("dig_6"));
        dig_6->setStyleSheet(QString::fromUtf8("QLCDNumber {\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));
        dig_6->setSmallDecimalPoint(false);
        dig_6->setDigitCount(1);
        dig_6->setMode(QLCDNumber::Hex);

        gridLayout->addWidget(dig_6, 0, 3, 1, 1);

        dig_4 = new QLCDNumber(gridLayoutWidget);
        dig_4->setObjectName(QString::fromUtf8("dig_4"));
        dig_4->setStyleSheet(QString::fromUtf8("QLCDNumber {\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));
        dig_4->setSmallDecimalPoint(false);
        dig_4->setDigitCount(1);
        dig_4->setMode(QLCDNumber::Hex);

        gridLayout->addWidget(dig_4, 0, 5, 1, 1);

        dig_3 = new QLCDNumber(gridLayoutWidget);
        dig_3->setObjectName(QString::fromUtf8("dig_3"));
        dig_3->setStyleSheet(QString::fromUtf8("QLCDNumber {\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));
        dig_3->setSmallDecimalPoint(false);
        dig_3->setDigitCount(1);
        dig_3->setMode(QLCDNumber::Hex);

        gridLayout->addWidget(dig_3, 0, 6, 1, 1);

        dig_8 = new QLCDNumber(gridLayoutWidget);
        dig_8->setObjectName(QString::fromUtf8("dig_8"));
        dig_8->setStyleSheet(QString::fromUtf8("QLCDNumber {\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));
        dig_8->setSmallDecimalPoint(false);
        dig_8->setDigitCount(1);
        dig_8->setMode(QLCDNumber::Hex);

        gridLayout->addWidget(dig_8, 0, 1, 1, 1);

        dig_1 = new QLCDNumber(gridLayoutWidget);
        dig_1->setObjectName(QString::fromUtf8("dig_1"));
        dig_1->setStyleSheet(QString::fromUtf8("QLCDNumber {\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));
        dig_1->setSmallDecimalPoint(false);
        dig_1->setDigitCount(1);
        dig_1->setMode(QLCDNumber::Hex);

        gridLayout->addWidget(dig_1, 0, 8, 1, 1);

        dig_9 = new QLCDNumber(gridLayoutWidget);
        dig_9->setObjectName(QString::fromUtf8("dig_9"));
        dig_9->setStyleSheet(QString::fromUtf8("QLCDNumber {\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));
        dig_9->setSmallDecimalPoint(false);
        dig_9->setDigitCount(1);
        dig_9->setMode(QLCDNumber::Hex);

        gridLayout->addWidget(dig_9, 0, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralWidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(55, 56, 301, 31));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        dot_2 = new QLabel(gridLayoutWidget_3);
        dot_2->setObjectName(QString::fromUtf8("dot_2"));
        dot_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_3->addWidget(dot_2, 0, 7, 1, 1);

        dot_5 = new QLabel(gridLayoutWidget_3);
        dot_5->setObjectName(QString::fromUtf8("dot_5"));
        dot_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_3->addWidget(dot_5, 0, 4, 1, 1);

        dot_4 = new QLabel(gridLayoutWidget_3);
        dot_4->setObjectName(QString::fromUtf8("dot_4"));
        dot_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_3->addWidget(dot_4, 0, 5, 1, 1);

        dot_6 = new QLabel(gridLayoutWidget_3);
        dot_6->setObjectName(QString::fromUtf8("dot_6"));
        dot_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_3->addWidget(dot_6, 0, 3, 1, 1);

        dot_7 = new QLabel(gridLayoutWidget_3);
        dot_7->setObjectName(QString::fromUtf8("dot_7"));
        dot_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_3->addWidget(dot_7, 0, 2, 1, 1);

        dot_8 = new QLabel(gridLayoutWidget_3);
        dot_8->setObjectName(QString::fromUtf8("dot_8"));
        dot_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_3->addWidget(dot_8, 0, 1, 1, 1);

        dot_0 = new QLabel(gridLayoutWidget_3);
        dot_0->setObjectName(QString::fromUtf8("dot_0"));
        dot_0->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_3->addWidget(dot_0, 0, 9, 1, 1);

        dot_9 = new QLabel(gridLayoutWidget_3);
        dot_9->setObjectName(QString::fromUtf8("dot_9"));
        dot_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_3->addWidget(dot_9, 0, 0, 1, 1);

        dot_1 = new QLabel(gridLayoutWidget_3);
        dot_1->setObjectName(QString::fromUtf8("dot_1"));
        dot_1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_3->addWidget(dot_1, 0, 8, 1, 1);

        dot_3 = new QLabel(gridLayoutWidget_3);
        dot_3->setObjectName(QString::fromUtf8("dot_3"));
        dot_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_3->addWidget(dot_3, 0, 6, 1, 1);

        gridLayoutWidget_4 = new QWidget(centralWidget);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(55, 43, 301, 31));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        colon_2 = new QLabel(gridLayoutWidget_4);
        colon_2->setObjectName(QString::fromUtf8("colon_2"));
        colon_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_4->addWidget(colon_2, 0, 7, 1, 1);

        colon_4 = new QLabel(gridLayoutWidget_4);
        colon_4->setObjectName(QString::fromUtf8("colon_4"));
        colon_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_4->addWidget(colon_4, 0, 5, 1, 1);

        colon_5 = new QLabel(gridLayoutWidget_4);
        colon_5->setObjectName(QString::fromUtf8("colon_5"));
        colon_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_4->addWidget(colon_5, 0, 4, 1, 1);

        colon_6 = new QLabel(gridLayoutWidget_4);
        colon_6->setObjectName(QString::fromUtf8("colon_6"));
        colon_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_4->addWidget(colon_6, 0, 3, 1, 1);

        colon_7 = new QLabel(gridLayoutWidget_4);
        colon_7->setObjectName(QString::fromUtf8("colon_7"));
        colon_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_4->addWidget(colon_7, 0, 2, 1, 1);

        colon_8 = new QLabel(gridLayoutWidget_4);
        colon_8->setObjectName(QString::fromUtf8("colon_8"));
        colon_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_4->addWidget(colon_8, 0, 1, 1, 1);

        colon_0 = new QLabel(gridLayoutWidget_4);
        colon_0->setObjectName(QString::fromUtf8("colon_0"));
        colon_0->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_4->addWidget(colon_0, 0, 9, 1, 1);

        colon_9 = new QLabel(gridLayoutWidget_4);
        colon_9->setObjectName(QString::fromUtf8("colon_9"));
        colon_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_4->addWidget(colon_9, 0, 0, 1, 1);

        colon_1 = new QLabel(gridLayoutWidget_4);
        colon_1->setObjectName(QString::fromUtf8("colon_1"));
        colon_1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_4->addWidget(colon_1, 0, 8, 1, 1);

        colon_3 = new QLabel(gridLayoutWidget_4);
        colon_3->setObjectName(QString::fromUtf8("colon_3"));
        colon_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_4->addWidget(colon_3, 0, 6, 1, 1);

        gridLayoutWidget_5 = new QWidget(centralWidget);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(56, 52, 301, 41));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        comma_2 = new QLabel(gridLayoutWidget_5);
        comma_2->setObjectName(QString::fromUtf8("comma_2"));
        comma_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 12pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_5->addWidget(comma_2, 0, 7, 1, 1);

        comma_4 = new QLabel(gridLayoutWidget_5);
        comma_4->setObjectName(QString::fromUtf8("comma_4"));
        comma_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 12pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_5->addWidget(comma_4, 0, 5, 1, 1);

        comma_5 = new QLabel(gridLayoutWidget_5);
        comma_5->setObjectName(QString::fromUtf8("comma_5"));
        comma_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 12pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_5->addWidget(comma_5, 0, 4, 1, 1);

        comma_6 = new QLabel(gridLayoutWidget_5);
        comma_6->setObjectName(QString::fromUtf8("comma_6"));
        comma_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 12pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_5->addWidget(comma_6, 0, 3, 1, 1);

        comma_7 = new QLabel(gridLayoutWidget_5);
        comma_7->setObjectName(QString::fromUtf8("comma_7"));
        comma_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 12pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_5->addWidget(comma_7, 0, 2, 1, 1);

        comma_8 = new QLabel(gridLayoutWidget_5);
        comma_8->setObjectName(QString::fromUtf8("comma_8"));
        comma_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 12pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_5->addWidget(comma_8, 0, 1, 1, 1);

        comma_0 = new QLabel(gridLayoutWidget_5);
        comma_0->setObjectName(QString::fromUtf8("comma_0"));
        comma_0->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 12pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_5->addWidget(comma_0, 0, 9, 1, 1);

        comma_9 = new QLabel(gridLayoutWidget_5);
        comma_9->setObjectName(QString::fromUtf8("comma_9"));
        comma_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 12pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_5->addWidget(comma_9, 0, 0, 1, 1);

        comma_1 = new QLabel(gridLayoutWidget_5);
        comma_1->setObjectName(QString::fromUtf8("comma_1"));
        comma_1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 12pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_5->addWidget(comma_1, 0, 8, 1, 1);

        comma_3 = new QLabel(gridLayoutWidget_5);
        comma_3->setObjectName(QString::fromUtf8("comma_3"));
        comma_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 12pt \"MS Shell Dlg 2\";\n"
"	font-weight: bold;\n"
"    color: #000040;\n"
"    border: 0px solid #000000;\n"
"}\n"
""));

        gridLayout_5->addWidget(comma_3, 0, 6, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1275, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        key_2->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        key_Minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        key_EQ->setText(QApplication::translate("MainWindow", "=", nullptr));
        key_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        key_Percent->setText(QApplication::translate("MainWindow", "%", nullptr));
        key_ParClose->setText(QApplication::translate("MainWindow", ")", nullptr));
        key_ParOpen->setText(QApplication::translate("MainWindow", "(", nullptr));
        key_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        key_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        key_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        key_Plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        key_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        key_000->setText(QApplication::translate("MainWindow", "000", nullptr));
        key_Comma->setText(QApplication::translate("MainWindow", ",", nullptr));
        key_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        key_VAT->setText(QApplication::translate("MainWindow", "MwSt", nullptr));
        key_C->setText(QApplication::translate("MainWindow", "C", nullptr));
        key_CE->setText(QApplication::translate("MainWindow", "CE", nullptr));
        key_Mul->setText(QApplication::translate("MainWindow", "x", nullptr));
        key_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        key_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        key_Div->setText(QApplication::translate("MainWindow", "/", nullptr));
        key_Backspace->setText(QApplication::translate("MainWindow", "<-", nullptr));
        key_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        key_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        key_OnOff->setText(QApplication::translate("MainWindow", "On/Off", nullptr));
        key_Mode->setText(QApplication::translate("MainWindow", "Mode", nullptr));
        key_Start->setText(QApplication::translate("MainWindow", "Start", nullptr));
        key_Stop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        dot_2->setText(QApplication::translate("MainWindow", ".", nullptr));
        dot_5->setText(QApplication::translate("MainWindow", ".", nullptr));
        dot_4->setText(QApplication::translate("MainWindow", ".", nullptr));
        dot_6->setText(QApplication::translate("MainWindow", ".", nullptr));
        dot_7->setText(QApplication::translate("MainWindow", ".", nullptr));
        dot_8->setText(QApplication::translate("MainWindow", ".", nullptr));
        dot_0->setText(QApplication::translate("MainWindow", ".", nullptr));
        dot_9->setText(QApplication::translate("MainWindow", ".", nullptr));
        dot_1->setText(QApplication::translate("MainWindow", ".", nullptr));
        dot_3->setText(QApplication::translate("MainWindow", ".", nullptr));
        colon_2->setText(QApplication::translate("MainWindow", ":", nullptr));
        colon_4->setText(QApplication::translate("MainWindow", ":", nullptr));
        colon_5->setText(QApplication::translate("MainWindow", ":", nullptr));
        colon_6->setText(QApplication::translate("MainWindow", ":", nullptr));
        colon_7->setText(QApplication::translate("MainWindow", ":", nullptr));
        colon_8->setText(QApplication::translate("MainWindow", ":", nullptr));
        colon_0->setText(QApplication::translate("MainWindow", ":", nullptr));
        colon_9->setText(QApplication::translate("MainWindow", ":", nullptr));
        colon_1->setText(QApplication::translate("MainWindow", ":", nullptr));
        colon_3->setText(QApplication::translate("MainWindow", ":", nullptr));
        comma_2->setText(QApplication::translate("MainWindow", ",", nullptr));
        comma_4->setText(QApplication::translate("MainWindow", ",", nullptr));
        comma_5->setText(QApplication::translate("MainWindow", ",", nullptr));
        comma_6->setText(QApplication::translate("MainWindow", ",", nullptr));
        comma_7->setText(QApplication::translate("MainWindow", ",", nullptr));
        comma_8->setText(QApplication::translate("MainWindow", ",", nullptr));
        comma_0->setText(QApplication::translate("MainWindow", ",", nullptr));
        comma_9->setText(QApplication::translate("MainWindow", ",", nullptr));
        comma_1->setText(QApplication::translate("MainWindow", ",", nullptr));
        comma_3->setText(QApplication::translate("MainWindow", ",", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
