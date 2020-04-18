/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogInWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *rememberPassword;
    QPushButton *pushButton_singIn;
    QLineEdit *lineEdit_username;
    QSpacerItem *horizontalSpacer;
    QLabel *label_usr;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_pwd;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QLabel *label_logo_arah;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_singUp;
    QPushButton *pushButton_forgot_pwd;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_password;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LogInWindow)
    {
        if (LogInWindow->objectName().isEmpty())
            LogInWindow->setObjectName(QString::fromUtf8("LogInWindow"));
        LogInWindow->resize(1080, 720);
        centralwidget = new QWidget(LogInWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family:century gothic;\n"
"	font-size: 24px;\n"
"}\n"
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
"	background:transparent;\n"
"	color:darkgray;\n"
"	font-size:13px;\n"
"	border-radius: 60px;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"	background:transparent;\n"
"	color:white;\n"
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
"	color: #717072;\n"
"	border-bottom: 1px solid #717072;\n"
"	font-size: 18px;\n"
"\n"
"}\n"
"\n"
"QCheckBox{\n"
""
                        "	font-size:13px;\n"
"	background: none;\n"
"	color:darkgray;\n"
"}\n"
"\n"
"#centralwidget{\n"
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
"	font-size:80px;\n"
"    font-family: 'Times New Roman', Times, serif;\n"
"}\n"
"\n"
"#label_logo_arah{\n"
"	font-size:16px;\n"
"    font-family: 'Times New Roman', Times, serif;\n"
"}"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        rememberPassword = new QCheckBox(frame);
        rememberPassword->setObjectName(QString::fromUtf8("rememberPassword"));
        rememberPassword->setMaximumSize(QSize(380, 16777215));

        horizontalLayout_3->addWidget(rememberPassword);

        pushButton_singIn = new QPushButton(frame);
        pushButton_singIn->setObjectName(QString::fromUtf8("pushButton_singIn"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_singIn->sizePolicy().hasHeightForWidth());
        pushButton_singIn->setSizePolicy(sizePolicy);
        pushButton_singIn->setMinimumSize(QSize(70, 30));

        horizontalLayout_3->addWidget(pushButton_singIn);


        gridLayout_4->addLayout(horizontalLayout_3, 5, 2, 1, 1);

        lineEdit_username = new QLineEdit(frame);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setMaximumSize(QSize(450, 16777215));

        gridLayout_4->addWidget(lineEdit_username, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 1, 1, 1);

        label_usr = new QLabel(frame);
        label_usr->setObjectName(QString::fromUtf8("label_usr"));

        gridLayout_4->addWidget(label_usr, 3, 1, 1, 1, Qt::AlignRight);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 5, 1, 1, 1);

        label_pwd = new QLabel(frame);
        label_pwd->setObjectName(QString::fromUtf8("label_pwd"));

        gridLayout_4->addWidget(label_pwd, 4, 1, 1, 1, Qt::AlignRight);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(200, 70));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_logo_arah = new QLabel(frame_2);
        label_logo_arah->setObjectName(QString::fromUtf8("label_logo_arah"));

        gridLayout_2->addWidget(label_logo_arah, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame_2, 1, 2, 1, 1, Qt::AlignHCenter);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer, 2, 2, 1, 1);

        pushButton_singUp = new QPushButton(frame);
        pushButton_singUp->setObjectName(QString::fromUtf8("pushButton_singUp"));
        sizePolicy.setHeightForWidth(pushButton_singUp->sizePolicy().hasHeightForWidth());
        pushButton_singUp->setSizePolicy(sizePolicy);
        pushButton_singUp->setMinimumSize(QSize(140, 30));

        gridLayout_4->addWidget(pushButton_singUp, 0, 4, 1, 1, Qt::AlignRight|Qt::AlignTop);

        pushButton_forgot_pwd = new QPushButton(frame);
        pushButton_forgot_pwd->setObjectName(QString::fromUtf8("pushButton_forgot_pwd"));
        sizePolicy.setHeightForWidth(pushButton_forgot_pwd->sizePolicy().hasHeightForWidth());
        pushButton_forgot_pwd->setSizePolicy(sizePolicy);
        pushButton_forgot_pwd->setMinimumSize(QSize(170, 0));

        gridLayout_4->addWidget(pushButton_forgot_pwd, 8, 2, 1, 1, Qt::AlignHCenter);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 5, 4, 1, 1);

        lineEdit_password = new QLineEdit(frame);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setMaximumSize(QSize(450, 16777215));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        gridLayout_4->addWidget(lineEdit_password, 4, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 7, 2, 1, 1);


        gridLayout->addLayout(gridLayout_4, 0, 1, 1, 1);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);

        LogInWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LogInWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1080, 22));
        LogInWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LogInWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LogInWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(lineEdit_username, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, rememberPassword);
        QWidget::setTabOrder(rememberPassword, pushButton_singIn);
        QWidget::setTabOrder(pushButton_singIn, pushButton_forgot_pwd);
        QWidget::setTabOrder(pushButton_forgot_pwd, pushButton_singUp);

        retranslateUi(LogInWindow);

        QMetaObject::connectSlotsByName(LogInWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LogInWindow)
    {
        LogInWindow->setWindowTitle(QCoreApplication::translate("LogInWindow", "Sarah Your Personal Dietician", nullptr));
        rememberPassword->setText(QCoreApplication::translate("LogInWindow", "Remember Me ?", nullptr));
        pushButton_singIn->setText(QCoreApplication::translate("LogInWindow", "Log In", nullptr));
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("LogInWindow", "Username", nullptr));
        label_usr->setText(QString());
        label_pwd->setText(QString());
        label_logo_arah->setText(QString());
        pushButton_singUp->setText(QCoreApplication::translate("LogInWindow", "+ Create Profile", nullptr));
        pushButton_forgot_pwd->setText(QCoreApplication::translate("LogInWindow", "Forgot Your Password ?", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("LogInWindow", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogInWindow: public Ui_LogInWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
