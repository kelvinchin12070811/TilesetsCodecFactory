/********************************************************************************
** Form generated from reading UI file 'PreviewWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREVIEWWINDOW_H
#define UI_PREVIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreviewWindow
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *PreviewWindow)
    {
        if (PreviewWindow->objectName().isEmpty())
            PreviewWindow->setObjectName(QStringLiteral("PreviewWindow"));
        PreviewWindow->resize(400, 300);
        verticalLayout = new QVBoxLayout(PreviewWindow);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(PreviewWindow);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);


        retranslateUi(PreviewWindow);

        QMetaObject::connectSlotsByName(PreviewWindow);
    } // setupUi

    void retranslateUi(QWidget *PreviewWindow)
    {
        PreviewWindow->setWindowTitle(QApplication::translate("PreviewWindow", "PreviewWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreviewWindow: public Ui_PreviewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREVIEWWINDOW_H
