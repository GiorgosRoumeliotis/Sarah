#include "createprofile.h"
#include "ui_createprofile.h"
#include "foodexceptions.h"
#include <ctime>
#include <string>
#include <fstream>
#include <sstream>
#include "../User/defines.h"
#include "../SHA256/sha256.h"
#include "user.h"
#include<iostream>
#include <QSpinBox>
#include <QMessageBox>
#include <QLabel>
#include "functions.h"
#include "ingredients.h"
#include <QIcon>
#include <QPixmap>
#include <QFileDialog>
#include <regex>

#define Linux true
#define Windows false

using namespace std;

CreateProfile::CreateProfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateProfile)
{

    ui->setupUi(this);

    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    std::ifstream ClearFile;
    std::string filepath = "../../DataBase/tmp/ingredient_exceptions.txt";
    ClearFile.open(filepath.c_str(), std::ifstream::out | std::ifstream::trunc );
    ClearFile.close();

    std::ifstream ClearFileIcon;
    std::string filepathIcon = "../../DataBase/tmp/profile_icon.txt";
    ClearFile.open(filepathIcon.c_str(), std::ifstream::out | std::ifstream::trunc );
    ClearFile.close();

    std::ifstream ClearFileName;
    std::string filepathName = "../../DataBase/tmp/ingredient_exceptions_name.txt";
    ClearFileName.open(filepathName.c_str(), std::ifstream::out | std::ifstream::trunc );
    ClearFileName.close();

    string path = "../../DataBase/Ingredients/";
    Ingredients ingredients;
    ingredients.load_data_base_main(path+"Tables/FakeData/Name.csv",path+"Tables/FakeData/ID.txt",path+"Tables/FakeData/CaloriesPerGram.txt");
    vector<string> label_names = ingredients.get_ing_name();

    for(int i = 0; i < label_names.size(); i++){
        QLabel *label = new QLabel(this);
        label->setText(QString::fromStdString(label_names[i]));
        label->setStyleSheet("*{color:red;font-size:11px}");
        ui->verticalLayout->addWidget(label);
        ui->verticalLayout->setAlignment(Qt::AlignHCenter);
        label->hide();
    }

    QPixmap pix("/home/groumeliotis/project/Sarah/images/avatar.png");
    int w = ui->toolButton_avatar_pic->width()*9;
    int h = ui->toolButton_avatar_pic->height()*9;
    QIcon icon(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->toolButton_avatar_pic->setIcon(icon);

    QPixmap pixel("/home/groumeliotis/project/Sarah/images/logo.png");
    int wl = ui->label_logo_arah->width()*2;
    int hl = ui->label_logo_arah->height()*2;
    ui->label_logo_arah->setPixmap(pixel.scaled(wl,hl,Qt::KeepAspectRatio));

}

CreateProfile::~CreateProfile()
{
    delete ui;
}


void CreateProfile::on_pushButton_submit_pressed()
{
    QString qbday = ui->dateEdit_bday->text();
    QString fname = ui->lineEdit_fname->text();
    QString lname = ui->lineEdit_lname->text();
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QString co_password = ui->lineEdit_confirm_password->text();
    qint16 qworkout = ui->spinBox_workout->value();
    qint16 qmeals = ui->spinBox_meals->value();
    double_t qheight = ui->doubleSpinBox_height->value();
    double_t qweight = ui->doubleSpinBox_weight->value();
    bool vegan = ui ->vegan->isChecked();
    bool diabetic = ui ->diabetic->isChecked();
    bool gluten = ui ->gluten->isChecked();
    bool lactose = ui ->lact->isChecked();

    int meals = qmeals;
    int workout = qworkout;
    double height = qheight;
    double weight = qweight;

    if(gluten){
        gluten = false;
    }
    else{
        gluten = true;
    }

    if(lactose){
        lactose = false;
    }
    else{
        lactose = true;
    }

    /*Find Current Year*/
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    double year = timePtr->tm_year + 1900;
    /**/
    string std_fname = fname.toUtf8().constData();
    string std_lname = lname.toUtf8().constData();
    string std_username = username.toUtf8().constData();
    string std_password = password.toUtf8().constData();
    string std_co_password = co_password.toUtf8().constData();
    string bday = qbday.toUtf8().constData();
    int age;
    bday = bday.substr(bday.length()-2,bday.length()-1);
    stringstream toInt(bday);
    toInt >> age;
    if(age > year - 2000){
        age = year - (age+1900);
    }
    else{
        age = year - (age+2000);
    }

    /*Gender*/
    int gender = 0;
    if(ui->male->isChecked()){
        gender = Male;
    }
    else if(ui->female->isChecked()) {
        gender = Female;
    }
    /**/

    string user = "../../DataBase/Users/"+std_username+"DB";
    ifstream exists(user);

    bool userUniq = false;
    bool passMatch = false;
    bool fname_co = false;
    bool lname_co = false;
    bool height_co = false;
    bool weight_co = false;

    if(exists || std_username.size() == 0){
        ui->label_userExist->setText("*");
    }
    else{
        ui->label_userExist->setText("");
        userUniq = true;
    }


    if(password != co_password){
        ui->label_pnm->setText("*");
    }
    else{
        ui->label_pnm->setText("");
        passMatch = true;
    }

    if(fname.size() == 0){
        ui->label_fname->setText("*");
    }
    else{
        ui->label_fname->setText("");
        fname_co = true;
    }

    if(lname.size() == 0){
        ui->label_lname->setText("*");
    }
    else{
        ui->label_lname->setText("");
        lname_co = true;
    }

    if(gender == 0){
        ui->label_gender->setText("*");
    }
    else{
        ui->label_gender->setText("");
        fname_co = true;
    }

    if(height == 0){
        ui->label_height->setText("*");
    }
    else{
        ui->label_height->setText("");
        height_co = true;
    }

    if(weight == 0){
        ui->label_weight->setText("*");
    }
    else{
        ui->label_weight->setText("");
        weight_co = true;
    }

    if(userUniq&&passMatch&&fname_co&&lname_co&&gender!=0&&height_co&&weight_co){

        QMessageBox msgBox;
        msgBox.setStyleSheet("*{background-color:gray;color:white;font-family:century gothic;font-size:12px; } QPushButton{ color: white;background-color:green;}");
        msgBox.setIcon(QMessageBox::Question);
        msgBox.setWindowTitle("Submit");
        msgBox.setText("Do you want to save your profile ?");
        QAbstractButton* pButtonYes = msgBox.addButton(tr("Save"), QMessageBox::YesRole);
        msgBox.addButton(tr("Cancel"), QMessageBox::NoRole);
        pButtonYes->setSizeIncrement(70,40);
        msgBox.exec();
            if (msgBox.clickedButton()==pButtonYes) {
                //Execute command

                ui->pushButton_submit->setText("Loading ...");

                User new_account(std_fname,std_lname);

                new_account.set_username(std_username);

                /*Encrypt First*/
                std_password = sha256(std_password);
                new_account.set_password(std_password);

                string str_personsDB = "mkdir -p ../../DataBase/Users/"+std_username+"DB/";
                char personsDB[str_personsDB.size() + 1];
                strcpy(personsDB, str_personsDB.c_str());
                system(personsDB);

                string str_DietPlan = "mkdir -p ../../DataBase/Users/"+std_username+"DB/DietPlan/ && cp -r ../../DataBase/tmp/diet.plr ../../DataBase/Users/"+std_username+"DB/DietPlan/";
                char DietPlan[str_DietPlan.size() + 1];
                strcpy(DietPlan, str_DietPlan.c_str());
                system(DietPlan);
                new_account.set_gender(gender);
                new_account.set_height(height);
                new_account.set_weight(weight);
                new_account.set_age(age);
                new_account.set_activity(workout);
                new_account.set_vegan(vegan);
                new_account.set_gluten(gluten);
                new_account.set_lactose(lactose);
                new_account.set_meals(meals);
                new_account.set_diabetic(diabetic);
                new_account.save_account();/*Save name & surname & password & diabetic*/


                ifstream exceptions_in("../../DataBase/tmp/ingredient_exceptions.txt");

                vector<int> exceptions{
                    istream_iterator<int>(exceptions_in),
                    istream_iterator<int>()
                };


                ofstream exceptions_file;
                string filename;
                filename = "../../DataBase/Users/"+std_username+"DB/ingredient_exceptions.txt";
                exceptions_file.open (filename);

                for(int i = 0; i < exceptions.size(); i++){
                    exceptions_file << exceptions[i] << endl ;
                }

                ofstream prof;
                string pro = "../../DataBase/Users/"+std_username+"DB/profile_icon.txt";
                prof.open(pro);
                prof << filename_pro_pic.toStdString() << endl;
                prof.close();


                string path = "../../DataBase/Ingredients/";

                Ingredients user_ing_db;

                user_ing_db.load_data_base_main(path+"Tables/FakeData/Name.csv",path+"Tables/FakeData/ID.txt",path+"Tables/FakeData/CaloriesPerGram.txt");
                user_ing_db.load_data_base_diet(path+"Tables/FakeData/Protein.txt",path+ "Tables/FakeData/Carbs.txt", path+"Tables/FakeData/Fibers.txt");
                user_ing_db.load_data_base_VitaminsAndFats(path+"Tables/FakeData/Vitamins.txt",path+ "Tables/FakeData/Fat.txt");
                user_ing_db.load_data_base_exeptions(path+"Tables/FakeData/Vegan.txt",path+"Tables/FakeData/Gluten.txt", path+"Tables/FakeData/Lactose.txt");

                user_ing_db.create_custom_db(vegan,gluten,lactose,exceptions,std_username+"DB");

                this->hide();

        }
    }



}


void CreateProfile::exception_slot(){

        vector <vector <string> > exceptions_temp = loading("../../DataBase/tmp/ingredient_exceptions_name.txt");

        vector<string> exceptions;

        for(int i = 0; i < exceptions_temp.size() ; i++){
            for(int j = 0; j < exceptions_temp[i].size(); j++){
                exceptions.push_back(exceptions_temp[i][j]) ;
            }
        }


    for(int i = 0; i < ui->verticalLayout->count(); i++){
       QLabel *label = qobject_cast<QLabel*>(ui->verticalLayout->itemAt(i)->widget());
       label->hide();
       for(int j = 0; j < exceptions.size();j++){
           if(label->text() == QString::fromStdString(exceptions[j])){
               label->show();
           }
       }
    }
}

void CreateProfile::on_pushButton_fexce_pressed()
{
    vector <vector <string> > exceptions_temp = loading("../../DataBase/tmp/ingredient_exceptions_name.txt");

    vector<string> exceptions;

    for(int i = 0; i < exceptions_temp.size() ; i++){
        for(int j = 0; j < exceptions_temp[i].size(); j++){
            exceptions.push_back(exceptions_temp[i][j]) ;
        }
    }

    FoodExceptions *excef = new FoodExceptions/*(exceptions)*/;
    excef->setModal(true);
    connect(excef,SIGNAL(buttonClick()),this, SLOT(exception_slot()));
    excef->exec();
}



void CreateProfile::on_toolButton_avatar_pic_pressed()
{
    filename_pro_pic = QFileDialog::getOpenFileName(this,
                                                    tr("Select Avatar Icon"),
                                                    "/home/"
                                                    );

    string stdFile = filename_pro_pic.toStdString();
    smatch matches;
    regex regular("(([:cntrl:]*).png)");
    sregex_iterator currentMatch(stdFile.begin(), stdFile.end() , regular);
    sregex_iterator lastMatch;

    if(currentMatch != lastMatch){
        currentMatch++;
        QPixmap pix(filename_pro_pic);
        int w = ui->toolButton_avatar_pic->width()*10;
        int h = ui->toolButton_avatar_pic->height()*10;
        QIcon icon(pix.scaled(w,h,Qt::KeepAspectRatio));
        ui->toolButton_avatar_pic->setIcon(icon);

    }

}
