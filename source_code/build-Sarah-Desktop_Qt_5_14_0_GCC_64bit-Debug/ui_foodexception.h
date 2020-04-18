/********************************************************************************
** Form generated from reading UI file 'foodexception.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODEXCEPTION_H
#define UI_FOODEXCEPTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FoodException
{
public:
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_search;
    QPushButton *search;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollContents;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *FoodException)
    {
        if (FoodException->objectName().isEmpty())
            FoodException->setObjectName(QString::fromUtf8("FoodException"));
        FoodException->resize(502, 653);
        FoodException->setStyleSheet(QString::fromUtf8("*{\n"
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
"QCheckBox"
                        "{\n"
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
"QDoubleSpinBox{\n"
"	font-size: 14px;\n"
"	color: darkgray;\n"
"}\n"
"#label_userExist{\n"
"	font-size:"
                        "15px;\n"
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
"    border-right: 1px solid #fffff8;\n"
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
        gridLayout_3 = new QGridLayout(FoodException);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame = new QFrame(FoodException);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_search = new QLineEdit(frame);
        lineEdit_search->setObjectName(QString::fromUtf8("lineEdit_search"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_search->sizePolicy().hasHeightForWidth());
        lineEdit_search->setSizePolicy(sizePolicy);
        lineEdit_search->setMinimumSize(QSize(400, 0));

        horizontalLayout->addWidget(lineEdit_search);

        search = new QPushButton(frame);
        search->setObjectName(QString::fromUtf8("search"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(search->sizePolicy().hasHeightForWidth());
        search->setSizePolicy(sizePolicy1);
        search->setMinimumSize(QSize(20, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        search->setIcon(icon);
        search->setIconSize(QSize(38, 15));

        horizontalLayout->addWidget(search);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollContents = new QWidget();
        scrollContents->setObjectName(QString::fromUtf8("scrollContents"));
        scrollContents->setGeometry(QRect(0, 0, 450, 529));
        scrollContents->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color:transparent;\n"
"}\n"
"\n"
"QCheckBox{\n"
"	background:none;\n"
"}\n"
"\n"
""));
        scrollArea->setWidget(scrollContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(70, 30));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);

        label = new QLabel(FoodException);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 1, 1, 1);

        QWidget::setTabOrder(lineEdit_search, search);
        QWidget::setTabOrder(search, scrollArea);
        QWidget::setTabOrder(scrollArea, pushButton_2);

        retranslateUi(FoodException);

        QMetaObject::connectSlotsByName(FoodException);
    } // setupUi

    void retranslateUi(QDialog *FoodException)
    {
        FoodException->setWindowTitle(QCoreApplication::translate("FoodException", "Add Food Exception", nullptr));
        search->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("FoodException", "Add", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FoodException: public Ui_FoodException {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODEXCEPTION_H
