/********************************************************************************
** Form generated from reading UI file 'logfilterdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGFILTERDIALOG_H
#define UI_LOGFILTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_logfilterdialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTreeWidget *treeWidget;

    void setupUi(QDialog *logfilterdialog)
    {
        if (logfilterdialog->objectName().isEmpty())
            logfilterdialog->setObjectName(QStringLiteral("logfilterdialog"));
        logfilterdialog->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/tools/filter"), QSize(), QIcon::Normal, QIcon::Off);
        logfilterdialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(logfilterdialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(logfilterdialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        label = new QLabel(logfilterdialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        treeWidget = new QTreeWidget(logfilterdialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setSelectionMode(QAbstractItemView::NoSelection);
        treeWidget->setHeaderHidden(true);

        gridLayout->addWidget(treeWidget, 1, 0, 1, 1);


        retranslateUi(logfilterdialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), logfilterdialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), logfilterdialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(logfilterdialog);
    } // setupUi

    void retranslateUi(QDialog *logfilterdialog)
    {
        logfilterdialog->setWindowTitle(QApplication::translate("logfilterdialog", "Filter Window Contents", Q_NULLPTR));
        label->setText(QApplication::translate("logfilterdialog", "Select modules to show log messages for:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class logfilterdialog: public Ui_logfilterdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGFILTERDIALOG_H
