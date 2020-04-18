#include "loginwindow.h"

#include <QApplication>

#include <QSplashScreen>
#include <QTimer>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LogInWindow w;
    ifstream remember("/home/groumeliotis/project/Sarah/DataBase/LoggedInUser/username.txt");


    string r_pass ;
    getline(remember,r_pass);

    if(r_pass.size() == 0){
        QSplashScreen *splash = new QSplashScreen;
        splash->setPixmap(QPixmap("../../images/splash.png"));
        splash->show();
        QTimer::singleShot(2500,splash,SLOT(close()));
        QTimer::singleShot(2500,&w,SLOT(show()));
        return a.exec();
    }

}
