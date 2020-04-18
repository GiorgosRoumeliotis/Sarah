#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define Underweight 10
#define Healthy 11
#define Overweight 12
#define Obese 13
#define Male 14
#define Female 15
#define Sedentary_Life 16
#define Slightly_Active 17
#define Moderate_Active 18
#define Active_Lifestyle 19
#include <iostream>

using namespace std;

#include <QDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QDialog
{
    Q_OBJECT

public:
//    MainWindow(QString userdb);
    explicit MainWindow(QString userdb,QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_settings_pressed();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
