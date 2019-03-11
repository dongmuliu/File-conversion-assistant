/********************************************************************************
** Form generated from reading UI file 'fileconversion.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILECONVERSION_H
#define UI_FILECONVERSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileConversionClass
{
public:
    QAction *opentoolAction;
    QAction *savetoolAction;
    QAction *savealltoolAction;
    QAction *abouttoolAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *saveallAction;
    QAction *aboutAction;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *graylabel;
    QLabel *colorlabel;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget_4;
    QWidget *dockWidgetContents_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *uplineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *downlineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *leftlineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *rightlineEdit;
    QPushButton *confirmButton;
    QSpacerItem *verticalSpacer;
    QDockWidget *dockWidget_6;
    QWidget *dockWidgetContents_6;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *totalframelineEdit;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_14;
    QLineEdit *currentlineEdit;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *backButton;
    QPushButton *nextButton;
    QSpacerItem *verticalSpacer_2;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_10;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *xlineEdit;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *ylineEdit;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *depthlineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *DislineEdit;
    QSpacerItem *verticalSpacer_3;
    QDockWidget *dockWidget_7;
    QWidget *dockWidgetContents_9;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_7;
    QLineEdit *maxdepthLineEdit;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_11;
    QLineEdit *mindepthLineEdit;
    QPushButton *setColorButton;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QMainWindow *FileConversionClass)
    {
        if (FileConversionClass->objectName().isEmpty())
            FileConversionClass->setObjectName(QStringLiteral("FileConversionClass"));
        FileConversionClass->resize(963, 581);
        opentoolAction = new QAction(FileConversionClass);
        opentoolAction->setObjectName(QStringLiteral("opentoolAction"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/FileConversion/open.ico"), QSize(), QIcon::Normal, QIcon::Off);
        opentoolAction->setIcon(icon);
        savetoolAction = new QAction(FileConversionClass);
        savetoolAction->setObjectName(QStringLiteral("savetoolAction"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/FileConversion/Resources/save.ico"), QSize(), QIcon::Normal, QIcon::Off);
        savetoolAction->setIcon(icon1);
        savealltoolAction = new QAction(FileConversionClass);
        savealltoolAction->setObjectName(QStringLiteral("savealltoolAction"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/FileConversion/Resources/saveall.ico"), QSize(), QIcon::Normal, QIcon::Off);
        savealltoolAction->setIcon(icon2);
        abouttoolAction = new QAction(FileConversionClass);
        abouttoolAction->setObjectName(QStringLiteral("abouttoolAction"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/FileConversion/Resources/help.ico"), QSize(), QIcon::Normal, QIcon::Off);
        abouttoolAction->setIcon(icon3);
        openAction = new QAction(FileConversionClass);
        openAction->setObjectName(QStringLiteral("openAction"));
        openAction->setIcon(icon);
        saveAction = new QAction(FileConversionClass);
        saveAction->setObjectName(QStringLiteral("saveAction"));
        saveAction->setIcon(icon1);
        saveallAction = new QAction(FileConversionClass);
        saveallAction->setObjectName(QStringLiteral("saveallAction"));
        saveallAction->setIcon(icon2);
        aboutAction = new QAction(FileConversionClass);
        aboutAction->setObjectName(QStringLiteral("aboutAction"));
        aboutAction->setIcon(icon3);
        centralWidget = new QWidget(FileConversionClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 0, 328, 488));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        graylabel = new QLabel(layoutWidget);
        graylabel->setObjectName(QStringLiteral("graylabel"));
        graylabel->setMinimumSize(QSize(320, 240));
        graylabel->setMaximumSize(QSize(320, 240));
        graylabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, graylabel);

        colorlabel = new QLabel(layoutWidget);
        colorlabel->setObjectName(QStringLiteral("colorlabel"));
        colorlabel->setMinimumSize(QSize(320, 240));
        colorlabel->setMaximumSize(QSize(320, 240));
        colorlabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, colorlabel);

        FileConversionClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FileConversionClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 963, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        FileConversionClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FileConversionClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FileConversionClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FileConversionClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FileConversionClass->setStatusBar(statusBar);
        dockWidget_4 = new QDockWidget(FileConversionClass);
        dockWidget_4->setObjectName(QStringLiteral("dockWidget_4"));
        dockWidget_4->setMinimumSize(QSize(200, 190));
        dockWidget_4->setMaximumSize(QSize(200, 524287));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents_4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(dockWidgetContents_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        uplineEdit = new QLineEdit(dockWidgetContents_4);
        uplineEdit->setObjectName(QStringLiteral("uplineEdit"));

        horizontalLayout_3->addWidget(uplineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(dockWidgetContents_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        downlineEdit = new QLineEdit(dockWidgetContents_4);
        downlineEdit->setObjectName(QStringLiteral("downlineEdit"));

        horizontalLayout_5->addWidget(downlineEdit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_9 = new QLabel(dockWidgetContents_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_6->addWidget(label_9);

        horizontalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        leftlineEdit = new QLineEdit(dockWidgetContents_4);
        leftlineEdit->setObjectName(QStringLiteral("leftlineEdit"));

        horizontalLayout_6->addWidget(leftlineEdit);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(dockWidgetContents_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);

        horizontalSpacer_4 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        rightlineEdit = new QLineEdit(dockWidgetContents_4);
        rightlineEdit->setObjectName(QStringLiteral("rightlineEdit"));

        horizontalLayout_7->addWidget(rightlineEdit);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_3->addLayout(verticalLayout_2);

        confirmButton = new QPushButton(dockWidgetContents_4);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));

        verticalLayout_3->addWidget(confirmButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_3);

        dockWidget_4->setWidget(dockWidgetContents_4);
        FileConversionClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_4);
        dockWidget_6 = new QDockWidget(FileConversionClass);
        dockWidget_6->setObjectName(QStringLiteral("dockWidget_6"));
        dockWidget_6->setMinimumSize(QSize(200, 147));
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QStringLiteral("dockWidgetContents_6"));
        verticalLayout_7 = new QVBoxLayout(dockWidgetContents_6);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_13 = new QLabel(dockWidgetContents_6);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_11->addWidget(label_13);

        horizontalSpacer_5 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_5);

        totalframelineEdit = new QLineEdit(dockWidgetContents_6);
        totalframelineEdit->setObjectName(QStringLiteral("totalframelineEdit"));
        totalframelineEdit->setReadOnly(true);

        horizontalLayout_11->addWidget(totalframelineEdit);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_14 = new QLabel(dockWidgetContents_6);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_12->addWidget(label_14);

        currentlineEdit = new QLineEdit(dockWidgetContents_6);
        currentlineEdit->setObjectName(QStringLiteral("currentlineEdit"));
        currentlineEdit->setReadOnly(true);

        horizontalLayout_12->addWidget(currentlineEdit);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        backButton = new QPushButton(dockWidgetContents_6);
        backButton->setObjectName(QStringLiteral("backButton"));

        horizontalLayout_13->addWidget(backButton);

        nextButton = new QPushButton(dockWidgetContents_6);
        nextButton->setObjectName(QStringLiteral("nextButton"));

        horizontalLayout_13->addWidget(nextButton);


        verticalLayout_5->addLayout(horizontalLayout_13);


        verticalLayout_7->addLayout(verticalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        dockWidget_6->setWidget(dockWidgetContents_6);
        FileConversionClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_6);
        dockWidget_3 = new QDockWidget(FileConversionClass);
        dockWidget_3->setObjectName(QStringLiteral("dockWidget_3"));
        dockWidget_3->setFloating(false);
        dockWidgetContents_10 = new QWidget();
        dockWidgetContents_10->setObjectName(QStringLiteral("dockWidgetContents_10"));
        verticalLayout_8 = new QVBoxLayout(dockWidgetContents_10);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_12 = new QLabel(dockWidgetContents_10);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_20->addWidget(label_12);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_6);

        xlineEdit = new QLineEdit(dockWidgetContents_10);
        xlineEdit->setObjectName(QStringLiteral("xlineEdit"));
        xlineEdit->setReadOnly(true);

        horizontalLayout_20->addWidget(xlineEdit);


        verticalLayout->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_15 = new QLabel(dockWidgetContents_10);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_21->addWidget(label_15);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_7);

        ylineEdit = new QLineEdit(dockWidgetContents_10);
        ylineEdit->setObjectName(QStringLiteral("ylineEdit"));
        ylineEdit->setReadOnly(true);

        horizontalLayout_21->addWidget(ylineEdit);


        verticalLayout->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_16 = new QLabel(dockWidgetContents_10);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_22->addWidget(label_16);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_8);

        depthlineEdit = new QLineEdit(dockWidgetContents_10);
        depthlineEdit->setObjectName(QStringLiteral("depthlineEdit"));
        depthlineEdit->setReadOnly(true);

        horizontalLayout_22->addWidget(depthlineEdit);


        verticalLayout->addLayout(horizontalLayout_22);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(dockWidgetContents_10);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_9 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        DislineEdit = new QLineEdit(dockWidgetContents_10);
        DislineEdit->setObjectName(QStringLiteral("DislineEdit"));
        DislineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(DislineEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_8->addLayout(verticalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);

        dockWidget_3->setWidget(dockWidgetContents_10);
        FileConversionClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_3);
        dockWidget_7 = new QDockWidget(FileConversionClass);
        dockWidget_7->setObjectName(QStringLiteral("dockWidget_7"));
        dockWidget_7->setMinimumSize(QSize(200, 133));
        dockWidgetContents_9 = new QWidget();
        dockWidgetContents_9->setObjectName(QStringLiteral("dockWidgetContents_9"));
        verticalLayout_4 = new QVBoxLayout(dockWidgetContents_9);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_7 = new QLabel(dockWidgetContents_9);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_15->addWidget(label_7);

        maxdepthLineEdit = new QLineEdit(dockWidgetContents_9);
        maxdepthLineEdit->setObjectName(QStringLiteral("maxdepthLineEdit"));

        horizontalLayout_15->addWidget(maxdepthLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_11 = new QLabel(dockWidgetContents_9);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_16->addWidget(label_11);

        mindepthLineEdit = new QLineEdit(dockWidgetContents_9);
        mindepthLineEdit->setObjectName(QStringLiteral("mindepthLineEdit"));

        horizontalLayout_16->addWidget(mindepthLineEdit);


        verticalLayout_6->addLayout(horizontalLayout_16);

        setColorButton = new QPushButton(dockWidgetContents_9);
        setColorButton->setObjectName(QStringLiteral("setColorButton"));

        verticalLayout_6->addWidget(setColorButton);


        verticalLayout_4->addLayout(verticalLayout_6);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        dockWidget_7->setWidget(dockWidgetContents_9);
        FileConversionClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_7);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(openAction);
        menuFile->addAction(saveAction);
        menuFile->addAction(saveallAction);
        menuHelp->addAction(aboutAction);
        mainToolBar->addAction(opentoolAction);
        mainToolBar->addAction(savetoolAction);
        mainToolBar->addAction(savealltoolAction);
        mainToolBar->addAction(abouttoolAction);

        retranslateUi(FileConversionClass);
        QObject::connect(confirmButton, SIGNAL(clicked()), FileConversionClass, SLOT(ConfirmSlot()));
        QObject::connect(backButton, SIGNAL(clicked()), FileConversionClass, SLOT(TurnLeftSlot()));
        QObject::connect(nextButton, SIGNAL(clicked()), FileConversionClass, SLOT(TurnRightSlot()));

        QMetaObject::connectSlotsByName(FileConversionClass);
    } // setupUi

    void retranslateUi(QMainWindow *FileConversionClass)
    {
        FileConversionClass->setWindowTitle(QApplication::translate("FileConversionClass", "FileConversion", 0));
        opentoolAction->setText(QApplication::translate("FileConversionClass", "Open", 0));
        savetoolAction->setText(QApplication::translate("FileConversionClass", "Save", 0));
        savealltoolAction->setText(QApplication::translate("FileConversionClass", "SaveAll", 0));
        abouttoolAction->setText(QApplication::translate("FileConversionClass", "About", 0));
        openAction->setText(QApplication::translate("FileConversionClass", "Open", 0));
        saveAction->setText(QApplication::translate("FileConversionClass", "Save", 0));
        saveallAction->setText(QApplication::translate("FileConversionClass", "SaveAll", 0));
        aboutAction->setText(QApplication::translate("FileConversionClass", "About", 0));
        graylabel->setText(QString());
        colorlabel->setText(QString());
        menuFile->setTitle(QApplication::translate("FileConversionClass", "File", 0));
        menuHelp->setTitle(QApplication::translate("FileConversionClass", "Help", 0));
        dockWidget_4->setWindowTitle(QApplication::translate("FileConversionClass", "Paraments", 0));
        label_3->setText(QApplication::translate("FileConversionClass", "Up:", 0));
        uplineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        label_5->setText(QApplication::translate("FileConversionClass", "Down:", 0));
        downlineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        label_9->setText(QApplication::translate("FileConversionClass", "Left:", 0));
        leftlineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        label_6->setText(QApplication::translate("FileConversionClass", "Right:", 0));
        rightlineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        confirmButton->setText(QApplication::translate("FileConversionClass", "Confirm", 0));
        dockWidget_6->setWindowTitle(QApplication::translate("FileConversionClass", "Frame", 0));
        label_13->setText(QApplication::translate("FileConversionClass", "TotalFrame:", 0));
        totalframelineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        label_14->setText(QApplication::translate("FileConversionClass", "CurrentFrame:", 0));
        currentlineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        backButton->setText(QApplication::translate("FileConversionClass", "Back", 0));
        nextButton->setText(QApplication::translate("FileConversionClass", "Next", 0));
        dockWidget_3->setWindowTitle(QApplication::translate("FileConversionClass", " Coordinate ", 0));
        label_12->setText(QApplication::translate("FileConversionClass", "X:", 0));
        xlineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        label_15->setText(QApplication::translate("FileConversionClass", "Y:", 0));
        ylineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        label_16->setText(QApplication::translate("FileConversionClass", "Depth:", 0));
        depthlineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        label->setText(QApplication::translate("FileConversionClass", "Distance:", 0));
        DislineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        dockWidget_7->setWindowTitle(QApplication::translate("FileConversionClass", "Color", 0));
        label_7->setText(QApplication::translate("FileConversionClass", "MaxDepth:", 0));
        maxdepthLineEdit->setText(QApplication::translate("FileConversionClass", "30000", 0));
        label_11->setText(QApplication::translate("FileConversionClass", "Mindepth:", 0));
        mindepthLineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        setColorButton->setText(QApplication::translate("FileConversionClass", "Setdepth", 0));
    } // retranslateUi

};

namespace Ui {
    class FileConversionClass: public Ui_FileConversionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECONVERSION_H
