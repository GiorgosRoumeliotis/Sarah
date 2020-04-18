/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(400, 300);
        Settings->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family:century gothic;\n"
"	font-size: 16px;\n"
"}\n"
"\n"
"\n"
"QFrame{\n"
"	background:rgba(0, 0, 0, 200);\n"
"	border-radius: 15px;\n"
"}\n"
"\n"
"#frame_2{\n"
"	background:transparent;\n"
"}\n"
"QPushButton{\n"
"	font-size:14px;\n"
"	background:green;\n"
"	border-radius: 15px;\n"
"}\n"
"\n"
"QToolButton{\n"
"	background:green;\n"
"	border-style: solid;\n"
"	color:darkgray;\n"
"	font-size:13px;\n"
"	border-radius: 60px;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"	background:#16a016;\n"
"	border-style: solid;\n"
"	color:darkgray;\n"
"	font-size:13px;\n"
"	border-radius: 60px;\n"
"}\n"
"\n"
"QLabel{\n"
"	color: white;\n"
"	background:transparent;\n"
"}\n"
"\n"
"QPushButton{\n"
"	color:white;\n"
"	/* border-radius: 15px; */\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	/*color:darkgray;*/\n"
"	background-color:#16a016;\n"
"	border: black;\n"
"	/* border-radius: 15px; */\n"
"}\n"
"\n"
"QLineEdit{\n"
"	background: transparent;\n"
"	border: none;\n"
"/*	color: #717072;*/\n"
"color:white;\n"
"	border-bottom: 1px "
                        "solid #717072;\n"
"	font-size: 18px;\n"
"\n"
"}\n"
"\n"
"QCheckBox{\n"
"	font-size:13px;\n"
"	background: none;\n"
"	color:darkgray;\n"
"}\n"
"\n"
"#formLayout{\n"
"color:white;\n"
"}\n"
"\n"
"#Settings{\n"
"	background: url(/home/groumeliotis/project/Sarah/images/background.jpg);\n"
"}\n"
"\n"
"#pushButton_forgot_pwd{\n"
"	background: transparent;\n"
"	font-size: 12px;\n"
"\n"
"}\n"
"#pushButton_forgot_pwd:hover{\n"
"	background: transparent;\n"
"	font-size: 13px;\n"
"}\n"
"\n"
"#label_usr{\n"
"	font-size:15px;\n"
"	color:red;\n"
"}\n"
"#label_pwd{\n"
"	font-size:15px;\n"
"	color:red;\n"
"}\n"
"#label_logo_S{\n"
"	font-size:40px;\n"
"    font-family: 'Times New Roman', Times, serif;\n"
"}\n"
"\n"
"#label_logo_arah{\n"
"	font-size:14px;\n"
"    font-family: 'Times New Roman', Times, serif;\n"
"}\n"
"\n"
"QRadioButton{\n"
"	font-size: 14px;\n"
"	color: darkgray;\n"
"}\n"
"\n"
"QDateEdit{\n"
"	font-size: 14px;\n"
"	color: darkgray;\n"
"}\n"
"\n"
"QSpinBox{\n"
"	font-size: 14px;\n"
"	color: darkgray;\n"
"}\n"
"\n"
""
                        "QDoubleSpinBox{\n"
"	font-size: 14px;\n"
"	color: darkgray;\n"
"}\n"
"#label_userExist{\n"
"	font-size:15px;\n"
"	color:red;\n"
"}\n"
"#label_pnm{\n"
"	font-size:15px;\n"
"	color:red;\n"
"}\n"
"#label_gender{\n"
"	font-size:15px;\n"
"	color:red;\n"
"}\n"
"\n"
"#label_weight{\n"
"	font-size:15px;\n"
"	color:red;\n"
"}\n"
"\n"
"#label_height{\n"
"	font-size:15px;\n"
"	color:red;\n"
"}\n"
"\n"
"#label_lname{\n"
"	font-size:15px;\n"
"	color:red;\n"
"}\n"
"\n"
"#label_fname{\n"
"	font-size:15px;\n"
"	color:red;\n"
"}"));
        gridLayout = new QGridLayout(Settings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(Settings);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(70, 35));

        gridLayout_2->addWidget(pushButton, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);


        gridLayout->addWidget(frame, 1, 2, 1, 1);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Settings", nullptr));
        pushButton->setText(QCoreApplication::translate("Settings", " Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
