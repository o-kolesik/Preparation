/********************************************************************************
** Form generated from reading UI file 'startwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWINDOW_H
#define UI_STARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;

    void setupUi(QDialog *StartWindow)
    {
        if (StartWindow->objectName().isEmpty())
            StartWindow->setObjectName(QString::fromUtf8("StartWindow"));
        StartWindow->resize(548, 474);
        StartWindow->setAutoFillBackground(false);
        StartWindow->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	\n"
"	border-image: url(:/img/img/back_3.jpg);\n"
"}\n"
"\n"
"QPushButton{\n"
"  display: inline-block;\n"
"  font-size: 24px;\n"
"  color: #fff;\n"
"	\n"
"	border-image: url(:/img/img/back_1.jpg);\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:hover{\n"
"	  display: inline-block;\n"
"  font-size: 24px;\n"
"  color: #fff;\n"
"	\n"
"	border-image: url(:/img/img/back_2.jpg);\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:pressed{\n"
"  display: inline-block;\n"
"  font-size: 24px;\n"
"  color: #fff;\n"
"	\n"
"	border-image: url(:/img/img/back.jpg);\n"
"  border-radius: 10px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(StartWindow);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(StartWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(StartWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        widget = new QWidget(StartWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("pushButton{\n"
"background-image: url(:/img/img/button.jpg);\n"
"}"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);


        horizontalLayout->addWidget(widget);

        label = new QLabel(StartWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(StartWindow);

        QMetaObject::connectSlotsByName(StartWindow);
    } // setupUi

    void retranslateUi(QDialog *StartWindow)
    {
        StartWindow->setWindowTitle(QCoreApplication::translate("StartWindow", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("StartWindow", "logo", nullptr));
        label_2->setText(QCoreApplication::translate("StartWindow", "1", nullptr));
        pushButton->setText(QCoreApplication::translate("StartWindow", "Nov\303\241 postava", nullptr));
        pushButton_2->setText(QCoreApplication::translate("StartWindow", "Na\304\215\303\255st", nullptr));
        pushButton_3->setText(QCoreApplication::translate("StartWindow", "Zalo\305\276it partu", nullptr));
        pushButton_4->setText(QCoreApplication::translate("StartWindow", "Konec", nullptr));
        label->setText(QCoreApplication::translate("StartWindow", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartWindow: public Ui_StartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWINDOW_H
