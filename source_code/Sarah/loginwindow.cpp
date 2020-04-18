#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "mainwindow.h"
#include "createprofile.h"
#include <QMessageBox>
#include <iostream>
#include "../SHA256/sha256.h"
#include "../SHA256/sha256.cpp"
#include <QPixmap>
#include <QTimer>
#include <QSplashScreen>

using namespace std;

LogInWindow::LogInWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LogInWindow)
{
    ui->setupUi(this);

    ui->pushButton_forgot_pwd->hide();

    ifstream remember("/home/groumeliotis/project/Sarah/DataBase/LoggedInUser/username.txt");

    string r_pass ;
    getline(remember,r_pass);

    if(r_pass.size() != 0){
        MainWindow main(QString::fromStdString(r_pass));
        this->hide();
        main.setModal(true);
        main.setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
        main.exec();
        this->destroy(true,false);
    }

    QPixmap pix("/home/groumeliotis/project/Sarah/images/logo.png");
    int w = ui->label_logo_arah->width()*5;
    int h = ui->label_logo_arah->height()*5;
    ui->label_logo_arah->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}


LogInWindow::~LogInWindow()
{
    delete ui;
}


void LogInWindow::on_pushButton_singUp_pressed()
{
    CreateProfile create;
    create.setModal(true);
    create.exec();
}

void LogInWindow::on_pushButton_singIn_pressed()
{

    ui->label_pwd->setText(" ");
    ui->label_usr->setText(" ");

    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    bool access = false;
    string std_username = username.toUtf8().constData();
    string std_password = password.toUtf8().constData();
    string new_hash = sha256(std_password);
    string password_path;

    password_path = "../../DataBase/Users/"+std_username+"DB/password.txt";
    ifstream pass(password_path);

    if(pass){
        vector<string> old_hash{
            istream_iterator<string>(pass),
            istream_iterator<string>()
        };
        if(old_hash[0] == new_hash){
            access = true;
        }
        else{
            access = false;
        }

        if (access){
            /*Launch Main Window*/
            this->hide();
            MainWindow main(username);
            main.setModal(true);
            main.setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
            if(ui->rememberPassword->isChecked()){
                ofstream login;
                string file = "/home/groumeliotis/project/Sarah/DataBase/LoggedInUser/username.txt";
                login.open(file);
                login << username.toStdString() << endl;
                login.close();
            }
            main.exec();

        }
        else{
            ui->label_pwd->setText("*");
        }
    }
    else{
        ui->label_usr->setText("*");
    }

}
