/********************************************************************************
** Form generated from reading UI file 'baomainwindos.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAOMAINWINDOS_H
#define UI_BAOMAINWINDOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BaoMainwindos
{
public:
    QWidget *centralWidget;
    QPushButton *btnPlayTest;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BaoMainwindos)
    {
        if (BaoMainwindos->objectName().isEmpty())
            BaoMainwindos->setObjectName(QStringLiteral("BaoMainwindos"));
        BaoMainwindos->resize(400, 300);
        centralWidget = new QWidget(BaoMainwindos);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnPlayTest = new QPushButton(centralWidget);
        btnPlayTest->setObjectName(QStringLiteral("btnPlayTest"));
        btnPlayTest->setGeometry(QRect(20, 30, 81, 31));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 30, 201, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 90, 75, 31));
        BaoMainwindos->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BaoMainwindos);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        BaoMainwindos->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BaoMainwindos);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BaoMainwindos->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BaoMainwindos);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BaoMainwindos->setStatusBar(statusBar);

        retranslateUi(BaoMainwindos);

        QMetaObject::connectSlotsByName(BaoMainwindos);
    } // setupUi

    void retranslateUi(QMainWindow *BaoMainwindos)
    {
        BaoMainwindos->setWindowTitle(QApplication::translate("BaoMainwindos", "BaoMainwindos", 0));
        btnPlayTest->setText(QApplication::translate("BaoMainwindos", "NetPlayTest", 0));
        pushButton->setText(QApplication::translate("BaoMainwindos", "Gen", 0));
    } // retranslateUi

};

namespace Ui {
    class BaoMainwindos: public Ui_BaoMainwindos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAOMAINWINDOS_H
