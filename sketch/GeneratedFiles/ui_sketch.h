/********************************************************************************
** Form generated from reading UI file 'sketch.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKETCH_H
#define UI_SKETCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sketchClass
{
public:
    QAction *actionOpen;
    QAction *actionAbout;
    QAction *actionExit;
    QAction *actionss;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *sketchClass)
    {
        if (sketchClass->objectName().isEmpty())
            sketchClass->setObjectName(QString::fromUtf8("sketchClass"));
        sketchClass->resize(790, 519);
        actionOpen = new QAction(sketchClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionAbout = new QAction(sketchClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionExit = new QAction(sketchClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionss = new QAction(sketchClass);
        actionss->setObjectName(QString::fromUtf8("actionss"));
        centralWidget = new QWidget(sketchClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sketchClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(sketchClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 790, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        sketchClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(sketchClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        sketchClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(sketchClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        sketchClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actionOpen);
        menu->addAction(actionss);
        menu_2->addAction(actionAbout);
        menu_2->addAction(actionExit);

        retranslateUi(sketchClass);

        QMetaObject::connectSlotsByName(sketchClass);
    } // setupUi

    void retranslateUi(QMainWindow *sketchClass)
    {
        sketchClass->setWindowTitle(QCoreApplication::translate("sketchClass", "sketch", nullptr));
        actionOpen->setText(QCoreApplication::translate("sketchClass", "\346\211\223\345\274\200", nullptr));
        actionAbout->setText(QCoreApplication::translate("sketchClass", "\345\205\263\344\272\216", nullptr));
        actionExit->setText(QCoreApplication::translate("sketchClass", "\351\200\200\345\207\272", nullptr));
        actionExit->setIconText(QCoreApplication::translate("sketchClass", "\351\200\200\345\207\272", nullptr));
        actionss->setText(QCoreApplication::translate("sketchClass", "\344\277\235\345\255\230", nullptr));
        menu->setTitle(QCoreApplication::translate("sketchClass", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("sketchClass", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sketchClass: public Ui_sketchClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKETCH_H
