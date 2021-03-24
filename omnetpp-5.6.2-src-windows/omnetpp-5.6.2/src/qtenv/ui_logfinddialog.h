/********************************************************************************
** Form generated from reading UI file 'logfinddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGFINDDIALOG_H
#define UI_LOGFINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogFindDialog
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *text;
    QGridLayout *gridLayout;
    QCheckBox *wholeWordsCheckBox;
    QCheckBox *regexpCheckBox;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardsCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LogFindDialog)
    {
        if (LogFindDialog->objectName().isEmpty())
            LogFindDialog->setObjectName(QStringLiteral("LogFindDialog"));
        LogFindDialog->resize(303, 130);
        QIcon icon;
        icon.addFile(QStringLiteral(":/tools/find"), QSize(), QIcon::Normal, QIcon::Off);
        LogFindDialog->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(LogFindDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(LogFindDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        text = new QLineEdit(LogFindDialog);
        text->setObjectName(QStringLiteral("text"));

        horizontalLayout_2->addWidget(text);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        wholeWordsCheckBox = new QCheckBox(LogFindDialog);
        wholeWordsCheckBox->setObjectName(QStringLiteral("wholeWordsCheckBox"));

        gridLayout->addWidget(wholeWordsCheckBox, 1, 0, 1, 1);

        regexpCheckBox = new QCheckBox(LogFindDialog);
        regexpCheckBox->setObjectName(QStringLiteral("regexpCheckBox"));

        gridLayout->addWidget(regexpCheckBox, 0, 0, 1, 1);

        caseCheckBox = new QCheckBox(LogFindDialog);
        caseCheckBox->setObjectName(QStringLiteral("caseCheckBox"));

        gridLayout->addWidget(caseCheckBox, 0, 1, 1, 1);

        backwardsCheckBox = new QCheckBox(LogFindDialog);
        backwardsCheckBox->setObjectName(QStringLiteral("backwardsCheckBox"));

        gridLayout->addWidget(backwardsCheckBox, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(LogFindDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(LogFindDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LogFindDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LogFindDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LogFindDialog);
    } // setupUi

    void retranslateUi(QDialog *LogFindDialog)
    {
        LogFindDialog->setWindowTitle(QApplication::translate("LogFindDialog", "Find", Q_NULLPTR));
        label->setText(QApplication::translate("LogFindDialog", "Find string:", Q_NULLPTR));
        wholeWordsCheckBox->setText(QApplication::translate("LogFindDialog", "&Whole words only", Q_NULLPTR));
        regexpCheckBox->setText(QApplication::translate("LogFindDialog", "&Regular expression", Q_NULLPTR));
        caseCheckBox->setText(QApplication::translate("LogFindDialog", "Case &sensitive", Q_NULLPTR));
        backwardsCheckBox->setText(QApplication::translate("LogFindDialog", "Search &backwards", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogFindDialog: public Ui_LogFindDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGFINDDIALOG_H
