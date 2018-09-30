/********************************************************************************
** Form generated from reading UI file 'TilesetsCodecFactory.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILESETSCODECFACTORY_H
#define UI_TILESETSCODECFACTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TilesetsCodecFactoryClass
{
public:
    QAction *actionClose;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *actionSettings;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *process;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *tilesetFileName;
    QPushButton *browseTilesetBtn;
    QPushButton *loadBtn;
    QGraphicsView *previewPanel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *codecList;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *dimEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *previewBtn;
    QPushButton *convertBtn;
    QWidget *batch;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;

    void setupUi(QMainWindow *TilesetsCodecFactoryClass)
    {
        if (TilesetsCodecFactoryClass->objectName().isEmpty())
            TilesetsCodecFactoryClass->setObjectName(QStringLiteral("TilesetsCodecFactoryClass"));
        TilesetsCodecFactoryClass->resize(462, 325);
        actionClose = new QAction(TilesetsCodecFactoryClass);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionAbout = new QAction(TilesetsCodecFactoryClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(TilesetsCodecFactoryClass);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        actionSettings = new QAction(TilesetsCodecFactoryClass);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        centralWidget = new QWidget(TilesetsCodecFactoryClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        process = new QWidget();
        process->setObjectName(QStringLiteral("process"));
        verticalLayout_2 = new QVBoxLayout(process);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(process);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        tilesetFileName = new QLineEdit(process);
        tilesetFileName->setObjectName(QStringLiteral("tilesetFileName"));

        horizontalLayout->addWidget(tilesetFileName);

        browseTilesetBtn = new QPushButton(process);
        browseTilesetBtn->setObjectName(QStringLiteral("browseTilesetBtn"));

        horizontalLayout->addWidget(browseTilesetBtn);

        loadBtn = new QPushButton(process);
        loadBtn->setObjectName(QStringLiteral("loadBtn"));

        horizontalLayout->addWidget(loadBtn);


        verticalLayout_2->addLayout(horizontalLayout);

        previewPanel = new QGraphicsView(process);
        previewPanel->setObjectName(QStringLiteral("previewPanel"));

        verticalLayout_2->addWidget(previewPanel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(process);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_3->addWidget(label_3);

        codecList = new QComboBox(process);
        codecList->setObjectName(QStringLiteral("codecList"));

        horizontalLayout_3->addWidget(codecList);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(process);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(80, 0));
        label_4->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_4->addWidget(label_4);

        dimEdit = new QLineEdit(process);
        dimEdit->setObjectName(QStringLiteral("dimEdit"));

        horizontalLayout_4->addWidget(dimEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        previewBtn = new QPushButton(process);
        previewBtn->setObjectName(QStringLiteral("previewBtn"));

        horizontalLayout_2->addWidget(previewBtn);

        convertBtn = new QPushButton(process);
        convertBtn->setObjectName(QStringLiteral("convertBtn"));

        horizontalLayout_2->addWidget(convertBtn);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tabWidget->addTab(process, QString());
        batch = new QWidget();
        batch->setObjectName(QStringLiteral("batch"));
        tabWidget->addTab(batch, QString());

        verticalLayout->addWidget(tabWidget);

        TilesetsCodecFactoryClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TilesetsCodecFactoryClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 462, 18));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        TilesetsCodecFactoryClass->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSettings);
        menuFile->addAction(actionClose);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);

        retranslateUi(TilesetsCodecFactoryClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TilesetsCodecFactoryClass);
    } // setupUi

    void retranslateUi(QMainWindow *TilesetsCodecFactoryClass)
    {
        TilesetsCodecFactoryClass->setWindowTitle(QApplication::translate("TilesetsCodecFactoryClass", "TilesetsCodecFactory", nullptr));
        actionClose->setText(QApplication::translate("TilesetsCodecFactoryClass", "Close", nullptr));
        actionAbout->setText(QApplication::translate("TilesetsCodecFactoryClass", "About", nullptr));
        actionAbout_Qt->setText(QApplication::translate("TilesetsCodecFactoryClass", "About Qt", nullptr));
        actionSettings->setText(QApplication::translate("TilesetsCodecFactoryClass", "Settings", nullptr));
        label->setText(QApplication::translate("TilesetsCodecFactoryClass", "Tileset", nullptr));
        browseTilesetBtn->setText(QApplication::translate("TilesetsCodecFactoryClass", "Browse", nullptr));
        loadBtn->setText(QApplication::translate("TilesetsCodecFactoryClass", "Load", nullptr));
        label_3->setText(QApplication::translate("TilesetsCodecFactoryClass", "Codec", nullptr));
        label_4->setText(QApplication::translate("TilesetsCodecFactoryClass", "Logical area", nullptr));
        previewBtn->setText(QApplication::translate("TilesetsCodecFactoryClass", "Preview", nullptr));
        convertBtn->setText(QApplication::translate("TilesetsCodecFactoryClass", "Convert", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(process), QApplication::translate("TilesetsCodecFactoryClass", "Process", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(batch), QApplication::translate("TilesetsCodecFactoryClass", "Batch", nullptr));
        menuFile->setTitle(QApplication::translate("TilesetsCodecFactoryClass", "File", nullptr));
        menuHelp->setTitle(QApplication::translate("TilesetsCodecFactoryClass", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TilesetsCodecFactoryClass: public Ui_TilesetsCodecFactoryClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILESETSCODECFACTORY_H
