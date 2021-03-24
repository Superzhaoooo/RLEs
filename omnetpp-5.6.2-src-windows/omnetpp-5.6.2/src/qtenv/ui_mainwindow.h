/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionOneStep;
    QAction *actionRun;
    QAction *actionSetUpConfiguration;
    QAction *actionStop;
    QAction *actionFastRun;
    QAction *actionExpressRun;
    QAction *actionRunUntil;
    QAction *actionLoadNedFile;
    QAction *actionConcludeSimulation;
    QAction *actionEventlogRecording;
    QAction *actionFindInspectObjects;
    QAction *actionVerticalLayout;
    QAction *actionHorizontalLayout;
    QAction *actionTimeline;
    QAction *actionPreferences;
    QAction *actionSetUpUnconfiguredNetwork;
    QAction *actionOpenPrimaryIniFile;
    QAction *actionCreate_Snapshot;
    QAction *actionDebugNextEvent;
    QAction *actionRebuildNetwork;
    QAction *actionNetwork;
    QAction *actionScheduledEvents;
    QAction *actionSimulation;
    QAction *actionNedComponentTypes;
    QAction *actionRegisteredClasses;
    QAction *actionNED_Functions;
    QAction *actionRegistered_Enums;
    QAction *actionSupportedConfigurationOption;
    QAction *actionInspectByPointer;
    QAction *actionStatusDetails;
    QAction *actionFlipWindowLayout;
    QAction *actionAbout_OMNeT_Qtenv;
    QAction *actionRecordVideo;
    QAction *actionShowAnimationParams;
    QAction *actionDebugOnErrors;
    QAction *actionClassDescriptors;
    QAction *actionResultFilters;
    QAction *actionResultRecorders;
    QAction *actionMessagePrinters;
    QAction *actionDebugNow;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *toolBarArea;
    QHBoxLayout *topStatusRow;
    QLabel *nextEventLabel;
    QLabel *nextModuleLabel;
    QLabel *nextTimeLabel;
    QSplitter *mainSplitter;
    QWidget *timeLine;
    QSplitter *splitter_3;
    QSplitter *splitter;
    QWidget *treeView;
    QWidget *objectInspector;
    QSplitter *splitter_2;
    QWidget *mainArea;
    QWidget *logInspector;
    QHBoxLayout *statusBar;
    QLabel *labelConfigName;
    QLabel *labelMessageStats;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSimulate;
    QMenu *menuInspect;
    QMenu *menuAvailable_Components;
    QMenu *menuView;
    QMenu *menuHelp;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(939, 673);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/logo128m"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral(""));
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionQuit->setShortcutContext(Qt::ApplicationShortcut);
        actionOneStep = new QAction(MainWindow);
        actionOneStep->setObjectName(QStringLiteral("actionOneStep"));
        actionOneStep->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/tools/step"), QSize(), QIcon::Normal, QIcon::Off);
        actionOneStep->setIcon(icon1);
        actionOneStep->setShortcutContext(Qt::ApplicationShortcut);
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QStringLiteral("actionRun"));
        actionRun->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/tools/run"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon2);
        actionRun->setShortcutContext(Qt::ApplicationShortcut);
        actionSetUpConfiguration = new QAction(MainWindow);
        actionSetUpConfiguration->setObjectName(QStringLiteral("actionSetUpConfiguration"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/tools/newrun"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetUpConfiguration->setIcon(icon3);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/tools/stop"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon4);
        actionStop->setShortcutContext(Qt::ApplicationShortcut);
        actionFastRun = new QAction(MainWindow);
        actionFastRun->setObjectName(QStringLiteral("actionFastRun"));
        actionFastRun->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/tools/fast"), QSize(), QIcon::Normal, QIcon::Off);
        actionFastRun->setIcon(icon5);
        actionFastRun->setShortcutContext(Qt::ApplicationShortcut);
        actionExpressRun = new QAction(MainWindow);
        actionExpressRun->setObjectName(QStringLiteral("actionExpressRun"));
        actionExpressRun->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/tools/express"), QSize(), QIcon::Normal, QIcon::Off);
        actionExpressRun->setIcon(icon6);
        actionExpressRun->setShortcutContext(Qt::ApplicationShortcut);
        actionRunUntil = new QAction(MainWindow);
        actionRunUntil->setObjectName(QStringLiteral("actionRunUntil"));
        actionRunUntil->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/tools/until"), QSize(), QIcon::Normal, QIcon::Off);
        actionRunUntil->setIcon(icon7);
        actionRunUntil->setShortcutContext(Qt::ApplicationShortcut);
        actionLoadNedFile = new QAction(MainWindow);
        actionLoadNedFile->setObjectName(QStringLiteral("actionLoadNedFile"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/tools/loadned"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadNedFile->setIcon(icon8);
        actionConcludeSimulation = new QAction(MainWindow);
        actionConcludeSimulation->setObjectName(QStringLiteral("actionConcludeSimulation"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/tools/finish"), QSize(), QIcon::Normal, QIcon::Off);
        actionConcludeSimulation->setIcon(icon9);
        actionEventlogRecording = new QAction(MainWindow);
        actionEventlogRecording->setObjectName(QStringLiteral("actionEventlogRecording"));
        actionEventlogRecording->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/tools/recordeventlog"), QSize(), QIcon::Normal, QIcon::Off);
        actionEventlogRecording->setIcon(icon10);
        actionFindInspectObjects = new QAction(MainWindow);
        actionFindInspectObjects->setObjectName(QStringLiteral("actionFindInspectObjects"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/tools/findobj"), QSize(), QIcon::Normal, QIcon::Off);
        actionFindInspectObjects->setIcon(icon11);
        actionVerticalLayout = new QAction(MainWindow);
        actionVerticalLayout->setObjectName(QStringLiteral("actionVerticalLayout"));
        actionVerticalLayout->setCheckable(true);
        actionVerticalLayout->setChecked(false);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/tools/vertical"), QSize(), QIcon::Normal, QIcon::Off);
        actionVerticalLayout->setIcon(icon12);
        actionHorizontalLayout = new QAction(MainWindow);
        actionHorizontalLayout->setObjectName(QStringLiteral("actionHorizontalLayout"));
        actionHorizontalLayout->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/tools/horizontal"), QSize(), QIcon::Normal, QIcon::Off);
        actionHorizontalLayout->setIcon(icon13);
        actionTimeline = new QAction(MainWindow);
        actionTimeline->setObjectName(QStringLiteral("actionTimeline"));
        actionTimeline->setCheckable(true);
        actionTimeline->setChecked(false);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/objects/fes"), QSize(), QIcon::Normal, QIcon::Off);
        actionTimeline->setIcon(icon14);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/tools/config"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreferences->setIcon(icon15);
        actionSetUpUnconfiguredNetwork = new QAction(MainWindow);
        actionSetUpUnconfiguredNetwork->setObjectName(QStringLiteral("actionSetUpUnconfiguredNetwork"));
        actionOpenPrimaryIniFile = new QAction(MainWindow);
        actionOpenPrimaryIniFile->setObjectName(QStringLiteral("actionOpenPrimaryIniFile"));
        actionCreate_Snapshot = new QAction(MainWindow);
        actionCreate_Snapshot->setObjectName(QStringLiteral("actionCreate_Snapshot"));
        actionDebugNextEvent = new QAction(MainWindow);
        actionDebugNextEvent->setObjectName(QStringLiteral("actionDebugNextEvent"));
        actionRebuildNetwork = new QAction(MainWindow);
        actionRebuildNetwork->setObjectName(QStringLiteral("actionRebuildNetwork"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/tools/rebuild"), QSize(), QIcon::Normal, QIcon::Off);
        actionRebuildNetwork->setIcon(icon16);
        actionNetwork = new QAction(MainWindow);
        actionNetwork->setObjectName(QStringLiteral("actionNetwork"));
        actionScheduledEvents = new QAction(MainWindow);
        actionScheduledEvents->setObjectName(QStringLiteral("actionScheduledEvents"));
        actionSimulation = new QAction(MainWindow);
        actionSimulation->setObjectName(QStringLiteral("actionSimulation"));
        actionNedComponentTypes = new QAction(MainWindow);
        actionNedComponentTypes->setObjectName(QStringLiteral("actionNedComponentTypes"));
        actionRegisteredClasses = new QAction(MainWindow);
        actionRegisteredClasses->setObjectName(QStringLiteral("actionRegisteredClasses"));
        actionNED_Functions = new QAction(MainWindow);
        actionNED_Functions->setObjectName(QStringLiteral("actionNED_Functions"));
        actionRegistered_Enums = new QAction(MainWindow);
        actionRegistered_Enums->setObjectName(QStringLiteral("actionRegistered_Enums"));
        actionSupportedConfigurationOption = new QAction(MainWindow);
        actionSupportedConfigurationOption->setObjectName(QStringLiteral("actionSupportedConfigurationOption"));
        actionInspectByPointer = new QAction(MainWindow);
        actionInspectByPointer->setObjectName(QStringLiteral("actionInspectByPointer"));
        actionStatusDetails = new QAction(MainWindow);
        actionStatusDetails->setObjectName(QStringLiteral("actionStatusDetails"));
        actionStatusDetails->setCheckable(true);
        actionFlipWindowLayout = new QAction(MainWindow);
        actionFlipWindowLayout->setObjectName(QStringLiteral("actionFlipWindowLayout"));
        actionAbout_OMNeT_Qtenv = new QAction(MainWindow);
        actionAbout_OMNeT_Qtenv->setObjectName(QStringLiteral("actionAbout_OMNeT_Qtenv"));
        actionRecordVideo = new QAction(MainWindow);
        actionRecordVideo->setObjectName(QStringLiteral("actionRecordVideo"));
        actionRecordVideo->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/tools/recordvideo"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecordVideo->setIcon(icon17);
        actionShowAnimationParams = new QAction(MainWindow);
        actionShowAnimationParams->setObjectName(QStringLiteral("actionShowAnimationParams"));
        actionShowAnimationParams->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/tools/props"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowAnimationParams->setIcon(icon18);
        actionDebugOnErrors = new QAction(MainWindow);
        actionDebugOnErrors->setObjectName(QStringLiteral("actionDebugOnErrors"));
        actionDebugOnErrors->setCheckable(true);
        actionClassDescriptors = new QAction(MainWindow);
        actionClassDescriptors->setObjectName(QStringLiteral("actionClassDescriptors"));
        actionResultFilters = new QAction(MainWindow);
        actionResultFilters->setObjectName(QStringLiteral("actionResultFilters"));
        actionResultRecorders = new QAction(MainWindow);
        actionResultRecorders->setObjectName(QStringLiteral("actionResultRecorders"));
        actionMessagePrinters = new QAction(MainWindow);
        actionMessagePrinters->setObjectName(QStringLiteral("actionMessagePrinters"));
        actionDebugNow = new QAction(MainWindow);
        actionDebugNow->setObjectName(QStringLiteral("actionDebugNow"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 0, 6, 6);
        toolBarArea = new QWidget(centralWidget);
        toolBarArea->setObjectName(QStringLiteral("toolBarArea"));

        verticalLayout->addWidget(toolBarArea);

        topStatusRow = new QHBoxLayout();
        topStatusRow->setSpacing(1);
        topStatusRow->setObjectName(QStringLiteral("topStatusRow"));
        nextEventLabel = new QLabel(centralWidget);
        nextEventLabel->setObjectName(QStringLiteral("nextEventLabel"));
        nextEventLabel->setStyleSheet(QStringLiteral("QLabel { border: 1px solid palette(mid); }"));
        nextEventLabel->setMargin(1);

        topStatusRow->addWidget(nextEventLabel);

        nextModuleLabel = new QLabel(centralWidget);
        nextModuleLabel->setObjectName(QStringLiteral("nextModuleLabel"));
        nextModuleLabel->setStyleSheet(QStringLiteral("QLabel { border: 1px solid palette(mid); }"));
        nextModuleLabel->setMargin(1);

        topStatusRow->addWidget(nextModuleLabel);

        nextTimeLabel = new QLabel(centralWidget);
        nextTimeLabel->setObjectName(QStringLiteral("nextTimeLabel"));
        nextTimeLabel->setStyleSheet(QStringLiteral("QLabel { border: 1px solid palette(mid); }"));
        nextTimeLabel->setMargin(1);

        topStatusRow->addWidget(nextTimeLabel);


        verticalLayout->addLayout(topStatusRow);

        mainSplitter = new QSplitter(centralWidget);
        mainSplitter->setObjectName(QStringLiteral("mainSplitter"));
        mainSplitter->setOrientation(Qt::Vertical);
        timeLine = new QWidget(mainSplitter);
        timeLine->setObjectName(QStringLiteral("timeLine"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(timeLine->sizePolicy().hasHeightForWidth());
        timeLine->setSizePolicy(sizePolicy1);
        mainSplitter->addWidget(timeLine);
        splitter_3 = new QSplitter(mainSplitter);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        sizePolicy.setHeightForWidth(splitter_3->sizePolicy().hasHeightForWidth());
        splitter_3->setSizePolicy(sizePolicy);
        splitter_3->setMinimumSize(QSize(100, 100));
        splitter_3->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName(QStringLiteral("splitter"));
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setMinimumSize(QSize(100, 100));
        splitter->setOrientation(Qt::Vertical);
        treeView = new QWidget(splitter);
        treeView->setObjectName(QStringLiteral("treeView"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy2);
        treeView->setMinimumSize(QSize(100, 100));
        treeView->setContextMenuPolicy(Qt::CustomContextMenu);
        splitter->addWidget(treeView);
        objectInspector = new QWidget(splitter);
        objectInspector->setObjectName(QStringLiteral("objectInspector"));
        sizePolicy2.setHeightForWidth(objectInspector->sizePolicy().hasHeightForWidth());
        objectInspector->setSizePolicy(sizePolicy2);
        objectInspector->setMinimumSize(QSize(100, 100));
        splitter->addWidget(objectInspector);
        splitter_3->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        sizePolicy.setHeightForWidth(splitter_2->sizePolicy().hasHeightForWidth());
        splitter_2->setSizePolicy(sizePolicy);
        splitter_2->setMinimumSize(QSize(100, 100));
        splitter_2->setOrientation(Qt::Vertical);
        mainArea = new QWidget(splitter_2);
        mainArea->setObjectName(QStringLiteral("mainArea"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mainArea->sizePolicy().hasHeightForWidth());
        mainArea->setSizePolicy(sizePolicy3);
        mainArea->setMinimumSize(QSize(100, 100));
        splitter_2->addWidget(mainArea);
        logInspector = new QWidget(splitter_2);
        logInspector->setObjectName(QStringLiteral("logInspector"));
        sizePolicy2.setHeightForWidth(logInspector->sizePolicy().hasHeightForWidth());
        logInspector->setSizePolicy(sizePolicy2);
        logInspector->setMinimumSize(QSize(100, 100));
        splitter_2->addWidget(logInspector);
        splitter_3->addWidget(splitter_2);
        mainSplitter->addWidget(splitter_3);

        verticalLayout->addWidget(mainSplitter);

        statusBar = new QHBoxLayout();
        statusBar->setSpacing(1);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        labelConfigName = new QLabel(centralWidget);
        labelConfigName->setObjectName(QStringLiteral("labelConfigName"));
        labelConfigName->setStyleSheet(QStringLiteral("QLabel { border: 1px solid palette(mid); }"));
        labelConfigName->setMargin(1);

        statusBar->addWidget(labelConfigName);

        labelMessageStats = new QLabel(centralWidget);
        labelMessageStats->setObjectName(QStringLiteral("labelMessageStats"));
        labelMessageStats->setStyleSheet(QStringLiteral("QLabel { border: 1px solid palette(mid); }"));
        labelMessageStats->setMargin(1);

        statusBar->addWidget(labelMessageStats);


        verticalLayout->addLayout(statusBar);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 939, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuSimulate = new QMenu(menuBar);
        menuSimulate->setObjectName(QStringLiteral("menuSimulate"));
        menuInspect = new QMenu(menuBar);
        menuInspect->setObjectName(QStringLiteral("menuInspect"));
        menuAvailable_Components = new QMenu(menuInspect);
        menuAvailable_Components->setObjectName(QStringLiteral("menuAvailable_Components"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setContextMenuPolicy(Qt::NoContextMenu);
        mainToolBar->setLayoutDirection(Qt::LeftToRight);
        mainToolBar->setMovable(false);
        mainToolBar->setAllowedAreas(Qt::TopToolBarArea);
        mainToolBar->setIconSize(QSize(30, 19));
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSimulate->menuAction());
        menuBar->addAction(menuInspect->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSetUpConfiguration);
        menuFile->addSeparator();
        menuFile->addAction(actionLoadNedFile);
        menuFile->addAction(actionSetUpUnconfiguredNetwork);
        menuFile->addSeparator();
        menuFile->addAction(actionOpenPrimaryIniFile);
        menuFile->addSeparator();
        menuFile->addAction(actionCreate_Snapshot);
        menuFile->addSeparator();
        menuFile->addAction(actionPreferences);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuSimulate->addAction(actionOneStep);
        menuSimulate->addSeparator();
        menuSimulate->addAction(actionRun);
        menuSimulate->addAction(actionFastRun);
        menuSimulate->addAction(actionExpressRun);
        menuSimulate->addAction(actionRunUntil);
        menuSimulate->addSeparator();
        menuSimulate->addAction(actionDebugNow);
        menuSimulate->addAction(actionDebugNextEvent);
        menuSimulate->addAction(actionDebugOnErrors);
        menuSimulate->addSeparator();
        menuSimulate->addAction(actionStop);
        menuSimulate->addSeparator();
        menuSimulate->addAction(actionEventlogRecording);
        menuSimulate->addAction(actionRecordVideo);
        menuSimulate->addSeparator();
        menuSimulate->addAction(actionConcludeSimulation);
        menuSimulate->addAction(actionRebuildNetwork);
        menuInspect->addAction(actionNetwork);
        menuInspect->addAction(actionScheduledEvents);
        menuInspect->addAction(actionSimulation);
        menuInspect->addSeparator();
        menuInspect->addAction(menuAvailable_Components->menuAction());
        menuInspect->addSeparator();
        menuInspect->addAction(actionFindInspectObjects);
        menuInspect->addAction(actionInspectByPointer);
        menuAvailable_Components->addAction(actionNedComponentTypes);
        menuAvailable_Components->addAction(actionRegisteredClasses);
        menuAvailable_Components->addAction(actionClassDescriptors);
        menuAvailable_Components->addAction(actionNED_Functions);
        menuAvailable_Components->addAction(actionRegistered_Enums);
        menuAvailable_Components->addAction(actionSupportedConfigurationOption);
        menuAvailable_Components->addAction(actionResultFilters);
        menuAvailable_Components->addAction(actionResultRecorders);
        menuAvailable_Components->addAction(actionMessagePrinters);
        menuView->addAction(actionStatusDetails);
        menuView->addAction(actionTimeline);
        menuView->addAction(actionShowAnimationParams);
        menuView->addSeparator();
        menuView->addAction(actionFlipWindowLayout);
        menuView->addSeparator();
        menuHelp->addAction(actionAbout_OMNeT_Qtenv);
        mainToolBar->addAction(actionSetUpConfiguration);
        mainToolBar->addAction(actionLoadNedFile);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionOneStep);
        mainToolBar->addAction(actionRun);
        mainToolBar->addAction(actionFastRun);
        mainToolBar->addAction(actionExpressRun);
        mainToolBar->addAction(actionRunUntil);
        mainToolBar->addAction(actionStop);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionConcludeSimulation);
        mainToolBar->addAction(actionRebuildNetwork);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionEventlogRecording);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFindInspectObjects);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionVerticalLayout);
        mainToolBar->addAction(actionHorizontalLayout);
        mainToolBar->addAction(actionTimeline);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPreferences);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRecordVideo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "OMNeT++ Qtenv", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "E&xit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionOneStep->setText(QApplication::translate("MainWindow", "One &Step", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOneStep->setToolTip(QApplication::translate("MainWindow", "Execute one event (F4)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOneStep->setShortcut(QApplication::translate("MainWindow", "F4", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRun->setText(QApplication::translate("MainWindow", "&Run", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRun->setToolTip(QApplication::translate("MainWindow", "Run with full animation (F5)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionRun->setShortcut(QApplication::translate("MainWindow", "F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSetUpConfiguration->setText(QApplication::translate("MainWindow", "&Set Up a Configuration...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSetUpConfiguration->setToolTip(QApplication::translate("MainWindow", "Set up an inifile configuration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionStop->setText(QApplication::translate("MainWindow", "S&top Execution", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionStop->setToolTip(QApplication::translate("MainWindow", "Stop running simulation (F8)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionStop->setShortcut(QApplication::translate("MainWindow", "F8", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionFastRun->setText(QApplication::translate("MainWindow", "&Fast Run (rare display updates)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionFastRun->setToolTip(QApplication::translate("MainWindow", "Run faster: no animation and rare inspector updates (F6)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionFastRun->setShortcut(QApplication::translate("MainWindow", "F6", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionExpressRun->setText(QApplication::translate("MainWindow", "E&xpress Run (tracing off)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionExpressRun->setToolTip(QApplication::translate("MainWindow", "Run at full speed: no text output, animation or inspector updates (F7)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionExpressRun->setShortcut(QApplication::translate("MainWindow", "F7", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRunUntil->setText(QApplication::translate("MainWindow", "Run &Until...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRunUntil->setToolTip(QApplication::translate("MainWindow", "Run until time or event number (Ctrl+F5)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionRunUntil->setShortcut(QApplication::translate("MainWindow", "Ctrl+F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionLoadNedFile->setText(QApplication::translate("MainWindow", "&Load NED File...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionLoadNedFile->setToolTip(QApplication::translate("MainWindow", "Load NED file for compound module definitions", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionConcludeSimulation->setText(QApplication::translate("MainWindow", "&Conclude Simulation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionConcludeSimulation->setToolTip(QApplication::translate("MainWindow", "Conclude simulation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionEventlogRecording->setText(QApplication::translate("MainWindow", "&Eventlog Recording", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionEventlogRecording->setToolTip(QApplication::translate("MainWindow", "Eventlog recording on/off (Ctrl+G)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionEventlogRecording->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionFindInspectObjects->setText(QApplication::translate("MainWindow", "&Find/Inspect Objects...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionFindInspectObjects->setToolTip(QApplication::translate("MainWindow", "Find and inspect modules, messages, queues and other objects (Ctrl+S)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionFindInspectObjects->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionVerticalLayout->setText(QApplication::translate("MainWindow", "Vertical Main Window Layout", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionVerticalLayout->setToolTip(QApplication::translate("MainWindow", "Vertical main window layout", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionHorizontalLayout->setText(QApplication::translate("MainWindow", "Horizontal Main Window Layout", Q_NULLPTR));
        actionTimeline->setText(QApplication::translate("MainWindow", "&Timeline", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTimeline->setToolTip(QApplication::translate("MainWindow", "Show/hide timeline (Ctrl+T)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionTimeline->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPreferences->setText(QApplication::translate("MainWindow", "&Preferences...", Q_NULLPTR));
        actionSetUpUnconfiguredNetwork->setText(QApplication::translate("MainWindow", "Set Up an &Unconfigured Network...", Q_NULLPTR));
        actionOpenPrimaryIniFile->setText(QApplication::translate("MainWindow", "Open Primary &Ini File", Q_NULLPTR));
        actionCreate_Snapshot->setText(QApplication::translate("MainWindow", "&Create Snapshot...", Q_NULLPTR));
        actionDebugNextEvent->setText(QApplication::translate("MainWindow", "&Debug Next Event", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionDebugNextEvent->setShortcut(QApplication::translate("MainWindow", "Ctrl+F9", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRebuildNetwork->setText(QApplication::translate("MainWindow", "Re&build Network", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRebuildNetwork->setToolTip(QApplication::translate("MainWindow", "Rebuild network", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionRebuildNetwork->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionNetwork->setText(QApplication::translate("MainWindow", "&Network", Q_NULLPTR));
        actionScheduledEvents->setText(QApplication::translate("MainWindow", "Scheduled &Events (FES)", Q_NULLPTR));
        actionSimulation->setText(QApplication::translate("MainWindow", "&Simulation", Q_NULLPTR));
        actionNedComponentTypes->setText(QApplication::translate("MainWindow", "NED Component &Types", Q_NULLPTR));
        actionRegisteredClasses->setText(QApplication::translate("MainWindow", "Registered &Classes", Q_NULLPTR));
        actionNED_Functions->setText(QApplication::translate("MainWindow", "NED &Functions", Q_NULLPTR));
        actionRegistered_Enums->setText(QApplication::translate("MainWindow", "Registered &Enums", Q_NULLPTR));
        actionSupportedConfigurationOption->setText(QApplication::translate("MainWindow", "Supported Configuration &Options", Q_NULLPTR));
        actionInspectByPointer->setText(QApplication::translate("MainWindow", "Inspect by &Pointer...", Q_NULLPTR));
        actionStatusDetails->setText(QApplication::translate("MainWindow", "&Status Details", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionStatusDetails->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionFlipWindowLayout->setText(QApplication::translate("MainWindow", "&Flip Window Layout", Q_NULLPTR));
        actionAbout_OMNeT_Qtenv->setText(QApplication::translate("MainWindow", "&About OMNeT++/Qtenv", Q_NULLPTR));
        actionRecordVideo->setText(QApplication::translate("MainWindow", "&Video Recording", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRecordVideo->setToolTip(QApplication::translate("MainWindow", "Record Video (Ctrl+M)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionRecordVideo->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowAnimationParams->setText(QApplication::translate("MainWindow", "Animation Parameters", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowAnimationParams->setToolTip(QApplication::translate("MainWindow", "Show Animation Parameters (Ctrl+N)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionShowAnimationParams->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDebugOnErrors->setText(QApplication::translate("MainWindow", "Debug On Errors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDebugOnErrors->setToolTip(QApplication::translate("MainWindow", "Break into the debugger upon runtime errors", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionClassDescriptors->setText(QApplication::translate("MainWindow", "Class &Descriptors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionClassDescriptors->setToolTip(QApplication::translate("MainWindow", "Class Descriptors", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionResultFilters->setText(QApplication::translate("MainWindow", "Result Fi&lters", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionResultFilters->setToolTip(QApplication::translate("MainWindow", "Result Filters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionResultRecorders->setText(QApplication::translate("MainWindow", "Result &Recorders", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionResultRecorders->setToolTip(QApplication::translate("MainWindow", "Result Recorders", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionMessagePrinters->setText(QApplication::translate("MainWindow", "Message &Printers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMessagePrinters->setToolTip(QApplication::translate("MainWindow", "Message Printers", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionDebugNow->setText(QApplication::translate("MainWindow", "Debug Now", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        toolBarArea->setWhatsThis(QApplication::translate("MainWindow", "The mainToolBar will be moved into this widget at runtime, along with a layout containing the animation speed slider and the event labels.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        nextEventLabel->setText(QApplication::translate("MainWindow", "Next: n/a", Q_NULLPTR));
        nextModuleLabel->setText(QApplication::translate("MainWindow", "In: n/a", Q_NULLPTR));
        nextTimeLabel->setText(QApplication::translate("MainWindow", "At: n/a", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelConfigName->setToolTip(QApplication::translate("MainWindow", "Current inifile configuration, run number, network name, and potential scheduler information", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelConfigName->setText(QApplication::translate("MainWindow", "(No network set up)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelMessageStats->setToolTip(QApplication::translate("MainWindow", "Number of events (messages) currently scheduled /\n"
"Number of existing message objects, including scheduled ones /\n"
"Total number of messages created since start of the simulation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelMessageStats->setText(QApplication::translate("MainWindow", "Msg stats: 0 scheduled / 0 existing / 0 created", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
        menuSimulate->setTitle(QApplication::translate("MainWindow", "&Simulate", Q_NULLPTR));
        menuInspect->setTitle(QApplication::translate("MainWindow", "&Inspect", Q_NULLPTR));
        menuAvailable_Components->setTitle(QApplication::translate("MainWindow", "Available &Components", Q_NULLPTR));
        menuView->setTitle(QApplication::translate("MainWindow", "&View", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", Q_NULLPTR));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "Qtenv toolbar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
