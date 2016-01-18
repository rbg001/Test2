/********************************************************************************
** Form generated from reading UI file 'datacollect.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATACOLLECT_H
#define UI_DATACOLLECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <ui_config.h>

QT_BEGIN_NAMESPACE

class Ui_DataCollectClass
{
public:
    QWidget *centralWidget;
    Ui_Config *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DataCollectClass)
    {
        if (DataCollectClass->objectName().isEmpty())
            DataCollectClass->setObjectName(QStringLiteral("DataCollectClass"));
        DataCollectClass->resize(698, 469);
        centralWidget = new QWidget(DataCollectClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new Ui_Config(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(270, 120, 256, 192));
        DataCollectClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DataCollectClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 698, 21));
        DataCollectClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DataCollectClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DataCollectClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DataCollectClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DataCollectClass->setStatusBar(statusBar);

        retranslateUi(DataCollectClass);

        QMetaObject::connectSlotsByName(DataCollectClass);
    } // setupUi

    void retranslateUi(QMainWindow *DataCollectClass)
    {
        DataCollectClass->setWindowTitle(QApplication::translate("DataCollectClass", "DataCollect", 0));
    } // retranslateUi

};

namespace Ui {
    class DataCollectClass: public Ui_DataCollectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATACOLLECT_H
