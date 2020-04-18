/********************************************************************************
** Form generated from reading UI file 'recipes.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPES_H
#define UI_RECIPES_H

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

class Ui_Recipes
{
public:
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *HTML;
    QFrame *frame_2;
    QGridLayout *gridLayout_7;
    QLabel *label;
    QFrame *frame_3;
    QGridLayout *gridLayout_9;
    QLabel *calories;
    QFrame *frame_7;
    QGridLayout *gridLayout_13;
    QLabel *fibers;
    QFrame *frame_6;
    QGridLayout *gridLayout_12;
    QLabel *fats;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame_5;
    QGridLayout *gridLayout_11;
    QLabel *proteins;
    QLabel *label_4;
    QFrame *frame_4;
    QGridLayout *gridLayout_10;
    QLabel *carbs;
    QLabel *label_5;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *recSearch;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QLabel *ingr;

    void setupUi(QDialog *Recipes)
    {
        if (Recipes->objectName().isEmpty())
            Recipes->setObjectName(QString::fromUtf8("Recipes"));
        Recipes->resize(1080, 720);
        Recipes->setStyleSheet(QString::fromUtf8("*{\n"
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
"#Recipes{\n"
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
        gridLayout_4 = new QGridLayout(Recipes);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frame = new QFrame(Recipes);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frame);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("			*{\n"
"				background-color:black;\n"
"				color:green;\n"
"				font-family: Avantgarde, TeX Gyre Adventor, URW Gothic L, sans-serif;\n"
"				text-align:center;\n"
"			}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 517, 634));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8(""));
        gridLayout_6 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_6->addItem(verticalSpacer, 1, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        HTML = new QLabel(scrollAreaWidgetContents);
        HTML->setObjectName(QString::fromUtf8("HTML"));

        verticalLayout_2->addWidget(HTML);

        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMaximumSize(QSize(600, 100));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:green;color:orange;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 20));

        gridLayout_7->addWidget(label, 0, 1, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(0, 60));
        frame_3->setStyleSheet(QString::fromUtf8("background-color:black;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frame_3);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        calories = new QLabel(frame_3);
        calories->setObjectName(QString::fromUtf8("calories"));

        gridLayout_9->addWidget(calories, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_7->addWidget(frame_3, 1, 1, 1, 1);

        frame_7 = new QFrame(frame_2);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setMinimumSize(QSize(0, 60));
        frame_7->setStyleSheet(QString::fromUtf8("background-color:black;"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout_13 = new QGridLayout(frame_7);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        fibers = new QLabel(frame_7);
        fibers->setObjectName(QString::fromUtf8("fibers"));

        gridLayout_13->addWidget(fibers, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_7->addWidget(frame_7, 1, 5, 1, 1);

        frame_6 = new QFrame(frame_2);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setMinimumSize(QSize(0, 60));
        frame_6->setStyleSheet(QString::fromUtf8("background-color:black;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(frame_6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        fats = new QLabel(frame_6);
        fats->setObjectName(QString::fromUtf8("fats"));

        gridLayout_12->addWidget(fats, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_7->addWidget(frame_6, 1, 4, 1, 1);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_7->addWidget(label_2, 0, 2, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_7->addWidget(label_3, 0, 3, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setMinimumSize(QSize(0, 60));
        frame_5->setStyleSheet(QString::fromUtf8("background-color:black;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_11 = new QGridLayout(frame_5);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        proteins = new QLabel(frame_5);
        proteins->setObjectName(QString::fromUtf8("proteins"));

        gridLayout_11->addWidget(proteins, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_7->addWidget(frame_5, 1, 3, 1, 1);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_7->addWidget(label_4, 0, 4, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(0, 60));
        frame_4->setStyleSheet(QString::fromUtf8("background-color:black;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(frame_4);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        carbs = new QLabel(frame_4);
        carbs->setObjectName(QString::fromUtf8("carbs"));

        gridLayout_10->addWidget(carbs, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_7->addWidget(frame_4, 1, 2, 1, 1);

        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_7->addWidget(label_5, 0, 5, 1, 1, Qt::AlignHCenter|Qt::AlignTop);


        verticalLayout_2->addWidget(frame_2);


        gridLayout_6->addLayout(verticalLayout_2, 0, 2, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 0, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_3, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        recSearch = new QLineEdit(frame);
        recSearch->setObjectName(QString::fromUtf8("recSearch"));
        recSearch->setMinimumSize(QSize(0, 0));
        recSearch->setMaximumSize(QSize(360, 16777215));

        horizontalLayout->addWidget(recSearch);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(40, 40));
        pushButton->setMaximumSize(QSize(40, 40));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:20px"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(320, 16777215));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(40, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius:20px"));
        pushButton_2->setIcon(icon);

        horizontalLayout_2->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        scrollArea_3 = new QScrollArea(frame);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setMinimumSize(QSize(0, 0));
        scrollArea_3->setMaximumSize(QSize(400, 150));
        scrollArea_3->setStyleSheet(QString::fromUtf8("background:transparent;"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 400, 150));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        gridLayout->addWidget(scrollArea_3, 3, 0, 1, 1);

        scrollArea_2 = new QScrollArea(frame);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setMinimumSize(QSize(400, 0));
        scrollArea_2->setMaximumSize(QSize(400, 16777215));
        scrollArea_2->setStyleSheet(QString::fromUtf8("background:transparent;"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 400, 382));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        gridLayout_5->addLayout(verticalLayout, 0, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(scrollArea_2, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(40, 40));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-radius:20px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../images/arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(pushButton_3);

        ingr = new QLabel(frame);
        ingr->setObjectName(QString::fromUtf8("ingr"));
        ingr->setStyleSheet(QString::fromUtf8("color:red;"));

        horizontalLayout_3->addWidget(ingr);


        gridLayout_8->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Recipes);

        QMetaObject::connectSlotsByName(Recipes);
    } // setupUi

    void retranslateUi(QDialog *Recipes)
    {
        Recipes->setWindowTitle(QCoreApplication::translate("Recipes", "Cook Book", nullptr));
        HTML->setText(QString());
        label->setText(QCoreApplication::translate("Recipes", "Calories", nullptr));
        calories->setText(QCoreApplication::translate("Recipes", "calories", nullptr));
        fibers->setText(QCoreApplication::translate("Recipes", "fibers", nullptr));
        fats->setText(QCoreApplication::translate("Recipes", "fats", nullptr));
        label_2->setText(QCoreApplication::translate("Recipes", "Carbs", nullptr));
        label_3->setText(QCoreApplication::translate("Recipes", "Proteins", nullptr));
        proteins->setText(QCoreApplication::translate("Recipes", "proteins", nullptr));
        label_4->setText(QCoreApplication::translate("Recipes", "Fats", nullptr));
        carbs->setText(QCoreApplication::translate("Recipes", "carbs", nullptr));
        label_5->setText(QCoreApplication::translate("Recipes", "Fibers", nullptr));
        recSearch->setPlaceholderText(QCoreApplication::translate("Recipes", "Search for recipes ...", nullptr));
        pushButton->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Recipes", "Search for Ingredients ...", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        ingr->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Recipes: public Ui_Recipes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPES_H
