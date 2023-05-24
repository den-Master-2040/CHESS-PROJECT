/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.9
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
    QLabel *label_3;
    QPushButton *pushButton_2;
    QWidget *page_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *splitters;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;
    QWidget *page_5;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *splitters_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QWidget *page_6;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QWidget *page_7;
    QLabel *label_6;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
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
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1620, 920);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x0:0, y0:0, x2:2, y2:2, stop:0 rgba(35, 31, 30, 255), stop:1 rgba(23, 26, 42, 255));"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 1601, 821));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(960, 60, 471, 91));
        label_7->setStyleSheet(QString::fromUtf8("\n"
"\n"
"	border-radius: 7px;\n"
"	font: 700 36pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;"));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 1700, 900));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/res/small.png")));
        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(920, 630, 261, 71));
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
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayoutWidget_2 = new QWidget(page_4);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(30, 130, 308, 301));
        splitters = new QVBoxLayout(verticalLayoutWidget_2);
        splitters->setObjectName(QString::fromUtf8("splitters"));
        splitters->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
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
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        splitters->addWidget(lineEdit);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
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
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        splitters->addWidget(lineEdit_2);

        pushButton_4 = new QPushButton(verticalLayoutWidget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
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

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayoutWidget_3 = new QWidget(page_5);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(140, 150, 405, 281));
        splitters_2 = new QVBoxLayout(verticalLayoutWidget_3);
        splitters_2->setObjectName(QString::fromUtf8("splitters_2"));
        splitters_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
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
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        splitters_2->addWidget(lineEdit_3);

        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
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
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        splitters_2->addWidget(lineEdit_4);

        pushButton = new QPushButton(verticalLayoutWidget_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        splitters_2->addWidget(pushButton);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        pushButton_6 = new QPushButton(page_6);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(300, 290, 301, 101));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_7 = new QPushButton(page_6);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(710, 290, 481, 101));
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
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        label_6 = new QLabel(page_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(930, 20, 471, 91));
        label_6->setStyleSheet(QString::fromUtf8("\n"
"\n"
"	border-radius: 7px;\n"
"	font: 700 36pt \"Constantia\";\n"
"	font-style: normal;\n"
"	color: #FFFFFF;"));
        pushButton_10 = new QPushButton(page_7);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(20, 10, 791, 791));
        pushButton_11 = new QPushButton(page_7);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(940, 180, 271, 81));
        pushButton_12 = new QPushButton(page_7);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(1250, 180, 311, 81));
        pushButton_13 = new QPushButton(page_7);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(1190, 630, 171, 71));
        stackedWidget->addWidget(page_7);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(930, 250, 301, 101));
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
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(1360, 250, 481, 101));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        stackedWidget->addWidget(page_2);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(1410, 840, 80, 24));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(1270, 840, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1620, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\321\202 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217..", nullptr));
        label_3->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ip Addres", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "localhost", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "port", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "2323", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "ip Addres", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "localhost", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "port", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MainWindow", "2323", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\321\201\320\276\320\265\320\264\320\270\320\275\320\270\321\202\321\214\321\201\321\217", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\321\202 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217..", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
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
