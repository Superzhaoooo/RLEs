/********************************************************************************
** Form generated from reading UI file 'animationcontrollerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATIONCONTROLLERDIALOG_H
#define UI_ANIMATIONCONTROLLERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "exponentialspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_AnimationControllerDialog
{
public:
    QVBoxLayout *mainLayout;
    QGroupBox *controlGroupBox;
    QGridLayout *gridLayout_2;
    omnetpp::qtenv::ExponentialSpinBox *minSpeedSpinBox;
    QLabel *minSpeedLabel;
    QComboBox *profileComboBox;
    QLabel *playbackSpeedLabel;
    QLabel *maxSpeedLabel;
    omnetpp::qtenv::ExponentialSpinBox *playbackSpeedSpinBox;
    omnetpp::qtenv::ExponentialSpinBox *maxSpeedSpinBox;
    QLabel *profileLabel;
    QLabel *noteLabel;
    QGroupBox *readingsGroupBox;
    QGridLayout *gridLayout;
    QLabel *refreshDisplayCountValueLabel;
    QLabel *animationTimeValueLabel;
    QLabel *animationSpeedValueLabel;
    QLabel *animationSpeedLabel;
    QLabel *simulationSpeedLabel;
    QLabel *refreshDisplayCountLabel;
    QLabel *currentFpsLabel;
    QLabel *currentFpsValueLabel;
    QLabel *simulationSpeedValueLabel;
    QLabel *animationTimeLabel;
    QLabel *holdTimeLabel;
    QLabel *holdTimeValueLabel;
    QSpacerItem *bottomVerticalSpacer;

    void setupUi(QDialog *AnimationControllerDialog)
    {
        if (AnimationControllerDialog->objectName().isEmpty())
            AnimationControllerDialog->setObjectName(QStringLiteral("AnimationControllerDialog"));
        AnimationControllerDialog->resize(413, 411);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AnimationControllerDialog->sizePolicy().hasHeightForWidth());
        AnimationControllerDialog->setSizePolicy(sizePolicy);
        mainLayout = new QVBoxLayout(AnimationControllerDialog);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        mainLayout->setContentsMargins(6, 6, 6, 6);
        controlGroupBox = new QGroupBox(AnimationControllerDialog);
        controlGroupBox->setObjectName(QStringLiteral("controlGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(controlGroupBox->sizePolicy().hasHeightForWidth());
        controlGroupBox->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(controlGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        minSpeedSpinBox = new omnetpp::qtenv::ExponentialSpinBox(controlGroupBox);
        minSpeedSpinBox->setObjectName(QStringLiteral("minSpeedSpinBox"));
        minSpeedSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSpeedSpinBox->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        minSpeedSpinBox->setKeyboardTracking(false);
        minSpeedSpinBox->setMaximum(1e+18);

        gridLayout_2->addWidget(minSpeedSpinBox, 2, 1, 1, 1);

        minSpeedLabel = new QLabel(controlGroupBox);
        minSpeedLabel->setObjectName(QStringLiteral("minSpeedLabel"));

        gridLayout_2->addWidget(minSpeedLabel, 2, 0, 1, 1);

        profileComboBox = new QComboBox(controlGroupBox);
        profileComboBox->setObjectName(QStringLiteral("profileComboBox"));
        sizePolicy.setHeightForWidth(profileComboBox->sizePolicy().hasHeightForWidth());
        profileComboBox->setSizePolicy(sizePolicy);
        profileComboBox->setMinimumSize(QSize(150, 0));

        gridLayout_2->addWidget(profileComboBox, 0, 1, 1, 1);

        playbackSpeedLabel = new QLabel(controlGroupBox);
        playbackSpeedLabel->setObjectName(QStringLiteral("playbackSpeedLabel"));

        gridLayout_2->addWidget(playbackSpeedLabel, 1, 0, 1, 1);

        maxSpeedLabel = new QLabel(controlGroupBox);
        maxSpeedLabel->setObjectName(QStringLiteral("maxSpeedLabel"));

        gridLayout_2->addWidget(maxSpeedLabel, 3, 0, 1, 1);

        playbackSpeedSpinBox = new omnetpp::qtenv::ExponentialSpinBox(controlGroupBox);
        playbackSpeedSpinBox->setObjectName(QStringLiteral("playbackSpeedSpinBox"));
        playbackSpeedSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        playbackSpeedSpinBox->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        playbackSpeedSpinBox->setKeyboardTracking(false);
        playbackSpeedSpinBox->setMaximum(1e+18);

        gridLayout_2->addWidget(playbackSpeedSpinBox, 1, 1, 1, 1);

        maxSpeedSpinBox = new omnetpp::qtenv::ExponentialSpinBox(controlGroupBox);
        maxSpeedSpinBox->setObjectName(QStringLiteral("maxSpeedSpinBox"));
        maxSpeedSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSpeedSpinBox->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        maxSpeedSpinBox->setKeyboardTracking(false);
        maxSpeedSpinBox->setMaximum(1e+18);

        gridLayout_2->addWidget(maxSpeedSpinBox, 3, 1, 1, 1);

        profileLabel = new QLabel(controlGroupBox);
        profileLabel->setObjectName(QStringLiteral("profileLabel"));

        gridLayout_2->addWidget(profileLabel, 0, 0, 1, 1);

        noteLabel = new QLabel(controlGroupBox);
        noteLabel->setObjectName(QStringLiteral("noteLabel"));
        sizePolicy1.setHeightForWidth(noteLabel->sizePolicy().hasHeightForWidth());
        noteLabel->setSizePolicy(sizePolicy1);
        noteLabel->setWordWrap(true);

        gridLayout_2->addWidget(noteLabel, 4, 0, 1, 2);

        gridLayout_2->setColumnStretch(0, 3);
        gridLayout_2->setColumnStretch(1, 2);

        mainLayout->addWidget(controlGroupBox);

        readingsGroupBox = new QGroupBox(AnimationControllerDialog);
        readingsGroupBox->setObjectName(QStringLiteral("readingsGroupBox"));
        gridLayout = new QGridLayout(readingsGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        refreshDisplayCountValueLabel = new QLabel(readingsGroupBox);
        refreshDisplayCountValueLabel->setObjectName(QStringLiteral("refreshDisplayCountValueLabel"));
        refreshDisplayCountValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(refreshDisplayCountValueLabel, 6, 1, 1, 1);

        animationTimeValueLabel = new QLabel(readingsGroupBox);
        animationTimeValueLabel->setObjectName(QStringLiteral("animationTimeValueLabel"));
        animationTimeValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(animationTimeValueLabel, 0, 1, 1, 1);

        animationSpeedValueLabel = new QLabel(readingsGroupBox);
        animationSpeedValueLabel->setObjectName(QStringLiteral("animationSpeedValueLabel"));
        animationSpeedValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(animationSpeedValueLabel, 2, 1, 1, 1);

        animationSpeedLabel = new QLabel(readingsGroupBox);
        animationSpeedLabel->setObjectName(QStringLiteral("animationSpeedLabel"));

        gridLayout->addWidget(animationSpeedLabel, 2, 0, 1, 1);

        simulationSpeedLabel = new QLabel(readingsGroupBox);
        simulationSpeedLabel->setObjectName(QStringLiteral("simulationSpeedLabel"));

        gridLayout->addWidget(simulationSpeedLabel, 3, 0, 1, 1);

        refreshDisplayCountLabel = new QLabel(readingsGroupBox);
        refreshDisplayCountLabel->setObjectName(QStringLiteral("refreshDisplayCountLabel"));

        gridLayout->addWidget(refreshDisplayCountLabel, 6, 0, 1, 1);

        currentFpsLabel = new QLabel(readingsGroupBox);
        currentFpsLabel->setObjectName(QStringLiteral("currentFpsLabel"));

        gridLayout->addWidget(currentFpsLabel, 7, 0, 1, 1);

        currentFpsValueLabel = new QLabel(readingsGroupBox);
        currentFpsValueLabel->setObjectName(QStringLiteral("currentFpsValueLabel"));
        sizePolicy1.setHeightForWidth(currentFpsValueLabel->sizePolicy().hasHeightForWidth());
        currentFpsValueLabel->setSizePolicy(sizePolicy1);
        currentFpsValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(currentFpsValueLabel, 7, 1, 1, 1);

        simulationSpeedValueLabel = new QLabel(readingsGroupBox);
        simulationSpeedValueLabel->setObjectName(QStringLiteral("simulationSpeedValueLabel"));
        simulationSpeedValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(simulationSpeedValueLabel, 3, 1, 1, 1);

        animationTimeLabel = new QLabel(readingsGroupBox);
        animationTimeLabel->setObjectName(QStringLiteral("animationTimeLabel"));

        gridLayout->addWidget(animationTimeLabel, 0, 0, 1, 1);

        holdTimeLabel = new QLabel(readingsGroupBox);
        holdTimeLabel->setObjectName(QStringLiteral("holdTimeLabel"));

        gridLayout->addWidget(holdTimeLabel, 1, 0, 1, 1);

        holdTimeValueLabel = new QLabel(readingsGroupBox);
        holdTimeValueLabel->setObjectName(QStringLiteral("holdTimeValueLabel"));
        holdTimeValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(holdTimeValueLabel, 1, 1, 1, 1);

        gridLayout->setColumnStretch(0, 3);

        mainLayout->addWidget(readingsGroupBox);

        bottomVerticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainLayout->addItem(bottomVerticalSpacer);

        mainLayout->setStretch(2, 1);
        QWidget::setTabOrder(profileComboBox, playbackSpeedSpinBox);
        QWidget::setTabOrder(playbackSpeedSpinBox, minSpeedSpinBox);
        QWidget::setTabOrder(minSpeedSpinBox, maxSpeedSpinBox);

        retranslateUi(AnimationControllerDialog);

        QMetaObject::connectSlotsByName(AnimationControllerDialog);
    } // setupUi

    void retranslateUi(QDialog *AnimationControllerDialog)
    {
        AnimationControllerDialog->setWindowTitle(QApplication::translate("AnimationControllerDialog", "Animation Parameters", Q_NULLPTR));
        controlGroupBox->setTitle(QApplication::translate("AnimationControllerDialog", "Control", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        minSpeedSpinBox->setToolTip(QApplication::translate("AnimationControllerDialog", "Enforce minimum animation speed: overrides speed requested by the model.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        minSpeedSpinBox->setSpecialValueText(QApplication::translate("AnimationControllerDialog", "none", Q_NULLPTR));
        minSpeedLabel->setText(QApplication::translate("AnimationControllerDialog", "Min animation speed:", Q_NULLPTR));
        playbackSpeedLabel->setText(QApplication::translate("AnimationControllerDialog", "Playback speed:", Q_NULLPTR));
        maxSpeedLabel->setText(QApplication::translate("AnimationControllerDialog", "Max animation speed:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        playbackSpeedSpinBox->setToolTip(QApplication::translate("AnimationControllerDialog", "Corresponds to speed slider on the toolbar.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        maxSpeedSpinBox->setToolTip(QApplication::translate("AnimationControllerDialog", "Enforce maximum animation speed: overrides speed requested by the model.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        maxSpeedSpinBox->setSpecialValueText(QApplication::translate("AnimationControllerDialog", "none", Q_NULLPTR));
        profileLabel->setText(QApplication::translate("AnimationControllerDialog", "Profile:", Q_NULLPTR));
        noteLabel->setText(QApplication::translate("AnimationControllerDialog", "Note: Animation speed maps simulation time to animation time. Playback speed maps animation time to real time.", Q_NULLPTR));
        readingsGroupBox->setTitle(QApplication::translate("AnimationControllerDialog", "Current Readings", Q_NULLPTR));
        refreshDisplayCountValueLabel->setText(QString());
        animationTimeValueLabel->setText(QString());
        animationSpeedValueLabel->setText(QString());
        animationSpeedLabel->setText(QApplication::translate("AnimationControllerDialog", "Animation speed:", Q_NULLPTR));
        simulationSpeedLabel->setText(QApplication::translate("AnimationControllerDialog", "Simulation speed:", Q_NULLPTR));
        refreshDisplayCountLabel->setText(QApplication::translate("AnimationControllerDialog", "Num. refreshDisplay() calls:", Q_NULLPTR));
        currentFpsLabel->setText(QApplication::translate("AnimationControllerDialog", "Frames per sec:", Q_NULLPTR));
        currentFpsValueLabel->setText(QString());
        simulationSpeedValueLabel->setText(QString());
        animationTimeLabel->setText(QApplication::translate("AnimationControllerDialog", "Animation time:", Q_NULLPTR));
        holdTimeLabel->setText(QApplication::translate("AnimationControllerDialog", "Hold time:", Q_NULLPTR));
        holdTimeValueLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AnimationControllerDialog: public Ui_AnimationControllerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATIONCONTROLLERDIALOG_H
