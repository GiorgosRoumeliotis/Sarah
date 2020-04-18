/********************************************************************************
** Form generated from reading UI file 'selectfile.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTFILE_H
#define UI_SELECTFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_SelectFile
{
public:

    void setupUi(QDialog *SelectFile)
    {
        if (SelectFile->objectName().isEmpty())
            SelectFile->setObjectName(QString::fromUtf8("SelectFile"));
        SelectFile->resize(645, 476);

        retranslateUi(SelectFile);

        QMetaObject::connectSlotsByName(SelectFile);
    } // setupUi

    void retranslateUi(QDialog *SelectFile)
    {
        SelectFile->setWindowTitle(QCoreApplication::translate("SelectFile", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectFile: public Ui_SelectFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTFILE_H
