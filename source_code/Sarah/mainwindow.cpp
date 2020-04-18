#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <QPixmap>
#include <user.h>
#include <bits/stdc++.h>
#include <ctime>
#include <settings.h>
#include <recipes.h>
#include <QLabel>

using namespace std;


vector<string> parsePLR(string file){

    vector <vector <string> > data;
    ifstream infile(file);
    while (infile){
        string s;
        if (!getline( infile, s )) break;
        istringstream ss( s );
        vector <string> record;
        while (ss)
        {
        string s;
        if (!getline( ss, s, ',' )) break;
        record.push_back( s );
        }
        data.push_back( record );
    }

    vector<string> plr;

    for(int i = 0; i < data.size() ; i++){
        for(int j = 0; j < data[i].size(); j++){
            plr.push_back(data[i][j]) ;
        }
    }

    infile.close();
    return plr;
}


int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3,
                    5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 +
            y / 400 + t[m - 1] + d) % 7;
}


vector<string> load_planner(string file){
    vector <vector <string> > data;
    ifstream infile(file);
    while (infile){
        string s;
        if (!getline( infile, s )) break;
        istringstream ss( s );
        vector <string> record;
        while (ss)
        {
        string s;
        if (!getline( ss, s, ',' )) break;
        record.push_back( s );
        }
        data.push_back( record );
    }



    vector<string> brf;

    for(int i = 0; i < data.size() ; i++){
        for(int j = 0; j < data[i].size(); j++){
            brf.push_back(data[i][j]) ;
        }
    }

    infile.close();
    return brf;

}

QString return_day(int day_num){
    switch (day_num%7) {
    case 0:
        return "SUNDAY";
    case 1:
        return "MONDAY";
    case 2:
        return "TUESDAY";
    case 3:
        return "WEDNESDAY";
    case 4:
        return "THURSDAY";
    case 5:
        return "FRIDAY";
    case 6:
        return "SATURDAY";
    default:
        return "";
    }
}


MainWindow::MainWindow(QString userdb,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ifstream user_string_info("../../DataBase/Users/"+userdb.toStdString()+"DB/UserStringInfo.txt");

    vector<string> info{
        istream_iterator<string>(user_string_info),
        istream_iterator<string>()
    };


    ifstream avatar("../../DataBase/Users/"+userdb.toStdString()+"DB/profile_icon.txt");
    string pic;
    getline (avatar,pic);

    if(pic.size() == 0){
        pic = "/home/groumeliotis/project/Sarah/images/avatar.png";
    }

    QPixmap pixel(QString::fromStdString(pic));
    int wl = ui->profile->width()*3;
    int hl = ui->profile->height()*3;
    ui->profile->setPixmap(pixel.scaled(wl,hl,Qt::KeepAspectRatio));

    QPixmap logo("/home/groumeliotis/project/Sarah/images/logo.png");
    int w = ui->label_logo->width()*2;
    int h = ui->label_logo->height()*2;
    ui->label_logo->setPixmap(logo.scaled(w,h,Qt::KeepAspectRatio));

    User user(info[0],info[1]);


    user.load_account(userdb.toStdString(),info[0],info[1]);

    vector<string> planner_data = parsePLR("../../DataBase/Users/"+userdb.toStdString()+"DB/DietPlan/diet.plr");

    if(user.get_gender() == Male){
        ui->welcome->setText("Welcome Mr. "+QString::fromStdString(user.get_name())+" "+QString::fromStdString(user.get_surname()));
    }
    else{
        ui->welcome->setText("Welcome Mrs. "+QString::fromStdString(user.get_name())+" "+QString::fromStdString(user.get_surname()));
    }

    QString status_icon;

    switch (user.bmi_calculator(user.get_height(),user.get_weight())) {
        case Underweight:
            ui->label_status->setText("Underweight");
            status_icon = "/home/groumeliotis/project/Sarah/images/yellow.png";
            break;
    case Healthy:
        ui->label_status->setText("Healthy");
        status_icon = "/home/groumeliotis/project/Sarah/images/green.png";
        break;
    case Overweight:
        ui->label_status->setText("Overweight");
        status_icon = "/home/groumeliotis/project/Sarah/images/yellow.png";
        break;
    case Obese:
        ui->label_status->setText("Obese");
        status_icon = "/home/groumeliotis/project/Sarah/images/red.png";
        break;
    }



    float daylyCal = user.needed_calories(
                user.get_activity(),
                user.bmi_calculator(
                    user.get_height(),
                    user.get_weight()),
                user.bmr_calculator(
                    user.get_gender(),
                    user.get_age(),
                    user.get_height(),
                    user.get_weight()));


    ui->weekly_calories->setText("Diet of "+QString::number(daylyCal)+" calories per day");

    QPixmap st(status_icon);
    int ws = ui->label_status_icon->width()/2;
    int hs = ui->label_status_icon->height()/2;
    ui->label_status_icon->setPixmap(st.scaled(ws,hs,Qt::KeepAspectRatio));

    switch(user.get_meals()){
    case 3:
         ui->scroll1->hide();
         ui->scrollArea_4->hide();
         ui->scrollArea_9->hide();
         ui->scrollArea_14->hide();
         ui->scrollArea_18->hide();
         ui->scrollArea_23->hide();
         ui->scrollArea_26->hide();
         ui->scroll3->hide();
         ui->scrollArea_2->hide();
         ui->scrollArea_7->hide();
         ui->scrollArea_11->hide();
         ui->scrollArea_20->hide();
         ui->scrollArea_25->hide();
         ui->scrollArea_30->hide();
        break;
    case 4:
        ui->scroll3->hide();
        ui->scrollArea_2->hide();
        ui->scrollArea_7->hide();
        ui->scrollArea_11->hide();
        ui->scrollArea_20->hide();
        ui->scrollArea_25->hide();
        ui->scrollArea_30->hide();
        break;
    default:
        break;
    }


    // current date/time based on current system
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int day = dayofweek(ltm->tm_mday,1 + ltm->tm_mon,1900 + ltm->tm_year);


   int start_day = QString::fromStdString(planner_data[1]).toInt();
   ui->first_day->setText(return_day(start_day+1));
   ui->second_day->setText(return_day(start_day+2));
   ui->third_day->setText(return_day(start_day+3));
   ui->forth_day->setText(return_day(start_day+4));
   ui->fifth_day->setText(return_day(start_day+5));
   ui->six_day->setText(return_day(start_day+6));
   ui->seventh_day->setText(return_day(start_day));

   if(ui->first_day->text() == return_day(day)){
       ui->first_day->setStyleSheet("font-size:21px;color:orange;");
   }
   if(ui->second_day->text() == return_day(day)){
       ui->second_day->setStyleSheet("font-size:21px;color:orange;");
   }
   if(ui->third_day->text() == return_day(day)){
       ui->third_day->setStyleSheet("font-size:21px;color:orange;");
   }
   if(ui->forth_day->text() == return_day(day)){
       ui->forth_day->setStyleSheet("font-size:21px;color:orange;");
   }
   if(ui->fifth_day->text() == return_day(day)){
       ui->fifth_day->setStyleSheet("font-size:21px;color:orange;");
   }
   if(ui->six_day->text() == return_day(day)){
       ui->six_day->setStyleSheet("font-size:21px;color:orange;");
   }
   if(ui->seventh_day->text() == return_day(day)){
       ui->seventh_day->setStyleSheet("font-size:21px;color:orange;");
   }

   ui->scroll->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scroll1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scroll2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scroll3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scroll4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_8->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_9->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_10->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_11->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_12->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_13->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_14->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_15->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_16->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_17->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_18->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_19->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_20->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_21->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_22->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_23->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_24->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_25->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_26->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_27->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_28->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_29->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->scrollArea_30->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->planner7days->setStyleSheet("font-size:10px");

   vector<string> PLR = planner_data;
       int struct_id = 0;
       for(int data = 1; data < PLR.size();data++){
           if (data == 1){
               /*cout << "| DATE ID : "<< PLR[data] << endl;*/
           }
           else{
               if(PLR[data] == "======================================== START ==========================================="){
                   struct_id++;
               }
               else{
                   if(PLR[data] == "+BREAKFAST+"){
                       int breakfast = data + 1 ;
                       while(PLR[breakfast] != "+FIRST SNACK+"){
                           if(struct_id == 1){
                               QLabel *day1 = new QLabel(this);
                               day1->setText(QString::fromStdString(PLR[breakfast]));
                               if(ui->first_day->text() == return_day(day)){
                                   day1->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day1_br->addWidget(day1);
                               ui->day1_br->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 2){
                               QLabel *day2 = new QLabel(this);
                               day2->setText(QString::fromStdString(PLR[breakfast]));
                               if(ui->second_day->text() == return_day(day)){
                                   day2->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day2_br->addWidget(day2);
                               ui->day2_br->setAlignment(Qt::AlignTop);
                           }
                           if(struct_id == 3){
                               QLabel *day3 = new QLabel(this);
                               day3->setText(QString::fromStdString(PLR[breakfast]));
                               if(ui->third_day->text() == return_day(day)){
                                   day3->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day3_br->addWidget(day3);
                               ui->day3_br->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 4){
                               QLabel *day4 = new QLabel(this);
                               day4->setText(QString::fromStdString(PLR[breakfast]));
                               if(ui->forth_day->text() == return_day(day)){
                                   day4->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day4_br->addWidget(day4);
                               ui->day4_br->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 5){
                               QLabel *day5 = new QLabel(this);
                               day5->setText(QString::fromStdString(PLR[breakfast]));
                               if(ui->fifth_day->text() == return_day(day)){
                                   day5->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day5_br->addWidget(day5);
                               ui->day5_br->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 6){
                               QLabel *day6 = new QLabel(this);
                               day6->setText(QString::fromStdString(PLR[breakfast]));
                               if(ui->six_day->text() == return_day(day)){
                                   day6->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day6_br->addWidget(day6);
                               ui->day6_br->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 7){
                               QLabel *day7 = new QLabel(this);
                               day7->setText(QString::fromStdString(PLR[breakfast]));
                               if(ui->seventh_day->text() == return_day(day)){
                                   day7->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day7_br->addWidget(day7);
                               ui->day7_br->setAlignment(Qt::AlignTop);

                           }
                           breakfast++;
                       }
                   }
                   if(PLR[data] == "+FIRST SNACK+"){
                       int fsnack = data + 1 ;
                       while(PLR[fsnack] != "+LUNCH+"){
                           if(struct_id == 1){
                               QLabel *day1 = new QLabel(this);
                               day1->setText(QString::fromStdString(PLR[fsnack]));
                               if(ui->first_day->text() == return_day(day)){
                                   day1->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day1_fs->addWidget(day1);
                               ui->day1_fs->setAlignment(Qt::AlignTop);
                           }
                           if(struct_id == 2){
                               QLabel *day2 = new QLabel(this);
                               day2->setText(QString::fromStdString(PLR[fsnack]));
                               if(ui->second_day->text() == return_day(day)){
                                   day2->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day2_fs->addWidget(day2);
                               ui->day2_fs->setAlignment(Qt::AlignTop);
                           }
                           if(struct_id == 3){
                               QLabel *day3 = new QLabel(this);
                               day3->setText(QString::fromStdString(PLR[fsnack]));
                               if(ui->third_day->text() == return_day(day)){
                                   day3->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day3_fs->addWidget(day3);
                               ui->day3_fs->setAlignment(Qt::AlignTop);
                           }
                           if(struct_id == 4){
                               QLabel *day4 = new QLabel(this);
                               day4->setText(QString::fromStdString(PLR[fsnack]));
                               if(ui->forth_day->text() == return_day(day)){
                                   day4->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day4_fs->addWidget(day4);
                               ui->day4_fs->setAlignment(Qt::AlignTop);
                           }
                           if(struct_id == 5){
                               QLabel *day5 = new QLabel(this);
                               day5->setText(QString::fromStdString(PLR[fsnack]));
                               if(ui->fifth_day->text() == return_day(day)){
                                   day5->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day5_fs->addWidget(day5);
                               ui->day5_fs->setAlignment(Qt::AlignTop);
                           }
                           if(struct_id == 6){
                               QLabel *day6 = new QLabel(this);
                               day6->setText(QString::fromStdString(PLR[fsnack]));
                               if(ui->six_day->text() == return_day(day)){
                                   day6->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day6_fs->addWidget(day6);
                               ui->day6_fs->setAlignment(Qt::AlignTop);
                           }
                           if(struct_id == 7){
                               QLabel *day7 = new QLabel(this);
                               day7->setText(QString::fromStdString(PLR[fsnack]));
                               if(ui->seventh_day->text() == return_day(day)){
                                   day7->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day7_fs->addWidget(day7);
                               ui->day7_fs->setAlignment(Qt::AlignTop);
                           }
                           fsnack++;
                       }
                   }
                   if(PLR[data] == "+LUNCH+"){
                       int lunch = data + 1 ;
                       while(PLR[lunch] != "+SECOND SNACK+"){
                           if(struct_id == 1){
                               QLabel *day1 = new QLabel(this);
                               day1->setText(QString::fromStdString(PLR[lunch]));
                               if(ui->first_day->text() == return_day(day)){
                                   day1->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day1_l->addWidget(day1);
                               ui->day1_l->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 2){
                               QLabel *day2 = new QLabel(this);
                               day2->setText(QString::fromStdString(PLR[lunch]));
                               if(ui->second_day->text() == return_day(day)){
                                   day2->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day2_l->addWidget(day2);
                               ui->day2_l->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 3){
                               QLabel *day3 = new QLabel(this);
                               day3->setText(QString::fromStdString(PLR[lunch]));
                               if(ui->third_day->text() == return_day(day)){
                                   day3->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day3_l->addWidget(day3);
                               ui->day3_l->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 4){
                               QLabel *day4 = new QLabel(this);
                               day4->setText(QString::fromStdString(PLR[lunch]));
                               if(ui->forth_day->text() == return_day(day)){
                                   day4->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day4_l->addWidget(day4);
                               ui->day4_l->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 5){
                               QLabel *day5 = new QLabel(this);
                               day5->setText(QString::fromStdString(PLR[lunch]));
                               if(ui->fifth_day->text() == return_day(day)){
                                   day5->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day5_l->addWidget(day5);
                               ui->day5_l->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 6){
                               QLabel *day6 = new QLabel(this);
                               day6->setText(QString::fromStdString(PLR[lunch]));
                               if(ui->six_day->text() == return_day(day)){
                                   day6->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day6_l->addWidget(day6);
                               ui->day6_l->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 7){
                               QLabel *day7 = new QLabel(this);
                               day7->setText(QString::fromStdString(PLR[lunch]));
                               if(ui->seventh_day->text() == return_day(day)){
                                   day7->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day7_l->addWidget(day7);
                               ui->day7_l->setAlignment(Qt::AlignTop);

                           }
                           lunch++;
                       }
                   }
                   if(PLR[data] == "+SECOND SNACK+"){
                       int ssnack = data + 1 ;
                       while(PLR[ssnack] != "+DINNER+"){
                           if(struct_id == 1){
                               QLabel *day1 = new QLabel(this);
                               day1->setText(QString::fromStdString(PLR[ssnack]));
                               if(ui->first_day->text() == return_day(day)){
                                   day1->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day1_ss->addWidget(day1);
                               ui->day1_ss->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 2){
                               QLabel *day2 = new QLabel(this);
                               day2->setText(QString::fromStdString(PLR[ssnack]));
                               if(ui->second_day->text() == return_day(day)){
                                   day2->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day2_ss->addWidget(day2);
                               ui->day2_ss->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 3){
                               QLabel *day3 = new QLabel(this);
                               day3->setText(QString::fromStdString(PLR[ssnack]));
                               if(ui->third_day->text() == return_day(day)){
                                   day3->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day3_ss->addWidget(day3);
                               ui->day3_ss->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 4){
                               QLabel *day4 = new QLabel(this);
                               day4->setText(QString::fromStdString(PLR[ssnack]));
                               if(ui->forth_day->text() == return_day(day)){
                                   day4->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day4_ss->addWidget(day4);
                               ui->day4_ss->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 5){
                               QLabel *day5 = new QLabel(this);
                               day5->setText(QString::fromStdString(PLR[ssnack]));
                               if(ui->fifth_day->text() == return_day(day)){
                                   day5->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day5_ss->addWidget(day5);
                               ui->day5_ss->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 6){
                               QLabel *day6 = new QLabel(this);
                               day6->setText(QString::fromStdString(PLR[ssnack]));
                               if(ui->six_day->text() == return_day(day)){
                                   day6->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day6_ss->addWidget(day6);
                               ui->day6_ss->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 7){
                               QLabel *day7 = new QLabel(this);
                               day7->setText(QString::fromStdString(PLR[ssnack]));
                               if(ui->seventh_day->text() == return_day(day)){
                                   day7->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day7_ss->addWidget(day7);
                               ui->day7_ss->setAlignment(Qt::AlignTop);

                           }
                           ssnack++;
                       }
                   }
                   if(PLR[data] == "+DINNER+"){
                       int dinner = data + 1 ;
                       while(PLR[dinner] != "============================================ END ========================================="){
                           if(struct_id == 1){
                               QLabel *day1 = new QLabel(this);
                               day1->setText(QString::fromStdString(PLR[dinner]));
                               if(ui->first_day->text() == return_day(day)){
                                   day1->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day1_d->addWidget(day1);
                               ui->day1_d->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 2){
                               QLabel *day2 = new QLabel(this);
                               day2->setText(QString::fromStdString(PLR[dinner]));
                               if(ui->second_day->text() == return_day(day)){
                                   day2->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day2_d->addWidget(day2);
                               ui->day2_d->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 3){
                               QLabel *day3 = new QLabel(this);
                               day3->setText(QString::fromStdString(PLR[dinner]));
                               if(ui->third_day->text() == return_day(day)){
                                   day3->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day3_d->addWidget(day3);
                               ui->day3_d->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 4){
                               QLabel *day4 = new QLabel(this);
                               day4->setText(QString::fromStdString(PLR[dinner]));
                               if(ui->forth_day->text() == return_day(day)){
                                   day4->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day4_d->addWidget(day4);
                               ui->day4_d->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 5){
                               QLabel *day5 = new QLabel(this);
                               day5->setText(QString::fromStdString(PLR[dinner]));
                               if(ui->fifth_day->text() == return_day(day)){
                                   day5->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day5_d->addWidget(day5);
                               ui->day5_d->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 6){
                               QLabel *day6 = new QLabel(this);
                               day6->setText(QString::fromStdString(PLR[dinner]));
                               if(ui->six_day->text() == return_day(day)){
                                   day6->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day6_d->addWidget(day6);
                               ui->day6_d->setAlignment(Qt::AlignTop);

                           }
                           if(struct_id == 7){
                               QLabel *day7 = new QLabel(this);
                               day7->setText(QString::fromStdString(PLR[dinner]));
                               if(ui->seventh_day->text() == return_day(day)){
                                   day7->setStyleSheet("color:orange;font-size:10px");
                               }
                               ui->day7_d->addWidget(day7);
                               ui->day7_d->setAlignment(Qt::AlignTop);

                           }
                           dinner++;
                       }
                   }
               }
           }
       }

}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_settings_pressed()
{
    Settings settings;
    settings.setModal(true);
    settings.exec();
}

void MainWindow::on_pushButton_clicked()
{
    Recipes recipes ;
    recipes.setModal(true);
    recipes.exec();

}
