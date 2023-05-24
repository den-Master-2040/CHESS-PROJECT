/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_7;
    QWidget *page_3;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QWidget *page_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *splitters;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;
    QLabel *label_9;
    QWidget *page_5;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *splitters_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QLabel *label_8;
    QWidget *page_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QWidget *page_7;
    QLabel *label_6;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QWidget *page_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(360, 720);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x0:0, y0:0, x2:2, y2:2, stop:0 rgba(35, 31, 30, 255), stop:1 rgba(23, 26, 42, 255));"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, -20, 360, 720));
        page = new QWidget();
        page->setObjectName("page");
        label_7 = new QLabel(page);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 480, 471, 91));
        label_7->setStyleSheet(QString::fromUtf8("\n"
"\n"
"	border-radius: 7px;\n"
"	font: 700 36pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;"));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 180, 341, 71));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	box-sizing: border-box;\n"
"	border: 3px solid #202252;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(32, 38, 61, 255), stop:1 rgba(49, 35, 33, 255));\n"
"	border-radius: 7px;\n"
"	font: 700 36pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 255));\n"
"}"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 40, 291, 121));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/res/logo.png")));
        pushButton_10 = new QPushButton(page_3);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(10, 320, 341, 71));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	box-sizing: border-box;\n"
"	border: 3px solid #202252;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(32, 38, 61, 255), stop:1 rgba(49, 35, 33, 255));\n"
"	border-radius: 7px;\n"
"	font: 700 36pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 255));\n"
"}"));
        pushButton_11 = new QPushButton(page_3);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(10, 460, 341, 71));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	box-sizing: border-box;\n"
"	border: 3px solid #202252;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(32, 38, 61, 255), stop:1 rgba(49, 35, 33, 255));\n"
"	border-radius: 7px;\n"
"	font: 700 36pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 255));\n"
"}"));
        stackedWidget->addWidget(page_3);
        label_3->raise();
        pushButton_2->raise();
        pushButton_10->raise();
        pushButton_11->raise();
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        verticalLayoutWidget_2 = new QWidget(page_4);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(20, 150, 308, 301));
        splitters = new QVBoxLayout(verticalLayoutWidget_2);
        splitters->setObjectName("splitters");
        splitters->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName("label");
        label->setMinimumSize(QSize(189, 10));
        label->setMaximumSize(QSize(10, 16777215));
        label->setStyleSheet(QString::fromUtf8("\n"
"	border-radius: 7px;\n"
"	font: 700 24pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;\n"
"\n"
""));

        splitters->addWidget(label);

        lineEdit = new QLineEdit(verticalLayoutWidget_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("	border-radius: 7px;\n"
"	font-size: 20pt;\n"
"	font-style: normal;\n"
"	color: #FFFFFF;"));

        splitters->addWidget(lineEdit);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(189, 10));
        label_2->setMaximumSize(QSize(10, 16777215));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"	border-radius: 7px;\n"
"	font: 700 24pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;\n"
"\n"
""));

        splitters->addWidget(label_2);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setStyleSheet(QString::fromUtf8("	border-radius: 7px;\n"
"	font-size: 20pt;\n"
"	font-style: normal;\n"
"	color: #FFFFFF;"));

        splitters->addWidget(lineEdit_2);

        pushButton_4 = new QPushButton(verticalLayoutWidget_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	box-sizing: border-box;\n"
"	border: 3px solid #202252;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(32, 38, 61, 255), stop:1 rgba(49, 35, 33, 255));\n"
"	border-radius: 7px;\n"
"	font: 700 36pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 255));\n"
"}"));

        splitters->addWidget(pushButton_4);

        label_9 = new QLabel(page_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 50, 331, 51));
        label_9->setStyleSheet(QString::fromUtf8("	border-radius: 7px;\n"
"	font: 700 22pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;"));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        verticalLayoutWidget_3 = new QWidget(page_5);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(10, 150, 341, 281));
        splitters_2 = new QVBoxLayout(verticalLayoutWidget_3);
        splitters_2->setObjectName("splitters_2");
        splitters_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(189, 10));
        label_4->setMaximumSize(QSize(10, 16777215));
        label_4->setStyleSheet(QString::fromUtf8("\n"
"	border-radius: 7px;\n"
"	font: 700 24pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;\n"
"\n"
""));

        splitters_2->addWidget(label_4);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setStyleSheet(QString::fromUtf8("	border-radius: 7px;\n"
"	font-size: 20pt;\n"
"	font-style: normal;\n"
"	color: #FFFFFF;"));

        splitters_2->addWidget(lineEdit_3);

        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(189, 10));
        label_5->setMaximumSize(QSize(10, 16777215));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"	border-radius: 7px;\n"
"	font: 700 24pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;\n"
"\n"
""));

        splitters_2->addWidget(label_5);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setStyleSheet(QString::fromUtf8("	border-radius: 7px;\n"
"	font-size: 20pt;\n"
"	font-style: normal;\n"
"	color: #FFFFFF;"));

        splitters_2->addWidget(lineEdit_4);

        pushButton = new QPushButton(verticalLayoutWidget_3);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	box-sizing: border-box;\n"
"	border: 3px solid #202252;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(32, 38, 61, 255), stop:1 rgba(49, 35, 33, 255));\n"
"	border-radius: 7px;\n"
"	font: 700 28pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 255));\n"
"}"));

        splitters_2->addWidget(pushButton);

        label_8 = new QLabel(page_5);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 50, 331, 51));
        label_8->setStyleSheet(QString::fromUtf8("	border-radius: 7px;\n"
"	font: 700 22pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;"));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        pushButton_7 = new QPushButton(page_6);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(30, 220, 301, 101));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	box-sizing: border-box;\n"
"	border: 3px solid #202252;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(32, 38, 61, 255), stop:1 rgba(49, 35, 33, 255));\n"
"	border-radius: 7px;\n"
"	font: 700 36pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 255));\n"
"}"));
        pushButton_6 = new QPushButton(page_6);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(30, 340, 301, 101));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	box-sizing: border-box;\n"
"	border: 3px solid #202252;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(32, 38, 61, 255), stop:1 rgba(49, 35, 33, 255));\n"
"	border-radius: 7px;\n"
"	font: 700 28pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 255));\n"
"}"));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        label_6 = new QLabel(page_7);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 340, 361, 91));
        label_6->setStyleSheet(QString::fromUtf8("\n"
"\n"
"	border-radius: 7px;\n"
"	font: 700 25pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;"));
        pushButton_12 = new QPushButton(page_7);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(10, 10, 341, 341));
        pushButton_13 = new QPushButton(page_7);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(10, 490, 131, 81));
        pushButton_13->setStyleSheet(QString::fromUtf8("	border-radius: 7px;\n"
"	font: 700 24pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #004220;\n"
"	\n"
""));
        pushButton_14 = new QPushButton(page_7);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(210, 490, 131, 81));
        pushButton_14->setStyleSheet(QString::fromUtf8("\n"
"	border-radius: 7px;\n"
"	font: 700 24pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;\n"
"\n"
""));
        pushButton_15 = new QPushButton(page_7);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(130, 650, 101, 41));
        pushButton_15->setStyleSheet(QString::fromUtf8("	border-radius: 7px;\n"
"	font: 700 24pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #991400;\n"
"	\n"
""));
        stackedWidget->addWidget(page_7);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 190, 301, 101));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	box-sizing: border-box;\n"
"	border: 3px solid #202252;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(32, 38, 61, 255), stop:1 rgba(49, 35, 33, 255));\n"
"	border-radius: 7px;\n"
"	font: 700 36pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 255));\n"
"}"));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(30, 310, 301, 101));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	box-sizing: border-box;\n"
"	border: 3px solid #202252;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(32, 38, 61, 255), stop:1 rgba(49, 35, 33, 255));\n"
"	border-radius: 7px;\n"
"	font: 700 28pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 255));\n"
"}"));
        stackedWidget->addWidget(page_2);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(1410, 840, 80, 24));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(1270, 840, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 360, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\321\202 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217..", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        label_3->setText(QString());
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ip Addres", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "localhost", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "port", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "2323", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\270\320\263\321\200\321\213", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "ip Addres", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "192.168.1.103", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "port", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MainWindow", "2323", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\321\201\320\276\320\265\320\264\320\270\320\275\320\270\321\202\321\214\321\201\321\217", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \320\272 \320\270\320\263\321\200\320\265", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\321\202 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217..", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "\320\241\321\205\320\276\320\264\320\270\321\202\321\214", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "->", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
