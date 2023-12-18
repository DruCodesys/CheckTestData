/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *minReseatPressure;
    QLineEdit *reseatPressure;
    QLineEdit *maxReseatPressure;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *minCrackPressure;
    QLineEdit *crackPressure;
    QLineEdit *maxCrackPressure;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QLineEdit *minFlowPressure;
    QLineEdit *flowPressure;
    QLineEdit *maxFlowPressure;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_13;
    QLineEdit *minFlow;
    QLineEdit *flowRate;
    QLineEdit *maxFlow;
    QLabel *label_14;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName("Settings");
        Settings->resize(400, 300);
        gridLayout = new QGridLayout(Settings);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Settings);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(Settings);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(60, 0));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(Settings);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(60, 0));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(Settings);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(60, 0));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(Settings);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(60, 0));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_5);

        label_7 = new QLabel(Settings);
        label_7->setObjectName("label_7");
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(60, 0));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(Settings);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(label_6);

        minReseatPressure = new QLineEdit(Settings);
        minReseatPressure->setObjectName("minReseatPressure");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(minReseatPressure->sizePolicy().hasHeightForWidth());
        minReseatPressure->setSizePolicy(sizePolicy1);
        minReseatPressure->setMinimumSize(QSize(60, 0));
        minReseatPressure->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(minReseatPressure);

        reseatPressure = new QLineEdit(Settings);
        reseatPressure->setObjectName("reseatPressure");
        sizePolicy1.setHeightForWidth(reseatPressure->sizePolicy().hasHeightForWidth());
        reseatPressure->setSizePolicy(sizePolicy1);
        reseatPressure->setMinimumSize(QSize(60, 0));
        reseatPressure->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(reseatPressure);

        maxReseatPressure = new QLineEdit(Settings);
        maxReseatPressure->setObjectName("maxReseatPressure");
        sizePolicy1.setHeightForWidth(maxReseatPressure->sizePolicy().hasHeightForWidth());
        maxReseatPressure->setSizePolicy(sizePolicy1);
        maxReseatPressure->setMinimumSize(QSize(60, 0));
        maxReseatPressure->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(maxReseatPressure);

        label_8 = new QLabel(Settings);
        label_8->setObjectName("label_8");
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(60, 0));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_9 = new QLabel(Settings);
        label_9->setObjectName("label_9");
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setMinimumSize(QSize(60, 0));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_9);

        minCrackPressure = new QLineEdit(Settings);
        minCrackPressure->setObjectName("minCrackPressure");
        sizePolicy1.setHeightForWidth(minCrackPressure->sizePolicy().hasHeightForWidth());
        minCrackPressure->setSizePolicy(sizePolicy1);
        minCrackPressure->setMinimumSize(QSize(60, 0));

        horizontalLayout_3->addWidget(minCrackPressure);

        crackPressure = new QLineEdit(Settings);
        crackPressure->setObjectName("crackPressure");
        sizePolicy1.setHeightForWidth(crackPressure->sizePolicy().hasHeightForWidth());
        crackPressure->setSizePolicy(sizePolicy1);
        crackPressure->setMinimumSize(QSize(60, 0));

        horizontalLayout_3->addWidget(crackPressure);

        maxCrackPressure = new QLineEdit(Settings);
        maxCrackPressure->setObjectName("maxCrackPressure");
        sizePolicy1.setHeightForWidth(maxCrackPressure->sizePolicy().hasHeightForWidth());
        maxCrackPressure->setSizePolicy(sizePolicy1);
        maxCrackPressure->setMinimumSize(QSize(60, 0));

        horizontalLayout_3->addWidget(maxCrackPressure);

        label_10 = new QLabel(Settings);
        label_10->setObjectName("label_10");
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(60, 0));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_10);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_11 = new QLabel(Settings);
        label_11->setObjectName("label_11");
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setMinimumSize(QSize(60, 0));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_11);

        minFlowPressure = new QLineEdit(Settings);
        minFlowPressure->setObjectName("minFlowPressure");
        minFlowPressure->setEnabled(false);
        sizePolicy1.setHeightForWidth(minFlowPressure->sizePolicy().hasHeightForWidth());
        minFlowPressure->setSizePolicy(sizePolicy1);
        minFlowPressure->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(minFlowPressure);

        flowPressure = new QLineEdit(Settings);
        flowPressure->setObjectName("flowPressure");
        flowPressure->setEnabled(false);
        sizePolicy1.setHeightForWidth(flowPressure->sizePolicy().hasHeightForWidth());
        flowPressure->setSizePolicy(sizePolicy1);
        flowPressure->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(flowPressure);

        maxFlowPressure = new QLineEdit(Settings);
        maxFlowPressure->setObjectName("maxFlowPressure");
        sizePolicy1.setHeightForWidth(maxFlowPressure->sizePolicy().hasHeightForWidth());
        maxFlowPressure->setSizePolicy(sizePolicy1);
        maxFlowPressure->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(maxFlowPressure);

        label_12 = new QLabel(Settings);
        label_12->setObjectName("label_12");
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMinimumSize(QSize(60, 0));
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_12);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_13 = new QLabel(Settings);
        label_13->setObjectName("label_13");
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setMinimumSize(QSize(60, 0));
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_13);

        minFlow = new QLineEdit(Settings);
        minFlow->setObjectName("minFlow");
        minFlow->setEnabled(true);
        sizePolicy1.setHeightForWidth(minFlow->sizePolicy().hasHeightForWidth());
        minFlow->setSizePolicy(sizePolicy1);
        minFlow->setMinimumSize(QSize(60, 0));

        horizontalLayout_5->addWidget(minFlow);

        flowRate = new QLineEdit(Settings);
        flowRate->setObjectName("flowRate");
        flowRate->setEnabled(false);
        sizePolicy1.setHeightForWidth(flowRate->sizePolicy().hasHeightForWidth());
        flowRate->setSizePolicy(sizePolicy1);
        flowRate->setMinimumSize(QSize(60, 0));

        horizontalLayout_5->addWidget(flowRate);

        maxFlow = new QLineEdit(Settings);
        maxFlow->setObjectName("maxFlow");
        maxFlow->setEnabled(false);
        sizePolicy1.setHeightForWidth(maxFlow->sizePolicy().hasHeightForWidth());
        maxFlow->setSizePolicy(sizePolicy1);
        maxFlow->setMinimumSize(QSize(60, 0));

        horizontalLayout_5->addWidget(maxFlow);

        label_14 = new QLabel(Settings);
        label_14->setObjectName("label_14");
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setMinimumSize(QSize(60, 0));
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_14);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(Settings);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);


        retranslateUi(Settings);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Settings, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Settings, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Settings", "Preferences", nullptr));
        label_2->setText(QCoreApplication::translate("Settings", "Parameter", nullptr));
        label_3->setText(QCoreApplication::translate("Settings", "Minimum", nullptr));
        label_4->setText(QCoreApplication::translate("Settings", "Nominal", nullptr));
        label_5->setText(QCoreApplication::translate("Settings", "Maximum", nullptr));
        label_7->setText(QCoreApplication::translate("Settings", "Unit", nullptr));
        label_6->setText(QCoreApplication::translate("Settings", "Reseat Pressure", nullptr));
        label_8->setText(QCoreApplication::translate("Settings", "bar", nullptr));
        label_9->setText(QCoreApplication::translate("Settings", "Crack Pressure", nullptr));
        label_10->setText(QCoreApplication::translate("Settings", "bar", nullptr));
        label_11->setText(QCoreApplication::translate("Settings", "Flow Pressure", nullptr));
        label_12->setText(QCoreApplication::translate("Settings", "bar", nullptr));
        label_13->setText(QCoreApplication::translate("Settings", "Flow Rate", nullptr));
        label_14->setText(QCoreApplication::translate("Settings", "m^3/h", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
