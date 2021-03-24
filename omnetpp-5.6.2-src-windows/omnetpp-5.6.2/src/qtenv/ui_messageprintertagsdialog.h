/********************************************************************************
** Form generated from reading UI file 'messageprintertagsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEPRINTERTAGSDIALOG_H
#define UI_MESSAGEPRINTERTAGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_messageprintertagsdialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QListWidget *listWidget;

    void setupUi(QDialog *messageprintertagsdialog)
    {
        if (messageprintertagsdialog->objectName().isEmpty())
            messageprintertagsdialog->setObjectName(QStringLiteral("messageprintertagsdialog"));
        messageprintertagsdialog->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/tools/filter"), QSize(), QIcon::Normal, QIcon::Off);
        messageprintertagsdialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(messageprintertagsdialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(messageprintertagsdialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        label = new QLabel(messageprintertagsdialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        listWidget = new QListWidget(messageprintertagsdialog);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setSelectionMode(QAbstractItemView::NoSelection);

        gridLayout->addWidget(listWidget, 1, 0, 1, 1);


        retranslateUi(messageprintertagsdialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), messageprintertagsdialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), messageprintertagsdialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(messageprintertagsdialog);
    } // setupUi

    void retranslateUi(QDialog *messageprintertagsdialog)
    {
        messageprintertagsdialog->setWindowTitle(QApplication::translate("messageprintertagsdialog", "Message Display Configuration", Q_NULLPTR));
        label->setText(QApplication::translate("messageprintertagsdialog", "Message display options:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class messageprintertagsdialog: public Ui_messageprintertagsdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEPRINTERTAGSDIALOG_H
