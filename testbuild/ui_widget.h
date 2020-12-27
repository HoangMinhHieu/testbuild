/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QRadioButton *InitDevice;
    QRadioButton *DisEntry;
    QRadioButton *OpenDevice;
    QPushButton *pushButton;
    QRadioButton *Eject;
    QTextBrowser *textBrowser;
    QRadioButton *CallEntry;
    QPushButton *pushButton_2;
    QRadioButton *Capture;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1021, 477);
        InitDevice = new QRadioButton(Widget);
        InitDevice->setObjectName(QStringLiteral("InitDevice"));
        InitDevice->setGeometry(QRect(390, 130, 119, 27));
        DisEntry = new QRadioButton(Widget);
        DisEntry->setObjectName(QStringLiteral("DisEntry"));
        DisEntry->setGeometry(QRect(390, 190, 119, 27));
        OpenDevice = new QRadioButton(Widget);
        OpenDevice->setObjectName(QStringLiteral("OpenDevice"));
        OpenDevice->setGeometry(QRect(390, 100, 119, 27));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(710, 190, 99, 30));
        Eject = new QRadioButton(Widget);
        Eject->setObjectName(QStringLiteral("Eject"));
        Eject->setGeometry(QRect(390, 220, 119, 27));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(50, 70, 331, 331));
        CallEntry = new QRadioButton(Widget);
        CallEntry->setObjectName(QStringLiteral("CallEntry"));
        CallEntry->setGeometry(QRect(390, 160, 119, 27));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(570, 190, 99, 30));
        Capture = new QRadioButton(Widget);
        Capture->setObjectName(QStringLiteral("Capture"));
        Capture->setGeometry(QRect(390, 250, 119, 27));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        InitDevice->setText(QApplication::translate("Widget", "InitDevice", nullptr));
        DisEntry->setText(QApplication::translate("Widget", "DisEntry", nullptr));
        OpenDevice->setText(QApplication::translate("Widget", "OpenDevice", nullptr));
        pushButton->setText(QApplication::translate("Widget", "close", nullptr));
        Eject->setText(QApplication::translate("Widget", "Eject", nullptr));
        textBrowser->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'PibotoLt'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Please select a menu(0~9):</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    ---------Communication Settings----------------------</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    ---------Reader Operation----------------------------</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    1:  OpenDevice.</p>\n"
"<p style=\""
                        " margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    2:  InitDevice.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    3:  CallEntry.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    4:  DisEntry.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    5:  Eject.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    6:  Capture.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    ----------Exit -----------------------------</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   "
                        "</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        CallEntry->setText(QApplication::translate("Widget", "CallEntry", nullptr));
        pushButton_2->setText(QApplication::translate("Widget", "ok", nullptr));
        Capture->setText(QApplication::translate("Widget", "Capture", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
