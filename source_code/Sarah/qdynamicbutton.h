#ifndef QDYNAMICBUTTON_H
#define QDYNAMICBUTTON_H

#include <QPushButton>

class QDynamicButton : public QPushButton
{
    Q_OBJECT
public:
    explicit QDynamicButton(QWidget *parent = 0);
    ~QDynamicButton();
    static int ResID;   // A static variable counter buttons rooms
    int getID();        // Function to return a local number buttons
    void add_to_ID(int num);
    void sub_to_ID(int num);

public slots:

private:
    int buttonID = 0;   // Local variable number of the button
};

#endif // QDYNAMICBUTTON_H
