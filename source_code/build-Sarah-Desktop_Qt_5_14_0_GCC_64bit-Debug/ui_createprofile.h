/********************************************************************************
** Form generated from reading UI file 'createprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPROFILE_H
#define UI_CREATEPROFILE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateProfile
{
public:
    QGridLayout *gridLayout_6;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_submit;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_2;
    QGridLayout *gridLayout_7;
    QLabel *label_logo_arah;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_5;
    QLabel *label_6;
    QSpinBox *spinBox_meals;
    QCheckBox *gluten;
    QCheckBox *diabetic;
    QCheckBox *vegan;
    QCheckBox *lact;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_4;
    QRadioButton *male;
    QRadioButton *female;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_height;
    QLabel *label;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_weight;
    QLabel *label_4;
    QLabel *label_2;
    QSpinBox *spinBox_workout;
    QDateEdit *dateEdit_bday;
    QLabel *label_gender;
    QLabel *label_height;
    QLabel *label_weight;
    QFormLayout *formLayout;
    QLineEdit *lineEdit_fname;
    QLineEdit *lineEdit_lname;
    QLabel *label_userExist;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_confirm_password;
    QLabel *label_pnm;
    QLabel *label_fname;
    QLabel *label_lname;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_fexce;
    QSpacerItem *verticalSpacer_4;
    QToolButton *toolButton_avatar_pic;

    void setupUi(QDialog *CreateProfile)
    {
        if (CreateProfile->objectName().isEmpty())
            CreateProfile->setObjectName(QString::fromUtf8("CreateProfile"));
        CreateProfile->resize(1080, 720);
        CreateProfile->setStyleSheet(QString::fromUtf8("*{\n"
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
"#CreateProfile{\n"
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
""
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
"}"));
        gridLayout_6 = new QGridLayout(CreateProfile);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        frame = new QFrame(CreateProfile);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 6, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        pushButton_submit = new QPushButton(frame);
        pushButton_submit->setObjectName(QString::fromUtf8("pushButton_submit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_submit->sizePolicy().hasHeightForWidth());
        pushButton_submit->setSizePolicy(sizePolicy);
        pushButton_submit->setMinimumSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_submit, 6, 2, 1, 1, Qt::AlignRight|Qt::AlignBottom);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(100, 40));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_logo_arah = new QLabel(frame_2);
        label_logo_arah->setObjectName(QString::fromUtf8("label_logo_arah"));

        gridLayout_7->addWidget(label_logo_arah, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame_2, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_5->addWidget(label_6, 0, 1, 1, 1);

        spinBox_meals = new QSpinBox(frame);
        spinBox_meals->setObjectName(QString::fromUtf8("spinBox_meals"));
        spinBox_meals->setMinimum(3);
        spinBox_meals->setMaximum(5);

        gridLayout_5->addWidget(spinBox_meals, 0, 2, 1, 1, Qt::AlignRight);

        gluten = new QCheckBox(frame);
        gluten->setObjectName(QString::fromUtf8("gluten"));

        gridLayout_5->addWidget(gluten, 1, 2, 1, 1);

        diabetic = new QCheckBox(frame);
        diabetic->setObjectName(QString::fromUtf8("diabetic"));

        gridLayout_5->addWidget(diabetic, 1, 1, 1, 1);

        vegan = new QCheckBox(frame);
        vegan->setObjectName(QString::fromUtf8("vegan"));

        gridLayout_5->addWidget(vegan, 2, 1, 1, 1);

        lact = new QCheckBox(frame);
        lact->setObjectName(QString::fromUtf8("lact"));

        gridLayout_5->addWidget(lact, 2, 2, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_5, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        male = new QRadioButton(frame);
        male->setObjectName(QString::fromUtf8("male"));

        gridLayout_4->addWidget(male, 0, 2, 1, 1);

        female = new QRadioButton(frame);
        female->setObjectName(QString::fromUtf8("female"));

        gridLayout_4->addWidget(female, 0, 3, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 2, 1, 1, 1);

        doubleSpinBox_height = new QDoubleSpinBox(frame);
        doubleSpinBox_height->setObjectName(QString::fromUtf8("doubleSpinBox_height"));
        doubleSpinBox_height->setMaximum(2.500000000000000);
        doubleSpinBox_height->setSingleStep(0.010000000000000);

        gridLayout_4->addWidget(doubleSpinBox_height, 2, 3, 1, 1, Qt::AlignRight);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 1, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 4, 1, 1, 1);

        doubleSpinBox_weight = new QDoubleSpinBox(frame);
        doubleSpinBox_weight->setObjectName(QString::fromUtf8("doubleSpinBox_weight"));
        doubleSpinBox_weight->setDecimals(1);
        doubleSpinBox_weight->setMaximum(500.000000000000000);
        doubleSpinBox_weight->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(doubleSpinBox_weight, 3, 3, 1, 1, Qt::AlignRight);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 3, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 1, 1, 1, 1);

        spinBox_workout = new QSpinBox(frame);
        spinBox_workout->setObjectName(QString::fromUtf8("spinBox_workout"));
        spinBox_workout->setMaximum(7);

        gridLayout_4->addWidget(spinBox_workout, 4, 3, 1, 1, Qt::AlignRight);

        dateEdit_bday = new QDateEdit(frame);
        dateEdit_bday->setObjectName(QString::fromUtf8("dateEdit_bday"));
        dateEdit_bday->setCurrentSection(QDateTimeEdit::YearSection);

        gridLayout_4->addWidget(dateEdit_bday, 1, 3, 1, 1);

        label_gender = new QLabel(frame);
        label_gender->setObjectName(QString::fromUtf8("label_gender"));

        gridLayout_4->addWidget(label_gender, 0, 0, 1, 1);

        label_height = new QLabel(frame);
        label_height->setObjectName(QString::fromUtf8("label_height"));

        gridLayout_4->addWidget(label_height, 2, 0, 1, 1);

        label_weight = new QLabel(frame);
        label_weight->setObjectName(QString::fromUtf8("label_weight"));

        gridLayout_4->addWidget(label_weight, 3, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 0, 3, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lineEdit_fname = new QLineEdit(frame);
        lineEdit_fname->setObjectName(QString::fromUtf8("lineEdit_fname"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_fname->sizePolicy().hasHeightForWidth());
        lineEdit_fname->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_fname);

        lineEdit_lname = new QLineEdit(frame);
        lineEdit_lname->setObjectName(QString::fromUtf8("lineEdit_lname"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_lname);

        label_userExist = new QLabel(frame);
        label_userExist->setObjectName(QString::fromUtf8("label_userExist"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_userExist);

        lineEdit_username = new QLineEdit(frame);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_username);

        lineEdit_password = new QLineEdit(frame);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_password);

        lineEdit_confirm_password = new QLineEdit(frame);
        lineEdit_confirm_password->setObjectName(QString::fromUtf8("lineEdit_confirm_password"));
        lineEdit_confirm_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_confirm_password);

        label_pnm = new QLabel(frame);
        label_pnm->setObjectName(QString::fromUtf8("label_pnm"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_pnm);

        label_fname = new QLabel(frame);
        label_fname->setObjectName(QString::fromUtf8("label_fname"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_fname);

        label_lname = new QLabel(frame);
        label_lname->setObjectName(QString::fromUtf8("label_lname"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_lname);


        gridLayout->addLayout(formLayout, 0, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color:transparent;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 323, 68));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 2, 0, 1, 1);

        pushButton_fexce = new QPushButton(frame);
        pushButton_fexce->setObjectName(QString::fromUtf8("pushButton_fexce"));
        sizePolicy.setHeightForWidth(pushButton_fexce->sizePolicy().hasHeightForWidth());
        pushButton_fexce->setSizePolicy(sizePolicy);
        pushButton_fexce->setMinimumSize(QSize(130, 30));

        gridLayout_3->addWidget(pushButton_fexce, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_4, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 1, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 1, 1, 1);

        toolButton_avatar_pic = new QToolButton(frame);
        toolButton_avatar_pic->setObjectName(QString::fromUtf8("toolButton_avatar_pic"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../images/avatar.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_avatar_pic->setIcon(icon);
        toolButton_avatar_pic->setIconSize(QSize(100, 100));

        gridLayout_2->addWidget(toolButton_avatar_pic, 1, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_6->addWidget(frame, 0, 0, 1, 1);

        QWidget::setTabOrder(toolButton_avatar_pic, lineEdit_fname);
        QWidget::setTabOrder(lineEdit_fname, lineEdit_lname);
        QWidget::setTabOrder(lineEdit_lname, lineEdit_username);
        QWidget::setTabOrder(lineEdit_username, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, lineEdit_confirm_password);
        QWidget::setTabOrder(lineEdit_confirm_password, spinBox_meals);
        QWidget::setTabOrder(spinBox_meals, diabetic);
        QWidget::setTabOrder(diabetic, gluten);
        QWidget::setTabOrder(gluten, vegan);
        QWidget::setTabOrder(vegan, lact);
        QWidget::setTabOrder(lact, dateEdit_bday);
        QWidget::setTabOrder(dateEdit_bday, doubleSpinBox_height);
        QWidget::setTabOrder(doubleSpinBox_height, doubleSpinBox_weight);
        QWidget::setTabOrder(doubleSpinBox_weight, spinBox_workout);
        QWidget::setTabOrder(spinBox_workout, pushButton_submit);

        retranslateUi(CreateProfile);

        QMetaObject::connectSlotsByName(CreateProfile);
    } // setupUi

    void retranslateUi(QDialog *CreateProfile)
    {
        CreateProfile->setWindowTitle(QCoreApplication::translate("CreateProfile", "Create Profile", nullptr));
        pushButton_submit->setText(QCoreApplication::translate("CreateProfile", "Submit", nullptr));
        label_logo_arah->setText(QString());
        label_6->setText(QCoreApplication::translate("CreateProfile", "Meals Per Day", nullptr));
        gluten->setText(QCoreApplication::translate("CreateProfile", " I can consume gluten", nullptr));
        diabetic->setText(QCoreApplication::translate("CreateProfile", "I can't consume sugar", nullptr));
        vegan->setText(QCoreApplication::translate("CreateProfile", "I am vegan", nullptr));
        lact->setText(QCoreApplication::translate("CreateProfile", "I can consume lactose", nullptr));
        label_7->setText(QString());
        male->setText(QCoreApplication::translate("CreateProfile", "Male", nullptr));
        female->setText(QCoreApplication::translate("CreateProfile", "Female", nullptr));
        label_3->setText(QCoreApplication::translate("CreateProfile", "Height", nullptr));
        label->setText(QCoreApplication::translate("CreateProfile", "Gender", nullptr));
        label_5->setText(QCoreApplication::translate("CreateProfile", "Workout Per Week", nullptr));
        label_4->setText(QCoreApplication::translate("CreateProfile", "Weight", nullptr));
        label_2->setText(QCoreApplication::translate("CreateProfile", "Birthday", nullptr));
        label_gender->setText(QString());
        label_height->setText(QString());
        label_weight->setText(QString());
        lineEdit_fname->setPlaceholderText(QCoreApplication::translate("CreateProfile", "Firstname", nullptr));
        lineEdit_lname->setPlaceholderText(QCoreApplication::translate("CreateProfile", "Lastname", nullptr));
        label_userExist->setText(QString());
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("CreateProfile", "Username", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("CreateProfile", "Password", nullptr));
        lineEdit_confirm_password->setPlaceholderText(QCoreApplication::translate("CreateProfile", "Confirm Password", nullptr));
        label_pnm->setText(QString());
        label_fname->setText(QString());
        label_lname->setText(QString());
        pushButton_fexce->setText(QCoreApplication::translate("CreateProfile", "Food Exceptions", nullptr));
        toolButton_avatar_pic->setText(QCoreApplication::translate("CreateProfile", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateProfile: public Ui_CreateProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPROFILE_H
