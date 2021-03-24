/********************************************************************************
** Form generated from reading UI file 'histograminspectorconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTOGRAMINSPECTORCONFIGDIALOG_H
#define UI_HISTOGRAMINSPECTORCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HistogramInspectorConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *styleLayout;
    QLabel *styleLabel;
    QComboBox *styleComboBox;
    QGridLayout *rangeLayout;
    QLineEdit *yMinLineEdit;
    QLineEdit *yMaxLineEdit;
    QLabel *minLabel;
    QLabel *xLabel;
    QLineEdit *xMaxLineEdit;
    QLabel *maxLabel;
    QLineEdit *xMinLineEdit;
    QLabel *yLabel;
    QLabel *rangeLabel;
    QSpacerItem *bottomSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HistogramInspectorConfigDialog)
    {
        if (HistogramInspectorConfigDialog->objectName().isEmpty())
            HistogramInspectorConfigDialog->setObjectName(QStringLiteral("HistogramInspectorConfigDialog"));
        HistogramInspectorConfigDialog->resize(282, 195);
        verticalLayout = new QVBoxLayout(HistogramInspectorConfigDialog);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(15, 15, 15, 15);
        styleLayout = new QHBoxLayout();
        styleLayout->setObjectName(QStringLiteral("styleLayout"));
        styleLabel = new QLabel(HistogramInspectorConfigDialog);
        styleLabel->setObjectName(QStringLiteral("styleLabel"));

        styleLayout->addWidget(styleLabel);

        styleComboBox = new QComboBox(HistogramInspectorConfigDialog);
        styleComboBox->setObjectName(QStringLiteral("styleComboBox"));

        styleLayout->addWidget(styleComboBox);


        verticalLayout->addLayout(styleLayout);

        rangeLayout = new QGridLayout();
        rangeLayout->setObjectName(QStringLiteral("rangeLayout"));
        yMinLineEdit = new QLineEdit(HistogramInspectorConfigDialog);
        yMinLineEdit->setObjectName(QStringLiteral("yMinLineEdit"));

        rangeLayout->addWidget(yMinLineEdit, 2, 1, 1, 1);

        yMaxLineEdit = new QLineEdit(HistogramInspectorConfigDialog);
        yMaxLineEdit->setObjectName(QStringLiteral("yMaxLineEdit"));

        rangeLayout->addWidget(yMaxLineEdit, 2, 2, 1, 1);

        minLabel = new QLabel(HistogramInspectorConfigDialog);
        minLabel->setObjectName(QStringLiteral("minLabel"));
        minLabel->setAlignment(Qt::AlignCenter);

        rangeLayout->addWidget(minLabel, 0, 1, 1, 1);

        xLabel = new QLabel(HistogramInspectorConfigDialog);
        xLabel->setObjectName(QStringLiteral("xLabel"));
        xLabel->setAlignment(Qt::AlignCenter);

        rangeLayout->addWidget(xLabel, 1, 0, 1, 1);

        xMaxLineEdit = new QLineEdit(HistogramInspectorConfigDialog);
        xMaxLineEdit->setObjectName(QStringLiteral("xMaxLineEdit"));

        rangeLayout->addWidget(xMaxLineEdit, 1, 2, 1, 1);

        maxLabel = new QLabel(HistogramInspectorConfigDialog);
        maxLabel->setObjectName(QStringLiteral("maxLabel"));
        maxLabel->setAlignment(Qt::AlignCenter);

        rangeLayout->addWidget(maxLabel, 0, 2, 1, 1);

        xMinLineEdit = new QLineEdit(HistogramInspectorConfigDialog);
        xMinLineEdit->setObjectName(QStringLiteral("xMinLineEdit"));

        rangeLayout->addWidget(xMinLineEdit, 1, 1, 1, 1);

        yLabel = new QLabel(HistogramInspectorConfigDialog);
        yLabel->setObjectName(QStringLiteral("yLabel"));
        yLabel->setAlignment(Qt::AlignCenter);

        rangeLayout->addWidget(yLabel, 2, 0, 1, 1);

        rangeLabel = new QLabel(HistogramInspectorConfigDialog);
        rangeLabel->setObjectName(QStringLiteral("rangeLabel"));

        rangeLayout->addWidget(rangeLabel, 0, 0, 1, 1);

        rangeLayout->setColumnStretch(0, 1);
        rangeLayout->setColumnStretch(1, 2);
        rangeLayout->setColumnStretch(2, 2);

        verticalLayout->addLayout(rangeLayout);

        bottomSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(bottomSpacer);

        buttonBox = new QDialogButtonBox(HistogramInspectorConfigDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(styleComboBox, xMinLineEdit);
        QWidget::setTabOrder(xMinLineEdit, xMaxLineEdit);
        QWidget::setTabOrder(xMaxLineEdit, yMinLineEdit);
        QWidget::setTabOrder(yMinLineEdit, yMaxLineEdit);

        retranslateUi(HistogramInspectorConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), HistogramInspectorConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HistogramInspectorConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(HistogramInspectorConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *HistogramInspectorConfigDialog)
    {
        HistogramInspectorConfigDialog->setWindowTitle(QApplication::translate("HistogramInspectorConfigDialog", "Histogram Options", Q_NULLPTR));
        styleLabel->setText(QApplication::translate("HistogramInspectorConfigDialog", "Style", Q_NULLPTR));
        styleComboBox->clear();
        styleComboBox->insertItems(0, QStringList()
         << QApplication::translate("HistogramInspectorConfigDialog", "Filled Rectangles", Q_NULLPTR)
         << QApplication::translate("HistogramInspectorConfigDialog", "Empy Rectangles", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        yMinLineEdit->setToolTip(QApplication::translate("HistogramInspectorConfigDialog", "Leave empty for default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        yMaxLineEdit->setToolTip(QApplication::translate("HistogramInspectorConfigDialog", "Leave empty for default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        minLabel->setText(QApplication::translate("HistogramInspectorConfigDialog", "min", Q_NULLPTR));
        xLabel->setText(QApplication::translate("HistogramInspectorConfigDialog", "x", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        xMaxLineEdit->setToolTip(QApplication::translate("HistogramInspectorConfigDialog", "Leave empty for default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        maxLabel->setText(QApplication::translate("HistogramInspectorConfigDialog", "max", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        xMinLineEdit->setToolTip(QApplication::translate("HistogramInspectorConfigDialog", "Leave empty for default", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        yLabel->setText(QApplication::translate("HistogramInspectorConfigDialog", "y", Q_NULLPTR));
        rangeLabel->setText(QApplication::translate("HistogramInspectorConfigDialog", "Range", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HistogramInspectorConfigDialog: public Ui_HistogramInspectorConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTOGRAMINSPECTORCONFIGDIALOG_H
