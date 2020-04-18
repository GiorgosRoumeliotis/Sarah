#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LogInWindow; }
QT_END_NAMESPACE

class LogInWindow : public QMainWindow
{
    Q_OBJECT

public:
    LogInWindow(QWidget *parent = nullptr);
    ~LogInWindow();

private slots:

    void on_pushButton_singUp_pressed();

    void on_pushButton_singIn_pressed();

private:
    Ui::LogInWindow *ui;
};
#endif // LOGINWINDOW_H
