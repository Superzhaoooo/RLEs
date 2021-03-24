/********************************************************************************
** Form generated from reading UI file 'videorecordingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEORECORDINGDIALOG_H
#define UI_VIDEORECORDINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VideoRecordingDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *containerFormatGroup;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *mp4;
    QRadioButton *mkv;
    QDialogButtonBox *buttonBox;
    QGroupBox *recordingAreaGroup;
    QVBoxLayout *verticalLayout;
    QRadioButton *window;
    QRadioButton *network;
    QRadioButton *border;
    QRadioButton *padding;
    QLabel *topLabel;
    QLabel *bottomLabel;
    QGroupBox *pixelFormatGroup;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *compatible;
    QRadioButton *sharper;
    QPushButton *copyButton;
    QLabel *middleLabel;
    QLabel *commandLabel;

    void setupUi(QDialog *VideoRecordingDialog)
    {
        if (VideoRecordingDialog->objectName().isEmpty())
            VideoRecordingDialog->setObjectName(QStringLiteral("VideoRecordingDialog"));
        gridLayout = new QGridLayout(VideoRecordingDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        containerFormatGroup = new QGroupBox(VideoRecordingDialog);
        containerFormatGroup->setObjectName(QStringLiteral("containerFormatGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(containerFormatGroup->sizePolicy().hasHeightForWidth());
        containerFormatGroup->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(containerFormatGroup);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        mp4 = new QRadioButton(containerFormatGroup);
        mp4->setObjectName(QStringLiteral("mp4"));
        mp4->setChecked(true);

        verticalLayout_3->addWidget(mp4);

        mkv = new QRadioButton(containerFormatGroup);
        mkv->setObjectName(QStringLiteral("mkv"));

        verticalLayout_3->addWidget(mkv);


        gridLayout->addWidget(containerFormatGroup, 6, 0, 1, 1);

        buttonBox = new QDialogButtonBox(VideoRecordingDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 11, 1, 1, 1);

        recordingAreaGroup = new QGroupBox(VideoRecordingDialog);
        recordingAreaGroup->setObjectName(QStringLiteral("recordingAreaGroup"));
        sizePolicy.setHeightForWidth(recordingAreaGroup->sizePolicy().hasHeightForWidth());
        recordingAreaGroup->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(recordingAreaGroup);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        window = new QRadioButton(recordingAreaGroup);
        window->setObjectName(QStringLiteral("window"));
        window->setChecked(true);

        verticalLayout->addWidget(window);

        network = new QRadioButton(recordingAreaGroup);
        network->setObjectName(QStringLiteral("network"));

        verticalLayout->addWidget(network);

        border = new QRadioButton(recordingAreaGroup);
        border->setObjectName(QStringLiteral("border"));

        verticalLayout->addWidget(border);

        padding = new QRadioButton(recordingAreaGroup);
        padding->setObjectName(QStringLiteral("padding"));

        verticalLayout->addWidget(padding);


        gridLayout->addWidget(recordingAreaGroup, 5, 0, 1, 3);

        topLabel = new QLabel(VideoRecordingDialog);
        topLabel->setObjectName(QStringLiteral("topLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(topLabel->sizePolicy().hasHeightForWidth());
        topLabel->setSizePolicy(sizePolicy1);
        topLabel->setWordWrap(true);

        gridLayout->addWidget(topLabel, 0, 0, 1, 3);

        bottomLabel = new QLabel(VideoRecordingDialog);
        bottomLabel->setObjectName(QStringLiteral("bottomLabel"));
        sizePolicy1.setHeightForWidth(bottomLabel->sizePolicy().hasHeightForWidth());
        bottomLabel->setSizePolicy(sizePolicy1);
        bottomLabel->setWordWrap(true);

        gridLayout->addWidget(bottomLabel, 10, 0, 1, 3);

        pixelFormatGroup = new QGroupBox(VideoRecordingDialog);
        pixelFormatGroup->setObjectName(QStringLiteral("pixelFormatGroup"));
        sizePolicy.setHeightForWidth(pixelFormatGroup->sizePolicy().hasHeightForWidth());
        pixelFormatGroup->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(pixelFormatGroup);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        compatible = new QRadioButton(pixelFormatGroup);
        compatible->setObjectName(QStringLiteral("compatible"));
        compatible->setChecked(true);

        verticalLayout_2->addWidget(compatible);

        sharper = new QRadioButton(pixelFormatGroup);
        sharper->setObjectName(QStringLiteral("sharper"));

        verticalLayout_2->addWidget(sharper);


        gridLayout->addWidget(pixelFormatGroup, 6, 1, 1, 1);

        copyButton = new QPushButton(VideoRecordingDialog);
        copyButton->setObjectName(QStringLiteral("copyButton"));

        gridLayout->addWidget(copyButton, 9, 0, 1, 2, Qt::AlignRight);

        middleLabel = new QLabel(VideoRecordingDialog);
        middleLabel->setObjectName(QStringLiteral("middleLabel"));
        middleLabel->setWordWrap(true);

        gridLayout->addWidget(middleLabel, 7, 0, 1, 2);

        commandLabel = new QLabel(VideoRecordingDialog);
        commandLabel->setObjectName(QStringLiteral("commandLabel"));
        sizePolicy.setHeightForWidth(commandLabel->sizePolicy().hasHeightForWidth());
        commandLabel->setSizePolicy(sizePolicy);
        commandLabel->setStyleSheet(QStringLiteral("background-color: palette(base);"));
        commandLabel->setFrameShape(QFrame::StyledPanel);
        commandLabel->setWordWrap(true);
        commandLabel->setMargin(6);
        commandLabel->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(commandLabel, 8, 0, 1, 2);


        retranslateUi(VideoRecordingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), VideoRecordingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VideoRecordingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(VideoRecordingDialog);
    } // setupUi

    void retranslateUi(QDialog *VideoRecordingDialog)
    {
        VideoRecordingDialog->setWindowTitle(QApplication::translate("VideoRecordingDialog", "Video Recording", Q_NULLPTR));
        containerFormatGroup->setTitle(QApplication::translate("VideoRecordingDialog", "Container Format", Q_NULLPTR));
        mp4->setText(QApplication::translate("VideoRecordingDialog", "MP4", Q_NULLPTR));
        mkv->setText(QApplication::translate("VideoRecordingDialog", "MKV", Q_NULLPTR));
        recordingAreaGroup->setTitle(QApplication::translate("VideoRecordingDialog", "Crop Area", Q_NULLPTR));
        window->setText(QApplication::translate("VideoRecordingDialog", "Whole main window", Q_NULLPTR));
        network->setText(QApplication::translate("VideoRecordingDialog", "Network (module) area", Q_NULLPTR));
        border->setText(QApplication::translate("VideoRecordingDialog", "Network area with border", Q_NULLPTR));
        padding->setText(QApplication::translate("VideoRecordingDialog", "Network area plus padding", Q_NULLPTR));
        topLabel->setText(QApplication::translate("VideoRecordingDialog", "Video recording is performed by exporting a series of numbered PNG images of full window screenshots, starting with 'frames/${BASE}0000.png'. Screenshots can be assembled to videos using ffmpeg.", Q_NULLPTR));
        bottomLabel->setText(QApplication::translate("VideoRecordingDialog", "Before continuing, make sure there is ample disk space available, because the raw frame output can grow quite large.<br/><br/>While recording, the size of the main Qtenv window will be adjusted to have its width and height both divisible by 2, to ensure compatibility with more video codec options.", Q_NULLPTR));
        pixelFormatGroup->setTitle(QApplication::translate("VideoRecordingDialog", "Pixel Format", Q_NULLPTR));
        compatible->setText(QApplication::translate("VideoRecordingDialog", "More compatible (yuv420p)", Q_NULLPTR));
        sharper->setText(QApplication::translate("VideoRecordingDialog", "Sharper image (yuv444p)", Q_NULLPTR));
        copyButton->setText(QApplication::translate("VideoRecordingDialog", "Copy to clipboard", Q_NULLPTR));
        middleLabel->setText(QApplication::translate("VideoRecordingDialog", "Command line to encode captured frames into a video file (make sure that ffmpeg and x264 are installed on your system):", Q_NULLPTR));
        commandLabel->setText(QApplication::translate("VideoRecordingDialog", "<html><head/><body><p><span style=\" font-family:'monospace'; font-weight:600;\">ffmpeg -r FPS -f image2 -i \"frames/CONFIGURATION#RUN_%04d.png\" -filter:v \"crop=WIDTH:HEIGHT:X:Y\" -vcodec libx264 -pix_fmt yuv420p CONFIGURATION#RUN.mp4</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VideoRecordingDialog: public Ui_VideoRecordingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEORECORDINGDIALOG_H
