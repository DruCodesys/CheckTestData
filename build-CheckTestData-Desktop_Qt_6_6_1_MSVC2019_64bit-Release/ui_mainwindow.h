/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenFile;
    QAction *settings_action;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *dateLine;
    QLabel *label_3;
    QLineEdit *fileLine;
    QLabel *label_4;
    QLineEdit *operatorLine;
    QLabel *label_5;
    QLineEdit *orderLine;
    QLabel *label_6;
    QLineEdit *deliveryLine;
    QLabel *label_7;
    QLineEdit *deliveryposLine;
    QLabel *label;
    QPushButton *loadButton;
    QLineEdit *fileLineEdit;
    QTableView *tableView;
    QPushButton *checkButton;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView_2;
    QWidget *diagram;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionOpenFile = new QAction(MainWindow);
        actionOpenFile->setObjectName("actionOpenFile");
        settings_action = new QAction(MainWindow);
        settings_action->setObjectName("settings_action");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        dateLine = new QLineEdit(centralwidget);
        dateLine->setObjectName("dateLine");
        dateLine->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateLine->sizePolicy().hasHeightForWidth());
        dateLine->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(dateLine);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        fileLine = new QLineEdit(centralwidget);
        fileLine->setObjectName("fileLine");
        fileLine->setEnabled(false);

        horizontalLayout->addWidget(fileLine);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        operatorLine = new QLineEdit(centralwidget);
        operatorLine->setObjectName("operatorLine");
        operatorLine->setEnabled(false);
        sizePolicy.setHeightForWidth(operatorLine->sizePolicy().hasHeightForWidth());
        operatorLine->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(operatorLine);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        orderLine = new QLineEdit(centralwidget);
        orderLine->setObjectName("orderLine");
        orderLine->setEnabled(false);
        sizePolicy.setHeightForWidth(orderLine->sizePolicy().hasHeightForWidth());
        orderLine->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(orderLine);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        horizontalLayout->addWidget(label_6);

        deliveryLine = new QLineEdit(centralwidget);
        deliveryLine->setObjectName("deliveryLine");
        deliveryLine->setEnabled(false);
        sizePolicy.setHeightForWidth(deliveryLine->sizePolicy().hasHeightForWidth());
        deliveryLine->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(deliveryLine);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        horizontalLayout->addWidget(label_7);

        deliveryposLine = new QLineEdit(centralwidget);
        deliveryposLine->setObjectName("deliveryposLine");
        deliveryposLine->setEnabled(false);
        sizePolicy.setHeightForWidth(deliveryposLine->sizePolicy().hasHeightForWidth());
        deliveryposLine->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(deliveryposLine);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 3);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName("loadButton");
        loadButton->setEnabled(false);
        loadButton->setMouseTracking(true);

        gridLayout->addWidget(loadButton, 0, 2, 1, 1);

        fileLineEdit = new QLineEdit(centralwidget);
        fileLineEdit->setObjectName("fileLineEdit");
        fileLineEdit->setEnabled(false);

        gridLayout->addWidget(fileLineEdit, 0, 1, 1, 1);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy1);
        tableView->setSelectionMode(QAbstractItemView::MultiSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(tableView, 6, 0, 1, 3);

        checkButton = new QPushButton(centralwidget);
        checkButton->setObjectName("checkButton");
        checkButton->setEnabled(false);
        sizePolicy.setHeightForWidth(checkButton->sizePolicy().hasHeightForWidth());
        checkButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(checkButton, 7, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        tableView_2 = new QTableView(centralwidget);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_2->addWidget(tableView_2);

        diagram = new QWidget(centralwidget);
        diagram->setObjectName("diagram");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(diagram->sizePolicy().hasHeightForWidth());
        diagram->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(diagram);


        gridLayout->addLayout(horizontalLayout_2, 8, 0, 1, 3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpenFile);
        menuFile->addSeparator();
        menuFile->addAction(settings_action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpenFile->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        settings_action->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Date:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "File:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Operator:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Order:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Delivery: ", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Selected File:", nullptr));
        loadButton->setText(QCoreApplication::translate("MainWindow", "Load...", nullptr));
        checkButton->setText(QCoreApplication::translate("MainWindow", "Check", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
