/********************************************************************************
** Form generated from reading UI file 'fileeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEEDITOR_H
#define UI_FILEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_fileEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *fileEditor)
    {
        if (fileEditor->objectName().isEmpty())
            fileEditor->setObjectName(QStringLiteral("fileEditor"));
        fileEditor->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(fileEditor);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        plainTextEdit = new QPlainTextEdit(fileEditor);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout_2->addWidget(plainTextEdit);


        retranslateUi(fileEditor);

        QMetaObject::connectSlotsByName(fileEditor);
    } // setupUi

    void retranslateUi(QDialog *fileEditor)
    {
        fileEditor->setWindowTitle(QApplication::translate("fileEditor", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fileEditor: public Ui_fileEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEEDITOR_H
