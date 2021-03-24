/********************************************************************************
** Form generated from reading UI file 'stopdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOPDIALOG_H
#define UI_STOPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StopDialog
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *stopButton;
    QCheckBox *checkBox;
    QPushButton *updateButton;

    void setupUi(QDialog *StopDialog)
    {
        if (StopDialog->objectName().isEmpty())
            StopDialog->setObjectName(QStringLiteral("StopDialog"));
        StopDialog->resize(206, 152);
        verticalLayout = new QVBoxLayout(StopDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stopButton = new QPushButton(StopDialog);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy);
        stopButton->setMinimumSize(QSize(188, 73));
        stopButton->setStyleSheet(QStringLiteral("background-color: rgb(248, 48, 48); font-size: 20pt; font-weight: bold;"));

        verticalLayout->addWidget(stopButton);

        checkBox = new QCheckBox(StopDialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);

        updateButton = new QPushButton(StopDialog);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy1);
        updateButton->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(updateButton);


        retranslateUi(StopDialog);
        QObject::connect(stopButton, SIGNAL(clicked()), StopDialog, SLOT(onClickStop()));
        QObject::connect(updateButton, SIGNAL(clicked()), StopDialog, SLOT(onClickUpdate()));
        QObject::connect(checkBox, SIGNAL(stateChanged(int)), StopDialog, SLOT(applyAutoupdate()));

        QMetaObject::connectSlotsByName(StopDialog);
    } // setupUi

    void retranslateUi(QDialog *StopDialog)
    {
        StopDialog->setWindowTitle(QApplication::translate("StopDialog", "Running...", Q_NULLPTR));
        stopButton->setText(QApplication::translate("StopDialog", "STOP!", Q_NULLPTR));
        checkBox->setText(QApplication::translate("StopDialog", "auto-update inspectors", Q_NULLPTR));
        updateButton->setText(QApplication::translate("StopDialog", "Update now", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StopDialog: public Ui_StopDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOPDIALOG_H
