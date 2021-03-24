/********************************************************************************
** Form generated from reading UI file 'rununtildialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNUNTILDIALOG_H
#define UI_RUNUNTILDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RunUntilDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *timeLabel;
    QLabel *eventLabel;
    QLabel *msgLabel;
    QLabel *empty;
    QLabel *modeLabel;
    QLineEdit *timeEdit;
    QLineEdit *eventEdit;
    QCheckBox *stopCheckbox;
    QComboBox *modeComboBox;
    QComboBox *msgCombo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RunUntilDialog)
    {
        if (RunUntilDialog->objectName().isEmpty())
            RunUntilDialog->setObjectName(QStringLiteral("RunUntilDialog"));
        RunUntilDialog->resize(453, 207);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RunUntilDialog->sizePolicy().hasHeightForWidth());
        RunUntilDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(RunUntilDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        timeLabel = new QLabel(RunUntilDialog);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, timeLabel);

        eventLabel = new QLabel(RunUntilDialog);
        eventLabel->setObjectName(QStringLiteral("eventLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, eventLabel);

        msgLabel = new QLabel(RunUntilDialog);
        msgLabel->setObjectName(QStringLiteral("msgLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, msgLabel);

        empty = new QLabel(RunUntilDialog);
        empty->setObjectName(QStringLiteral("empty"));

        formLayout->setWidget(3, QFormLayout::LabelRole, empty);

        modeLabel = new QLabel(RunUntilDialog);
        modeLabel->setObjectName(QStringLiteral("modeLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, modeLabel);

        timeEdit = new QLineEdit(RunUntilDialog);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, timeEdit);

        eventEdit = new QLineEdit(RunUntilDialog);
        eventEdit->setObjectName(QStringLiteral("eventEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, eventEdit);

        stopCheckbox = new QCheckBox(RunUntilDialog);
        stopCheckbox->setObjectName(QStringLiteral("stopCheckbox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, stopCheckbox);

        modeComboBox = new QComboBox(RunUntilDialog);
        modeComboBox->setObjectName(QStringLiteral("modeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(modeComboBox->sizePolicy().hasHeightForWidth());
        modeComboBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::FieldRole, modeComboBox);

        msgCombo = new QComboBox(RunUntilDialog);
        msgCombo->setObjectName(QStringLiteral("msgCombo"));
        sizePolicy1.setHeightForWidth(msgCombo->sizePolicy().hasHeightForWidth());
        msgCombo->setSizePolicy(sizePolicy1);
        msgCombo->setEditable(false);
        msgCombo->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        formLayout->setWidget(2, QFormLayout::FieldRole, msgCombo);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(RunUntilDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RunUntilDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RunUntilDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RunUntilDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RunUntilDialog);
    } // setupUi

    void retranslateUi(QDialog *RunUntilDialog)
    {
        RunUntilDialog->setWindowTitle(QApplication::translate("RunUntilDialog", "Run Until", Q_NULLPTR));
        timeLabel->setText(QApplication::translate("RunUntilDialog", "Simulation time to stop at:", Q_NULLPTR));
        eventLabel->setText(QApplication::translate("RunUntilDialog", "Event number to stop at:", Q_NULLPTR));
        msgLabel->setText(QApplication::translate("RunUntilDialog", "Message to stop at:", Q_NULLPTR));
        empty->setText(QString());
        modeLabel->setText(QApplication::translate("RunUntilDialog", "Running mode:", Q_NULLPTR));
        stopCheckbox->setText(QApplication::translate("RunUntilDialog", "Stop when message is cancelled", Q_NULLPTR));
        modeComboBox->clear();
        modeComboBox->insertItems(0, QStringList()
         << QApplication::translate("RunUntilDialog", "Normal", Q_NULLPTR)
         << QApplication::translate("RunUntilDialog", "Fast (rare updates)", Q_NULLPTR)
         << QApplication::translate("RunUntilDialog", "Express (tracing off)", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class RunUntilDialog: public Ui_RunUntilDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNUNTILDIALOG_H
