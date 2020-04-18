#include "settings.h"
#include "ui_settings.h"
#include <fstream>

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_pushButton_pressed()
{
    std::ifstream ClearFile;
    std::string filepath = "../../DataBase/LoggedInUser/username.txt";
    ClearFile.open(filepath.c_str(), std::ifstream::out | std::ifstream::trunc );
    ClearFile.close();
    exit(1);
}
