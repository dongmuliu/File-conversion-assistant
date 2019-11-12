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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
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
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_12;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *backButton;
    QPushButton *nextButton;
    QLineEdit *totalframelineEdit;
    QLineEdit *currentlineEdit;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *uplineEdit;
    QLabel *label_5;
    QLineEdit *downlineEdit;
    QLabel *label_9;
    QLineEdit *leftlineEdit;
    QLabel *label_6;
    QLineEdit *rightlineEdit;
    QGridLayout *gridLayout_2;
    QPushButton *confirmButton;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_6;
    QLabel *label_12;
    QLineEdit *xlineEdit;
    QLabel *label_15;
    QLineEdit *ylineEdit;
    QLabel *label_16;
    QLineEdit *depthlineEdit;
    QLabel *label;
    QLineEdit *DislineEdit;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_8;
    QLabel *label_7;
    QLineEdit *maxdepthLineEdit;
    QLabel *label_11;
    QLineEdit *mindepthLineEdit;
    QPushButton *setColorButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *graylabel;
    QLabel *colorlabel;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FileConversionClass)
    {
        if (FileConversionClass->objectName().isEmpty())
            FileConversionClass->setObjectName(QStringLiteral("FileConversionClass"));
        FileConversionClass->resize(533, 642);
        QIcon icon;
        icon.addFile(QStringLiteral(":/FileConversion/Resources/exe.ico"), QSize(), QIcon::Normal, QIcon::Off);
        FileConversionClass->setWindowIcon(icon);
        opentoolAction = new QAction(FileConversionClass);
        opentoolAction->setObjectName(QStringLiteral("opentoolAction"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/FileConversion/open.ico"), QSize(), QIcon::Normal, QIcon::Off);
        opentoolAction->setIcon(icon1);
        savetoolAction = new QAction(FileConversionClass);
        savetoolAction->setObjectName(QStringLiteral("savetoolAction"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/FileConversion/Resources/save.ico"), QSize(), QIcon::Normal, QIcon::Off);
        savetoolAction->setIcon(icon2);
        savealltoolAction = new QAction(FileConversionClass);
        savealltoolAction->setObjectName(QStringLiteral("savealltoolAction"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/FileConversion/Resources/saveall.ico"), QSize(), QIcon::Normal, QIcon::Off);
        savealltoolAction->setIcon(icon3);
        abouttoolAction = new QAction(FileConversionClass);
        abouttoolAction->setObjectName(QStringLiteral("abouttoolAction"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/FileConversion/Resources/help.ico"), QSize(), QIcon::Normal, QIcon::Off);
        abouttoolAction->setIcon(icon4);
        openAction = new QAction(FileConversionClass);
        openAction->setObjectName(QStringLiteral("openAction"));
        openAction->setIcon(icon1);
        saveAction = new QAction(FileConversionClass);
        saveAction->setObjectName(QStringLiteral("saveAction"));
        saveAction->setIcon(icon2);
        saveallAction = new QAction(FileConversionClass);
        saveallAction->setObjectName(QStringLiteral("saveallAction"));
        saveallAction->setIcon(icon3);
        aboutAction = new QAction(FileConversionClass);
        aboutAction->setObjectName(QStringLiteral("aboutAction"));
        aboutAction->setIcon(icon4);
        centralWidget = new QWidget(FileConversionClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_13 = new QGridLayout(centralWidget);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 2, 0, 1, 1);

        backButton = new QPushButton(groupBox_2);
        backButton->setObjectName(QStringLiteral("backButton"));

        gridLayout_3->addWidget(backButton, 4, 0, 1, 1);

        nextButton = new QPushButton(groupBox_2);
        nextButton->setObjectName(QStringLiteral("nextButton"));

        gridLayout_3->addWidget(nextButton, 4, 1, 1, 1);

        totalframelineEdit = new QLineEdit(groupBox_2);
        totalframelineEdit->setObjectName(QStringLiteral("totalframelineEdit"));
        totalframelineEdit->setReadOnly(true);

        gridLayout_3->addWidget(totalframelineEdit, 0, 1, 1, 1);

        currentlineEdit = new QLineEdit(groupBox_2);
        currentlineEdit->setObjectName(QStringLiteral("currentlineEdit"));
        currentlineEdit->setReadOnly(true);

        gridLayout_3->addWidget(currentlineEdit, 2, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        uplineEdit = new QLineEdit(groupBox_3);
        uplineEdit->setObjectName(QStringLiteral("uplineEdit"));

        gridLayout->addWidget(uplineEdit, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        downlineEdit = new QLineEdit(groupBox_3);
        downlineEdit->setObjectName(QStringLiteral("downlineEdit"));

        gridLayout->addWidget(downlineEdit, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        leftlineEdit = new QLineEdit(groupBox_3);
        leftlineEdit->setObjectName(QStringLiteral("leftlineEdit"));

        gridLayout->addWidget(leftlineEdit, 2, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        rightlineEdit = new QLineEdit(groupBox_3);
        rightlineEdit->setObjectName(QStringLiteral("rightlineEdit"));

        gridLayout->addWidget(rightlineEdit, 3, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        confirmButton = new QPushButton(groupBox_3);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));

        gridLayout_2->addWidget(confirmButton, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);


        gridLayout_5->addLayout(verticalLayout_4, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_3);


        verticalLayout_5->addLayout(verticalLayout_2);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_10 = new QGridLayout(groupBox_4);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_6->addWidget(label_12, 0, 0, 1, 1);

        xlineEdit = new QLineEdit(groupBox_4);
        xlineEdit->setObjectName(QStringLiteral("xlineEdit"));
        xlineEdit->setReadOnly(true);

        gridLayout_6->addWidget(xlineEdit, 0, 1, 1, 1);

        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_6->addWidget(label_15, 1, 0, 1, 1);

        ylineEdit = new QLineEdit(groupBox_4);
        ylineEdit->setObjectName(QStringLiteral("ylineEdit"));
        ylineEdit->setReadOnly(true);

        gridLayout_6->addWidget(ylineEdit, 1, 1, 1, 1);

        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_6->addWidget(label_16, 2, 0, 1, 1);

        depthlineEdit = new QLineEdit(groupBox_4);
        depthlineEdit->setObjectName(QStringLiteral("depthlineEdit"));
        depthlineEdit->setReadOnly(true);

        gridLayout_6->addWidget(depthlineEdit, 2, 1, 1, 1);

        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_6->addWidget(label, 3, 0, 1, 1);

        DislineEdit = new QLineEdit(groupBox_4);
        DislineEdit->setObjectName(QStringLiteral("DislineEdit"));
        DislineEdit->setReadOnly(true);

        gridLayout_6->addWidget(DislineEdit, 3, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_6, 0, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_11 = new QGridLayout(groupBox_5);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_8->addWidget(label_7, 0, 0, 1, 1);

        maxdepthLineEdit = new QLineEdit(groupBox_5);
        maxdepthLineEdit->setObjectName(QStringLiteral("maxdepthLineEdit"));

        gridLayout_8->addWidget(maxdepthLineEdit, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_8->addWidget(label_11, 1, 0, 1, 1);

        mindepthLineEdit = new QLineEdit(groupBox_5);
        mindepthLineEdit->setObjectName(QStringLiteral("mindepthLineEdit"));

        gridLayout_8->addWidget(mindepthLineEdit, 1, 1, 1, 1);

        setColorButton = new QPushButton(groupBox_5);
        setColorButton->setObjectName(QStringLiteral("setColorButton"));

        gridLayout_8->addWidget(setColorButton, 2, 0, 1, 2);


        gridLayout_11->addLayout(gridLayout_8, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer, 1, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_5);


        gridLayout_12->addLayout(verticalLayout_5, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graylabel = new QLabel(centralWidget);
        graylabel->setObjectName(QStringLiteral("graylabel"));
        graylabel->setMinimumSize(QSize(320, 240));
        graylabel->setMaximumSize(QSize(10000, 240));
        graylabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(graylabel);

        colorlabel = new QLabel(centralWidget);
        colorlabel->setObjectName(QStringLiteral("colorlabel"));
        colorlabel->setMinimumSize(QSize(320, 240));
        colorlabel->setMaximumSize(QSize(10000, 10000));
        colorlabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(colorlabel);


        gridLayout_12->addLayout(verticalLayout, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 0, 0, 1, 1);

        FileConversionClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FileConversionClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 533, 23));
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
        QObject::connect(backButton, SIGNAL(clicked()), FileConversionClass, SLOT(TurnLeftSlot()));
        QObject::connect(nextButton, SIGNAL(clicked()), FileConversionClass, SLOT(TurnRightSlot()));
        QObject::connect(confirmButton, SIGNAL(clicked()), FileConversionClass, SLOT(ConfirmSlot()));

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
        groupBox_2->setTitle(QApplication::translate("FileConversionClass", "Frame", 0));
        label_13->setText(QApplication::translate("FileConversionClass", "TotalFrame:", 0));
        label_14->setText(QApplication::translate("FileConversionClass", "CurrentFrame:", 0));
        backButton->setText(QApplication::translate("FileConversionClass", "Back", 0));
        nextButton->setText(QApplication::translate("FileConversionClass", "Next", 0));
        totalframelineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        currentlineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        groupBox_3->setTitle(QApplication::translate("FileConversionClass", "Parametres", 0));
        label_3->setText(QApplication::translate("FileConversionClass", "Up:", 0));
        uplineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        label_5->setText(QApplication::translate("FileConversionClass", "Down:", 0));
        downlineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        label_9->setText(QApplication::translate("FileConversionClass", "Left:", 0));
        leftlineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        label_6->setText(QApplication::translate("FileConversionClass", "Right:", 0));
        rightlineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        confirmButton->setText(QApplication::translate("FileConversionClass", "Confirm", 0));
        groupBox_4->setTitle(QApplication::translate("FileConversionClass", "Information", 0));
        label_12->setText(QApplication::translate("FileConversionClass", "X:", 0));
        xlineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        label_15->setText(QApplication::translate("FileConversionClass", "Y:", 0));
        ylineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        label_16->setText(QApplication::translate("FileConversionClass", "Depth:", 0));
        depthlineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        label->setText(QApplication::translate("FileConversionClass", "Distance:", 0));
        DislineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        groupBox_5->setTitle(QApplication::translate("FileConversionClass", "Distance", 0));
        label_7->setText(QApplication::translate("FileConversionClass", "MaxDepth:", 0));
        maxdepthLineEdit->setText(QApplication::translate("FileConversionClass", "30000", 0));
        label_11->setText(QApplication::translate("FileConversionClass", "Mindepth:", 0));
        mindepthLineEdit->setText(QApplication::translate("FileConversionClass", "0", 0));
        setColorButton->setText(QApplication::translate("FileConversionClass", "Setdepth", 0));
        graylabel->setText(QString());
        colorlabel->setText(QString());
        menuFile->setTitle(QApplication::translate("FileConversionClass", "File", 0));
        menuHelp->setTitle(QApplication::translate("FileConversionClass", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class FileConversionClass: public Ui_FileConversionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECONVERSION_H
