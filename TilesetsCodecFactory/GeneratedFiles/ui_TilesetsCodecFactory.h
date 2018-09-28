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
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TilesetsCodecFactoryClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TilesetsCodecFactoryClass)
    {
        if (TilesetsCodecFactoryClass->objectName().isEmpty())
            TilesetsCodecFactoryClass->setObjectName(QStringLiteral("TilesetsCodecFactoryClass"));
        TilesetsCodecFactoryClass->resize(600, 400);
        menuBar = new QMenuBar(TilesetsCodecFactoryClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        TilesetsCodecFactoryClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TilesetsCodecFactoryClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TilesetsCodecFactoryClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TilesetsCodecFactoryClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TilesetsCodecFactoryClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TilesetsCodecFactoryClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TilesetsCodecFactoryClass->setStatusBar(statusBar);

        retranslateUi(TilesetsCodecFactoryClass);

        QMetaObject::connectSlotsByName(TilesetsCodecFactoryClass);
    } // setupUi

    void retranslateUi(QMainWindow *TilesetsCodecFactoryClass)
    {
        TilesetsCodecFactoryClass->setWindowTitle(QApplication::translate("TilesetsCodecFactoryClass", "TilesetsCodecFactory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TilesetsCodecFactoryClass: public Ui_TilesetsCodecFactoryClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILESETSCODECFACTORY_H
