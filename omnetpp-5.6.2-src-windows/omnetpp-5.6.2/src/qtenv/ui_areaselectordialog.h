/********************************************************************************
** Form generated from reading UI file 'areaselectordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AREASELECTORDIALOG_H
#define UI_AREASELECTORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AreaSelectorDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *areaGroup;
    QVBoxLayout *verticalLayout;
    QRadioButton *boundingBox;
    QRadioButton *moduleRectangle;
    QRadioButton *viewport;
    QHBoxLayout *marginLayout;
    QLabel *marginLabel;
    QSpinBox *margin;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AreaSelectorDialog)
    {
        if (AreaSelectorDialog->objectName().isEmpty())
            AreaSelectorDialog->setObjectName(QStringLiteral("AreaSelectorDialog"));
        verticalLayout_2 = new QVBoxLayout(AreaSelectorDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        areaGroup = new QGroupBox(AreaSelectorDialog);
        areaGroup->setObjectName(QStringLiteral("areaGroup"));
        verticalLayout = new QVBoxLayout(areaGroup);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        boundingBox = new QRadioButton(areaGroup);
        boundingBox->setObjectName(QStringLiteral("boundingBox"));
        boundingBox->setChecked(true);

        verticalLayout->addWidget(boundingBox);

        moduleRectangle = new QRadioButton(areaGroup);
        moduleRectangle->setObjectName(QStringLiteral("moduleRectangle"));

        verticalLayout->addWidget(moduleRectangle);

        viewport = new QRadioButton(areaGroup);
        viewport->setObjectName(QStringLiteral("viewport"));

        verticalLayout->addWidget(viewport);


        verticalLayout_2->addWidget(areaGroup);

        marginLayout = new QHBoxLayout();
        marginLayout->setObjectName(QStringLiteral("marginLayout"));
        marginLabel = new QLabel(AreaSelectorDialog);
        marginLabel->setObjectName(QStringLiteral("marginLabel"));

        marginLayout->addWidget(marginLabel);

        margin = new QSpinBox(AreaSelectorDialog);
        margin->setObjectName(QStringLiteral("margin"));
        margin->setMaximum(100);
        margin->setValue(20);

        marginLayout->addWidget(margin);

        marginLayout->setStretch(0, 3);
        marginLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(marginLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(AreaSelectorDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(AreaSelectorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AreaSelectorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AreaSelectorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AreaSelectorDialog);
    } // setupUi

    void retranslateUi(QDialog *AreaSelectorDialog)
    {
        AreaSelectorDialog->setWindowTitle(QApplication::translate("AreaSelectorDialog", "Select Area", Q_NULLPTR));
        areaGroup->setTitle(QApplication::translate("AreaSelectorDialog", "Area:", Q_NULLPTR));
        boundingBox->setText(QApplication::translate("AreaSelectorDialog", "All graphical elements", Q_NULLPTR));
        moduleRectangle->setText(QApplication::translate("AreaSelectorDialog", "Module rectangle", Q_NULLPTR));
        viewport->setText(QApplication::translate("AreaSelectorDialog", "Viewport", Q_NULLPTR));
        marginLabel->setText(QApplication::translate("AreaSelectorDialog", "Margin (px):", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AreaSelectorDialog: public Ui_AreaSelectorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREASELECTORDIALOG_H
