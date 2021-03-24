/********************************************************************************
** Form generated from reading UI file 'LOSCreationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOSCREATIONDIALOG_H
#define UI_LOSCREATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LOSCreationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *nameLabel;
    QLineEdit *nameBox;
    QTabWidget *typeTabs;
    QWidget *p2pTab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *p1GroupBox;
    QHBoxLayout *horizontalLayout;
    QComboBox *p1TypeCombo;
    QWidget *p1PointOptions;
    QHBoxLayout *horizontalLayout_3;
    QLabel *p1LonLabel;
    QDoubleSpinBox *p1LonBox;
    QLabel *p1LatLabel;
    QDoubleSpinBox *p1LatBox;
    QLabel *p1AltLabel;
    QDoubleSpinBox *p1AltBox;
    QPushButton *p1PointButton;
    QWidget *p1NodeOptions;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *p1NodeCombo;
    QPushButton *p1NodeButton;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *p2GroupBox;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *p2TypeCombo;
    QWidget *p2PointOptions;
    QHBoxLayout *horizontalLayout_5;
    QLabel *p2LonLabel;
    QDoubleSpinBox *p2LonBox;
    QLabel *p2LatLabel;
    QDoubleSpinBox *p2LatBox;
    QLabel *p2AltLabel;
    QDoubleSpinBox *p2AltBox;
    QPushButton *p2PointButton;
    QWidget *p2NodeOptions;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *p2NodeCombo;
    QPushButton *p2NodeButton;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *p2pRelativeCheckBox;
    QSpacerItem *verticalSpacer_3;
    QWidget *radialTab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *radPointGroupBox;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *radTypeCombo;
    QWidget *radPointOptions;
    QHBoxLayout *horizontalLayout_8;
    QLabel *radLonLabel;
    QDoubleSpinBox *radLonBox;
    QLabel *radLatLabel;
    QDoubleSpinBox *radLatBox;
    QLabel *radAltLabel;
    QDoubleSpinBox *radAltBox;
    QCheckBox *radRelativeCheckBox;
    QPushButton *radPointButton;
    QWidget *radNodeOptions;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *radNodeCombo;
    QPushButton *radNodeButton;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_10;
    QLabel *radiusLabel;
    QDoubleSpinBox *radiusSpinBox;
    QSpacerItem *horizontalSpacer;
    QLabel *spokesLabel;
    QSpinBox *spokesSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *depthTestCheckBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *LOSCreationDialog)
    {
        if (LOSCreationDialog->objectName().isEmpty())
            LOSCreationDialog->setObjectName(QStringLiteral("LOSCreationDialog"));
        LOSCreationDialog->resize(874, 358);
        verticalLayout = new QVBoxLayout(LOSCreationDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(LOSCreationDialog);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_11 = new QHBoxLayout(widget_2);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        nameLabel = new QLabel(widget_2);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        horizontalLayout_11->addWidget(nameLabel);

        nameBox = new QLineEdit(widget_2);
        nameBox->setObjectName(QStringLiteral("nameBox"));

        horizontalLayout_11->addWidget(nameBox);


        verticalLayout->addWidget(widget_2);

        typeTabs = new QTabWidget(LOSCreationDialog);
        typeTabs->setObjectName(QStringLiteral("typeTabs"));
        p2pTab = new QWidget();
        p2pTab->setObjectName(QStringLiteral("p2pTab"));
        verticalLayout_2 = new QVBoxLayout(p2pTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        p1GroupBox = new QGroupBox(p2pTab);
        p1GroupBox->setObjectName(QStringLiteral("p1GroupBox"));
        horizontalLayout = new QHBoxLayout(p1GroupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        p1TypeCombo = new QComboBox(p1GroupBox);
        p1TypeCombo->setObjectName(QStringLiteral("p1TypeCombo"));

        horizontalLayout->addWidget(p1TypeCombo);

        p1PointOptions = new QWidget(p1GroupBox);
        p1PointOptions->setObjectName(QStringLiteral("p1PointOptions"));
        horizontalLayout_3 = new QHBoxLayout(p1PointOptions);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        p1LonLabel = new QLabel(p1PointOptions);
        p1LonLabel->setObjectName(QStringLiteral("p1LonLabel"));

        horizontalLayout_3->addWidget(p1LonLabel);

        p1LonBox = new QDoubleSpinBox(p1PointOptions);
        p1LonBox->setObjectName(QStringLiteral("p1LonBox"));
        p1LonBox->setDecimals(7);
        p1LonBox->setMinimum(-180);
        p1LonBox->setMaximum(180);
        p1LonBox->setSingleStep(0.001);

        horizontalLayout_3->addWidget(p1LonBox);

        p1LatLabel = new QLabel(p1PointOptions);
        p1LatLabel->setObjectName(QStringLiteral("p1LatLabel"));

        horizontalLayout_3->addWidget(p1LatLabel);

        p1LatBox = new QDoubleSpinBox(p1PointOptions);
        p1LatBox->setObjectName(QStringLiteral("p1LatBox"));
        p1LatBox->setDecimals(7);
        p1LatBox->setMinimum(-90);
        p1LatBox->setMaximum(90);
        p1LatBox->setSingleStep(0.001);

        horizontalLayout_3->addWidget(p1LatBox);

        p1AltLabel = new QLabel(p1PointOptions);
        p1AltLabel->setObjectName(QStringLiteral("p1AltLabel"));

        horizontalLayout_3->addWidget(p1AltLabel);

        p1AltBox = new QDoubleSpinBox(p1PointOptions);
        p1AltBox->setObjectName(QStringLiteral("p1AltBox"));
        p1AltBox->setDecimals(2);
        p1AltBox->setMinimum(-10000);
        p1AltBox->setMaximum(1e+9);
        p1AltBox->setValue(2);

        horizontalLayout_3->addWidget(p1AltBox);

        p1PointButton = new QPushButton(p1PointOptions);
        p1PointButton->setObjectName(QStringLiteral("p1PointButton"));

        horizontalLayout_3->addWidget(p1PointButton);


        horizontalLayout->addWidget(p1PointOptions);

        p1NodeOptions = new QWidget(p1GroupBox);
        p1NodeOptions->setObjectName(QStringLiteral("p1NodeOptions"));
        horizontalLayout_4 = new QHBoxLayout(p1NodeOptions);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        p1NodeCombo = new QComboBox(p1NodeOptions);
        p1NodeCombo->setObjectName(QStringLiteral("p1NodeCombo"));

        horizontalLayout_4->addWidget(p1NodeCombo);

        p1NodeButton = new QPushButton(p1NodeOptions);
        p1NodeButton->setObjectName(QStringLiteral("p1NodeButton"));

        horizontalLayout_4->addWidget(p1NodeButton);


        horizontalLayout->addWidget(p1NodeOptions);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(p1GroupBox);

        p2GroupBox = new QGroupBox(p2pTab);
        p2GroupBox->setObjectName(QStringLiteral("p2GroupBox"));
        horizontalLayout_2 = new QHBoxLayout(p2GroupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        p2TypeCombo = new QComboBox(p2GroupBox);
        p2TypeCombo->setObjectName(QStringLiteral("p2TypeCombo"));

        horizontalLayout_2->addWidget(p2TypeCombo);

        p2PointOptions = new QWidget(p2GroupBox);
        p2PointOptions->setObjectName(QStringLiteral("p2PointOptions"));
        horizontalLayout_5 = new QHBoxLayout(p2PointOptions);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        p2LonLabel = new QLabel(p2PointOptions);
        p2LonLabel->setObjectName(QStringLiteral("p2LonLabel"));

        horizontalLayout_5->addWidget(p2LonLabel);

        p2LonBox = new QDoubleSpinBox(p2PointOptions);
        p2LonBox->setObjectName(QStringLiteral("p2LonBox"));
        p2LonBox->setDecimals(7);
        p2LonBox->setMinimum(-180);
        p2LonBox->setMaximum(180);
        p2LonBox->setSingleStep(0.001);

        horizontalLayout_5->addWidget(p2LonBox);

        p2LatLabel = new QLabel(p2PointOptions);
        p2LatLabel->setObjectName(QStringLiteral("p2LatLabel"));

        horizontalLayout_5->addWidget(p2LatLabel);

        p2LatBox = new QDoubleSpinBox(p2PointOptions);
        p2LatBox->setObjectName(QStringLiteral("p2LatBox"));
        p2LatBox->setDecimals(7);
        p2LatBox->setMinimum(-90);
        p2LatBox->setMaximum(90);
        p2LatBox->setSingleStep(0.001);

        horizontalLayout_5->addWidget(p2LatBox);

        p2AltLabel = new QLabel(p2PointOptions);
        p2AltLabel->setObjectName(QStringLiteral("p2AltLabel"));

        horizontalLayout_5->addWidget(p2AltLabel);

        p2AltBox = new QDoubleSpinBox(p2PointOptions);
        p2AltBox->setObjectName(QStringLiteral("p2AltBox"));
        p2AltBox->setDecimals(2);
        p2AltBox->setMinimum(-10000);
        p2AltBox->setMaximum(1e+9);
        p2AltBox->setValue(2);

        horizontalLayout_5->addWidget(p2AltBox);

        p2PointButton = new QPushButton(p2PointOptions);
        p2PointButton->setObjectName(QStringLiteral("p2PointButton"));

        horizontalLayout_5->addWidget(p2PointButton);


        horizontalLayout_2->addWidget(p2PointOptions);

        p2NodeOptions = new QWidget(p2GroupBox);
        p2NodeOptions->setObjectName(QStringLiteral("p2NodeOptions"));
        horizontalLayout_6 = new QHBoxLayout(p2NodeOptions);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        p2NodeCombo = new QComboBox(p2NodeOptions);
        p2NodeCombo->setObjectName(QStringLiteral("p2NodeCombo"));

        horizontalLayout_6->addWidget(p2NodeCombo);

        p2NodeButton = new QPushButton(p2NodeOptions);
        p2NodeButton->setObjectName(QStringLiteral("p2NodeButton"));

        horizontalLayout_6->addWidget(p2NodeButton);


        horizontalLayout_2->addWidget(p2NodeOptions);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addWidget(p2GroupBox);

        p2pRelativeCheckBox = new QCheckBox(p2pTab);
        p2pRelativeCheckBox->setObjectName(QStringLiteral("p2pRelativeCheckBox"));
        p2pRelativeCheckBox->setChecked(true);

        verticalLayout_2->addWidget(p2pRelativeCheckBox);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        typeTabs->addTab(p2pTab, QString());
        radialTab = new QWidget();
        radialTab->setObjectName(QStringLiteral("radialTab"));
        verticalLayout_3 = new QVBoxLayout(radialTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        radPointGroupBox = new QGroupBox(radialTab);
        radPointGroupBox->setObjectName(QStringLiteral("radPointGroupBox"));
        horizontalLayout_7 = new QHBoxLayout(radPointGroupBox);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        radTypeCombo = new QComboBox(radPointGroupBox);
        radTypeCombo->setObjectName(QStringLiteral("radTypeCombo"));

        horizontalLayout_7->addWidget(radTypeCombo);

        radPointOptions = new QWidget(radPointGroupBox);
        radPointOptions->setObjectName(QStringLiteral("radPointOptions"));
        horizontalLayout_8 = new QHBoxLayout(radPointOptions);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        radLonLabel = new QLabel(radPointOptions);
        radLonLabel->setObjectName(QStringLiteral("radLonLabel"));

        horizontalLayout_8->addWidget(radLonLabel);

        radLonBox = new QDoubleSpinBox(radPointOptions);
        radLonBox->setObjectName(QStringLiteral("radLonBox"));
        radLonBox->setDecimals(7);
        radLonBox->setMinimum(-180);
        radLonBox->setMaximum(180);
        radLonBox->setSingleStep(0.001);

        horizontalLayout_8->addWidget(radLonBox);

        radLatLabel = new QLabel(radPointOptions);
        radLatLabel->setObjectName(QStringLiteral("radLatLabel"));

        horizontalLayout_8->addWidget(radLatLabel);

        radLatBox = new QDoubleSpinBox(radPointOptions);
        radLatBox->setObjectName(QStringLiteral("radLatBox"));
        radLatBox->setDecimals(7);
        radLatBox->setMinimum(-90);
        radLatBox->setMaximum(90);
        radLatBox->setSingleStep(0.001);

        horizontalLayout_8->addWidget(radLatBox);

        radAltLabel = new QLabel(radPointOptions);
        radAltLabel->setObjectName(QStringLiteral("radAltLabel"));

        horizontalLayout_8->addWidget(radAltLabel);

        radAltBox = new QDoubleSpinBox(radPointOptions);
        radAltBox->setObjectName(QStringLiteral("radAltBox"));
        radAltBox->setDecimals(2);
        radAltBox->setMinimum(-10000);
        radAltBox->setMaximum(1e+9);
        radAltBox->setValue(2);

        horizontalLayout_8->addWidget(radAltBox);

        radRelativeCheckBox = new QCheckBox(radPointOptions);
        radRelativeCheckBox->setObjectName(QStringLiteral("radRelativeCheckBox"));
        radRelativeCheckBox->setChecked(true);

        horizontalLayout_8->addWidget(radRelativeCheckBox);

        radPointButton = new QPushButton(radPointOptions);
        radPointButton->setObjectName(QStringLiteral("radPointButton"));

        horizontalLayout_8->addWidget(radPointButton);


        horizontalLayout_7->addWidget(radPointOptions);

        radNodeOptions = new QWidget(radPointGroupBox);
        radNodeOptions->setObjectName(QStringLiteral("radNodeOptions"));
        horizontalLayout_9 = new QHBoxLayout(radNodeOptions);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        radNodeCombo = new QComboBox(radNodeOptions);
        radNodeCombo->setObjectName(QStringLiteral("radNodeCombo"));

        horizontalLayout_9->addWidget(radNodeCombo);

        radNodeButton = new QPushButton(radNodeOptions);
        radNodeButton->setObjectName(QStringLiteral("radNodeButton"));

        horizontalLayout_9->addWidget(radNodeButton);


        horizontalLayout_7->addWidget(radNodeOptions);

        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_3->addWidget(radPointGroupBox);

        widget = new QWidget(radialTab);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_10 = new QHBoxLayout(widget);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        radiusLabel = new QLabel(widget);
        radiusLabel->setObjectName(QStringLiteral("radiusLabel"));

        horizontalLayout_10->addWidget(radiusLabel);

        radiusSpinBox = new QDoubleSpinBox(widget);
        radiusSpinBox->setObjectName(QStringLiteral("radiusSpinBox"));
        radiusSpinBox->setMinimumSize(QSize(100, 0));
        radiusSpinBox->setMinimum(0.1);
        radiusSpinBox->setMaximum(4.00752e+7);
        radiusSpinBox->setValue(2000);

        horizontalLayout_10->addWidget(radiusSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        spokesLabel = new QLabel(widget);
        spokesLabel->setObjectName(QStringLiteral("spokesLabel"));

        horizontalLayout_10->addWidget(spokesLabel);

        spokesSpinBox = new QSpinBox(widget);
        spokesSpinBox->setObjectName(QStringLiteral("spokesSpinBox"));
        spokesSpinBox->setMinimumSize(QSize(70, 0));
        spokesSpinBox->setMinimum(2);
        spokesSpinBox->setMaximum(10000);
        spokesSpinBox->setValue(100);

        horizontalLayout_10->addWidget(spokesSpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        typeTabs->addTab(radialTab, QString());

        verticalLayout->addWidget(typeTabs);

        depthTestCheckBox = new QCheckBox(LOSCreationDialog);
        depthTestCheckBox->setObjectName(QStringLiteral("depthTestCheckBox"));
        depthTestCheckBox->setChecked(false);

        verticalLayout->addWidget(depthTestCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(LOSCreationDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(LOSCreationDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(LOSCreationDialog);
        QObject::connect(okButton, SIGNAL(clicked()), LOSCreationDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), LOSCreationDialog, SLOT(reject()));

        typeTabs->setCurrentIndex(0);
        p1TypeCombo->setCurrentIndex(0);
        p2TypeCombo->setCurrentIndex(0);
        radTypeCombo->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LOSCreationDialog);
    } // setupUi

    void retranslateUi(QDialog *LOSCreationDialog)
    {
        LOSCreationDialog->setWindowTitle(QApplication::translate("LOSCreationDialog", "Line-of-Sight", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("LOSCreationDialog", "Name", Q_NULLPTR));
        nameBox->setText(QApplication::translate("LOSCreationDialog", "LOS", Q_NULLPTR));
        p1GroupBox->setTitle(QApplication::translate("LOSCreationDialog", "Point 1", Q_NULLPTR));
        p1TypeCombo->clear();
        p1TypeCombo->insertItems(0, QStringList()
         << QApplication::translate("LOSCreationDialog", "Point", Q_NULLPTR)
         << QApplication::translate("LOSCreationDialog", "Annotation", Q_NULLPTR)
        );
        p1LonLabel->setText(QApplication::translate("LOSCreationDialog", "Lon", Q_NULLPTR));
        p1LatLabel->setText(QApplication::translate("LOSCreationDialog", "Lat", Q_NULLPTR));
        p1AltLabel->setText(QApplication::translate("LOSCreationDialog", "Alt", Q_NULLPTR));
        p1PointButton->setText(QApplication::translate("LOSCreationDialog", "Get Map Click", Q_NULLPTR));
        p1NodeButton->setText(QApplication::translate("LOSCreationDialog", "Center Map", Q_NULLPTR));
        p2GroupBox->setTitle(QApplication::translate("LOSCreationDialog", "Point 2", Q_NULLPTR));
        p2TypeCombo->clear();
        p2TypeCombo->insertItems(0, QStringList()
         << QApplication::translate("LOSCreationDialog", "Point", Q_NULLPTR)
         << QApplication::translate("LOSCreationDialog", "Annotation", Q_NULLPTR)
        );
        p2LonLabel->setText(QApplication::translate("LOSCreationDialog", "Lon", Q_NULLPTR));
        p2LatLabel->setText(QApplication::translate("LOSCreationDialog", "Lat", Q_NULLPTR));
        p2AltLabel->setText(QApplication::translate("LOSCreationDialog", "Alt", Q_NULLPTR));
        p2PointButton->setText(QApplication::translate("LOSCreationDialog", "Get Map Click", Q_NULLPTR));
        p2NodeButton->setText(QApplication::translate("LOSCreationDialog", "Center Map", Q_NULLPTR));
        p2pRelativeCheckBox->setText(QApplication::translate("LOSCreationDialog", "relative altitudes", Q_NULLPTR));
        typeTabs->setTabText(typeTabs->indexOf(p2pTab), QApplication::translate("LOSCreationDialog", "Point-to-Point", Q_NULLPTR));
        radPointGroupBox->setTitle(QApplication::translate("LOSCreationDialog", "Point", Q_NULLPTR));
        radTypeCombo->clear();
        radTypeCombo->insertItems(0, QStringList()
         << QApplication::translate("LOSCreationDialog", "Point", Q_NULLPTR)
         << QApplication::translate("LOSCreationDialog", "Annotation", Q_NULLPTR)
        );
        radLonLabel->setText(QApplication::translate("LOSCreationDialog", "Lon", Q_NULLPTR));
        radLatLabel->setText(QApplication::translate("LOSCreationDialog", "Lat", Q_NULLPTR));
        radAltLabel->setText(QApplication::translate("LOSCreationDialog", "Alt", Q_NULLPTR));
        radRelativeCheckBox->setText(QApplication::translate("LOSCreationDialog", "relative altitude", Q_NULLPTR));
        radPointButton->setText(QApplication::translate("LOSCreationDialog", "Get Map Click", Q_NULLPTR));
        radNodeButton->setText(QApplication::translate("LOSCreationDialog", "Center Map", Q_NULLPTR));
        radiusLabel->setText(QApplication::translate("LOSCreationDialog", "Radius (m)", Q_NULLPTR));
        spokesLabel->setText(QApplication::translate("LOSCreationDialog", "Spokes", Q_NULLPTR));
        typeTabs->setTabText(typeTabs->indexOf(radialTab), QApplication::translate("LOSCreationDialog", "Radial", Q_NULLPTR));
        depthTestCheckBox->setText(QApplication::translate("LOSCreationDialog", "Enable Depth Test", Q_NULLPTR));
        okButton->setText(QApplication::translate("LOSCreationDialog", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("LOSCreationDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LOSCreationDialog: public Ui_LOSCreationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOSCREATIONDIALOG_H
