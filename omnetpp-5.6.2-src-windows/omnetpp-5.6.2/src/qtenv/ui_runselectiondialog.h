/********************************************************************************
** Form generated from reading UI file 'runselectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNSELECTIONDIALOG_H
#define UI_RUNSELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RunSelectionDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *configName;
    QLabel *label_3;
    QComboBox *runNumber;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RunSelectionDialog)
    {
        if (RunSelectionDialog->objectName().isEmpty())
            RunSelectionDialog->setObjectName(QStringLiteral("RunSelectionDialog"));
        RunSelectionDialog->setWindowModality(Qt::NonModal);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RunSelectionDialog->sizePolicy().hasHeightForWidth());
        RunSelectionDialog->setSizePolicy(sizePolicy);
        RunSelectionDialog->setModal(false);
        verticalLayout_2 = new QVBoxLayout(RunSelectionDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(RunSelectionDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(RunSelectionDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        configName = new QComboBox(RunSelectionDialog);
        configName->setObjectName(QStringLiteral("configName"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(configName->sizePolicy().hasHeightForWidth());
        configName->setSizePolicy(sizePolicy1);
        configName->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(configName, 0, 1, 1, 1);

        label_3 = new QLabel(RunSelectionDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        runNumber = new QComboBox(RunSelectionDialog);
        runNumber->setObjectName(QStringLiteral("runNumber"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(runNumber->sizePolicy().hasHeightForWidth());
        runNumber->setSizePolicy(sizePolicy2);
        runNumber->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(runNumber, 1, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(RunSelectionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy3);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout_2->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(configName);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(configName, runNumber);
        QWidget::setTabOrder(runNumber, buttonBox);

        retranslateUi(RunSelectionDialog);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), RunSelectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RunSelectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RunSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *RunSelectionDialog)
    {
        RunSelectionDialog->setWindowTitle(QApplication::translate("RunSelectionDialog", "Set Up Inifile Configuration", Q_NULLPTR));
        label->setText(QApplication::translate("RunSelectionDialog", "Set up one of the configurations defined in ...", Q_NULLPTR));
        label_2->setText(QApplication::translate("RunSelectionDialog", "Config name:", Q_NULLPTR));
        label_3->setText(QApplication::translate("RunSelectionDialog", "Run number:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RunSelectionDialog: public Ui_RunSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNSELECTIONDIALOG_H
