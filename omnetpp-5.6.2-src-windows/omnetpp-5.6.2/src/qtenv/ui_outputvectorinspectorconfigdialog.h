/********************************************************************************
** Form generated from reading UI file 'outputvectorinspectorconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTVECTORINSPECTORCONFIGDIALOG_H
#define UI_OUTPUTVECTORINSPECTORCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OutputVectorInspectorConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *manualAxisSettingsGroupBox;
    QFormLayout *formLayout_2;
    QLabel *timeScaleLabel;
    QLabel *yMinLabel;
    QLabel *yMaxLabel;
    QLineEdit *timeScaleLineEdit;
    QLineEdit *yMinLineEdit;
    QLineEdit *yMaxLineEdit;
    QHBoxLayout *styleLayout;
    QLabel *styleLabel;
    QComboBox *styleComboBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *okCancelButtonBox;

    void setupUi(QDialog *OutputVectorInspectorConfigDialog)
    {
        if (OutputVectorInspectorConfigDialog->objectName().isEmpty())
            OutputVectorInspectorConfigDialog->setObjectName(QStringLiteral("OutputVectorInspectorConfigDialog"));
        OutputVectorInspectorConfigDialog->resize(313, 219);
        verticalLayout = new QVBoxLayout(OutputVectorInspectorConfigDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        manualAxisSettingsGroupBox = new QGroupBox(OutputVectorInspectorConfigDialog);
        manualAxisSettingsGroupBox->setObjectName(QStringLiteral("manualAxisSettingsGroupBox"));
        formLayout_2 = new QFormLayout(manualAxisSettingsGroupBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        timeScaleLabel = new QLabel(manualAxisSettingsGroupBox);
        timeScaleLabel->setObjectName(QStringLiteral("timeScaleLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, timeScaleLabel);

        yMinLabel = new QLabel(manualAxisSettingsGroupBox);
        yMinLabel->setObjectName(QStringLiteral("yMinLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, yMinLabel);

        yMaxLabel = new QLabel(manualAxisSettingsGroupBox);
        yMaxLabel->setObjectName(QStringLiteral("yMaxLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, yMaxLabel);

        timeScaleLineEdit = new QLineEdit(manualAxisSettingsGroupBox);
        timeScaleLineEdit->setObjectName(QStringLiteral("timeScaleLineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, timeScaleLineEdit);

        yMinLineEdit = new QLineEdit(manualAxisSettingsGroupBox);
        yMinLineEdit->setObjectName(QStringLiteral("yMinLineEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, yMinLineEdit);

        yMaxLineEdit = new QLineEdit(manualAxisSettingsGroupBox);
        yMaxLineEdit->setObjectName(QStringLiteral("yMaxLineEdit"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, yMaxLineEdit);


        verticalLayout->addWidget(manualAxisSettingsGroupBox);

        styleLayout = new QHBoxLayout();
        styleLayout->setObjectName(QStringLiteral("styleLayout"));
        styleLabel = new QLabel(OutputVectorInspectorConfigDialog);
        styleLabel->setObjectName(QStringLiteral("styleLabel"));

        styleLayout->addWidget(styleLabel);

        styleComboBox = new QComboBox(OutputVectorInspectorConfigDialog);
        styleComboBox->setObjectName(QStringLiteral("styleComboBox"));

        styleLayout->addWidget(styleComboBox);


        verticalLayout->addLayout(styleLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        okCancelButtonBox = new QDialogButtonBox(OutputVectorInspectorConfigDialog);
        okCancelButtonBox->setObjectName(QStringLiteral("okCancelButtonBox"));
        okCancelButtonBox->setOrientation(Qt::Horizontal);
        okCancelButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(okCancelButtonBox);


        retranslateUi(OutputVectorInspectorConfigDialog);
        QObject::connect(okCancelButtonBox, SIGNAL(accepted()), OutputVectorInspectorConfigDialog, SLOT(accept()));
        QObject::connect(okCancelButtonBox, SIGNAL(rejected()), OutputVectorInspectorConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OutputVectorInspectorConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *OutputVectorInspectorConfigDialog)
    {
        OutputVectorInspectorConfigDialog->setWindowTitle(QApplication::translate("OutputVectorInspectorConfigDialog", "Plotting Options", Q_NULLPTR));
        manualAxisSettingsGroupBox->setTitle(QApplication::translate("OutputVectorInspectorConfigDialog", "Axis settings:", Q_NULLPTR));
        timeScaleLabel->setText(QApplication::translate("OutputVectorInspectorConfigDialog", "Time span (sec):", Q_NULLPTR));
        yMinLabel->setText(QApplication::translate("OutputVectorInspectorConfigDialog", "Y min:", Q_NULLPTR));
        yMaxLabel->setText(QApplication::translate("OutputVectorInspectorConfigDialog", "Y max:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        timeScaleLineEdit->setToolTip(QApplication::translate("OutputVectorInspectorConfigDialog", "Leave empty for default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        yMinLineEdit->setToolTip(QApplication::translate("OutputVectorInspectorConfigDialog", "Leave empty for default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        yMaxLineEdit->setToolTip(QApplication::translate("OutputVectorInspectorConfigDialog", "Leave empty for default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        styleLabel->setText(QApplication::translate("OutputVectorInspectorConfigDialog", "Plotting mode:", Q_NULLPTR));
        styleComboBox->clear();
        styleComboBox->insertItems(0, QStringList()
         << QApplication::translate("OutputVectorInspectorConfigDialog", "Dots", Q_NULLPTR)
         << QApplication::translate("OutputVectorInspectorConfigDialog", "Points", Q_NULLPTR)
         << QApplication::translate("OutputVectorInspectorConfigDialog", "Pins", Q_NULLPTR)
         << QApplication::translate("OutputVectorInspectorConfigDialog", "Bars", Q_NULLPTR)
         << QApplication::translate("OutputVectorInspectorConfigDialog", "Sample-hold", Q_NULLPTR)
         << QApplication::translate("OutputVectorInspectorConfigDialog", "Backward Sample-hold", Q_NULLPTR)
         << QApplication::translate("OutputVectorInspectorConfigDialog", "Linear", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class OutputVectorInspectorConfigDialog: public Ui_OutputVectorInspectorConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTVECTORINSPECTORCONFIGDIALOG_H
