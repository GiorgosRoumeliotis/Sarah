#ifndef FOODEXCEPTIONS_H
#define FOODEXCEPTIONS_H

#include <QDialog>
#include <iostream>
//#include "createprofile.h"

using namespace std;
namespace Ui {
class FoodExceptions;
}


class FoodExceptions: public QDialog
{
    Q_OBJECT
    vector<int> ing_id ;
    vector<string> ing_name;
    QVector<QString> checkboxes;
    vector<int> add_exceptions;
    vector<int> history_exceptions;
    vector<int> unique_excep;

public:
    explicit FoodExceptions(/*vector<string> file,*/QWidget *parent = nullptr);
//    FoodExceptions();
    ~FoodExceptions();

private slots:
    void on_searchButton_pressed();
    void slotGetNumber();

public slots:
    void on_Add_pushButton_pressed();

private:
    Ui::FoodExceptions *ui;

signals:
    void buttonClick();

};

#endif // FOODEXCEPTIONS_H
