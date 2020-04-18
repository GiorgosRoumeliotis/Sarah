#ifndef CREATEPROFILE_H
#define CREATEPROFILE_H

#include <QDialog>
#include "foodexceptions.h"

namespace Ui {
class CreateProfile;
}

class CreateProfile : public QDialog
{
    Q_OBJECT

public:
    QString filename_pro_pic = "/home/groumeliotis/project/Sarah/images/avatar.png";
    explicit CreateProfile(QWidget *parent = nullptr);
    ~CreateProfile();
private slots:
    void on_pushButton_submit_pressed();
    void on_pushButton_fexce_pressed();
    void on_toolButton_avatar_pic_pressed();

public slots:
    void exception_slot();
protected:
    FoodExceptions *foodexception;
private:
    Ui::CreateProfile *ui;
};

#endif // CREATEPROFILE_H
