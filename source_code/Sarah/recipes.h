#ifndef RECIPES_H
#define RECIPES_H

#include <QDialog>

namespace Ui {
class Recipes;
}

class Recipes : public QDialog
{
    Q_OBJECT

public:
    explicit Recipes(QWidget *parent = nullptr);
    ~Recipes();

private:
    Ui::Recipes *ui;

private slots:
    void slotGetNumber();
    void slotIngr();

};

#endif // RECIPES_H
