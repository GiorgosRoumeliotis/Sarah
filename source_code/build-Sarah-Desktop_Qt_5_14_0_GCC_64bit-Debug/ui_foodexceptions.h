/********************************************************************************
** Form generated from reading UI file 'foodexceptions.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODEXCEPTIONS_H
#define UI_FOODEXCEPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FoodExceptions
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Add_pushButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QPushButton *searchButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *FoodExceptions)
    {
        if (FoodExceptions->objectName().isEmpty())
            FoodExceptions->setObjectName(QString::fromUtf8("FoodExceptions"));
        FoodExceptions->resize(398, 521);
        FoodExceptions->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family:century gothic;\n"
"	font-size: 16px;\n"
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
"#FoodExceptions{\n"
"	background: url(/home/groumeliotis/project/Sarah/images/background.jpg);\n"
"}\n"
"\n"
"*{\n"
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
""
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
"	font-size:13px;\n"
"	background: none;\n"
"	color:darkgray;\n"
"}\n"
"\n"
"#FoodException{\n"
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
"QR"
                        "adioButton{\n"
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
"}\n"
"\n"
"#scrollArea{\n"
"	color:white;\n"
"	background-color:transparent;\n"
"	border:none;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #646464;\n"
"    padding: 4px;\n"
"    font-size: 14pt;\n"
"    border-style: none;\n"
"    border-bottom: 1px solid #fffff8;\n"
"    border"
                        "-right: 1px solid #fffff8;\n"
"}\n"
"\n"
"QHeaderView::section:horizontal\n"
"{\n"
"    border-top: 1px solid #fffff8;\n"
"}\n"
"\n"
"QHeaderView::section:vertical\n"
"{\n"
"    border-left: 1px solid #fffff8;\n"
"}\n"
"\n"
"#search{\n"
"	border-radius:20px;\n"
"}"));
        gridLayout = new QGridLayout(FoodExceptions);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(FoodExceptions);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Add_pushButton = new QPushButton(frame);
        Add_pushButton->setObjectName(QString::fromUtf8("Add_pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Add_pushButton->sizePolicy().hasHeightForWidth());
        Add_pushButton->setSizePolicy(sizePolicy);
        Add_pushButton->setMinimumSize(QSize(70, 30));

        horizontalLayout->addWidget(Add_pushButton);


        gridLayout_4->addLayout(horizontalLayout, 2, 0, 1, 1);

        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color:transparent;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 362, 383));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 1, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        searchButton = new QPushButton(frame_2);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        sizePolicy.setHeightForWidth(searchButton->sizePolicy().hasHeightForWidth());
        searchButton->setSizePolicy(sizePolicy);
        searchButton->setMinimumSize(QSize(20, 40));
        searchButton->setStyleSheet(QString::fromUtf8("*{border-radius:20px}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon);
        searchButton->setIconSize(QSize(40, 16));

        gridLayout_2->addWidget(searchButton, 0, 2, 1, 1);

        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 0, 1, 2);


        gridLayout_4->addWidget(frame_2, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        QWidget::setTabOrder(lineEdit, searchButton);
        QWidget::setTabOrder(searchButton, scrollArea);
        QWidget::setTabOrder(scrollArea, Add_pushButton);

        retranslateUi(FoodExceptions);

        QMetaObject::connectSlotsByName(FoodExceptions);
    } // setupUi

    void retranslateUi(QDialog *FoodExceptions)
    {
        FoodExceptions->setWindowTitle(QCoreApplication::translate("FoodExceptions", "Food Exceptions", nullptr));
        Add_pushButton->setText(QCoreApplication::translate("FoodExceptions", "Add", nullptr));
        searchButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FoodExceptions: public Ui_FoodExceptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODEXCEPTIONS_H
