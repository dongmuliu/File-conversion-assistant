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
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *graylabel;
    QLabel *colorlabel;
    QHBoxLayout *horizontalLayout_10;
    QLabel *graytextlabel;
    QLabel *colortextlabel;
    QSpacerItem *verticalSpacer_4;
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
    QSpacerItem *verticalSpacer_2;
    QDockWidget *dockWidget_5;
    QWidget *dockWidgetContents_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QLineEdit *maxdepthlineEdit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *mindepthlineEdit;
    QPushButton *setcolorButton;
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
    QSpacerItem *verticalSpacer_3;

    void setupUi(QMainWindow *FileConversionClass)
    {
        if (FileConversionClass->objectName().isEmpty())
            FileConversionClass->setObjectName(QStringLiteral("FileConversionClass"));
        FileConversionClass->resize(884, 610);
        opentoolAction = new QAction(FileConversionClass);
        opentoolAction->setObjectName(QStringLiteral("opentoolAction"));
        QIcon icon;
        icon.addFile(QStringLiteral("../icon/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        opentoolAction->setIcon(icon);
        savetoolAction = new QAction(FileConversionClass);
        savetoolAction->setObjectName(QStringLiteral("savetoolAction"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        savetoolAction->setIcon(icon1);
        savealltoolAction = new QAction(FileConversionClass);
        savealltoolAction->setObjectName(QStringLiteral("savealltoolAction"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../icon/saveall.png"), QSize(), QIcon::Normal, QIcon::Off);
        savealltoolAction->setIcon(icon2);
        abouttoolAction = new QAction(FileConversionClass);
        abouttoolAction->setObjectName(QStringLiteral("abouttoolAction"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../icon/help.png"), QSize(), QIcon::Normal, QIcon::Off);
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
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        graylabel = new QLabel(centralWidget);
        graylabel->setObjectName(QStringLiteral("graylabel"));
        graylabel->setMinimumSize(QSize(320, 240));
        graylabel->setMaximumSize(QSize(320, 240));
        graylabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(graylabel);

        colorlabel = new QLabel(centralWidget);
        colorlabel->setObjectName(QStringLiteral("colorlabel"));
        colorlabel->setMinimumSize(QSize(320, 240));
        colorlabel->setMaximumSize(QSize(320, 240));
        colorlabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(colorlabel);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        graytextlabel = new QLabel(centralWidget);
        graytextlabel->setObjectName(QStringLiteral("graytextlabel"));
        graytextlabel->setMaximumSize(QSize(400, 50));
        graytextlabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(graytextlabel);

        colortextlabel = new QLabel(centralWidget);
        colortextlabel->setObjectName(QStringLiteral("colortextlabel"));
        colortextlabel->setMaximumSize(QSize(400, 50));
        colortextlabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(colortextlabel);


        verticalLayout->addLayout(horizontalLayout_10);


        verticalLayout_6->addLayout(verticalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        FileConversionClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FileConversionClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 884, 23));
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

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        dockWidget_4->setWidget(dockWidgetContents_4);
        FileConversionClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_4);
        dockWidget_5 = new QDockWidget(FileConversionClass);
        dockWidget_5->setObjectName(QStringLiteral("dockWidget_5"));
        dockWidget_5->setMinimumSize(QSize(200, 133));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QStringLiteral("dockWidgetContents_5"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents_5);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_4 = new QLabel(dockWidgetContents_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_8->addWidget(label_4);

        maxdepthlineEdit = new QLineEdit(dockWidgetContents_5);
        maxdepthlineEdit->setObjectName(QStringLiteral("maxdepthlineEdit"));

        horizontalLayout_8->addWidget(maxdepthlineEdit);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_10 = new QLabel(dockWidgetContents_5);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_9->addWidget(label_10);

        mindepthlineEdit = new QLineEdit(dockWidgetContents_5);
        mindepthlineEdit->setObjectName(QStringLiteral("mindepthlineEdit"));

        horizontalLayout_9->addWidget(mindepthlineEdit);


        verticalLayout_4->addLayout(horizontalLayout_9);

        setcolorButton = new QPushButton(dockWidgetContents_5);
        setcolorButton->setObjectName(QStringLiteral("setcolorButton"));

        verticalLayout_4->addWidget(setcolorButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_4);

        dockWidget_5->setWidget(dockWidgetContents_5);
        FileConversionClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_5);
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

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        dockWidget_6->setWidget(dockWidgetContents_6);
        FileConversionClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_6);

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
        QObject::connect(setcolorButton, SIGNAL(clicked()), FileConversionClass, SLOT(SetColorSlot()));
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
        graytextlabel->setText(QString());
        colortextlabel->setText(QString());
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
        dockWidget_5->setWindowTitle(QApplication::translate("FileConversionClass", "Color", 0));
        label_4->setText(QApplication::translate("FileConversionClass", "MaxDepth:", 0));
        maxdepthlineEdit->setText(QApplication::translate("FileConversionClass", "30000", 0));
        label_10->setText(QApplication::translate("FileConversionClass", "Mindepth:", 0));
        mindepthlineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        setcolorButton->setText(QApplication::translate("FileConversionClass", "Setdepth", 0));
        dockWidget_6->setWindowTitle(QApplication::translate("FileConversionClass", "Frame", 0));
        label_13->setText(QApplication::translate("FileConversionClass", "TotalFrame:", 0));
        totalframelineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        label_14->setText(QApplication::translate("FileConversionClass", "CurrentFrame:", 0));
        currentlineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        backButton->setText(QApplication::translate("FileConversionClass", "Back", 0));
        nextButton->setText(QApplication::translate("FileConversionClass", "Next", 0));
    } // retranslateUi

};

namespace Ui {
    class FileConversionClass: public Ui_FileConversionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECONVERSION_H
