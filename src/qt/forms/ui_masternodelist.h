/********************************************************************************
** Form generated from reading UI file 'masternodelist.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERNODELIST_H
#define UI_MASTERNODELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasternodeList
{
public:
    QVBoxLayout *topLayout;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBoxType;
    QLineEdit *filterText;
    QCheckBox *checkBoxOwned;
    QCheckBox *checkBoxHideBanned;
    QPushButton *btnRegisterMasternode;
    QTableView *tableViewMasternodes;
    QHBoxLayout *horizontalLayout_count;
    QSpacerItem *horizontalSpacer_count;
    QLabel *label_count;
    QLabel *countLabel;

    void setupUi(QWidget *MasternodeList)
    {
        if (MasternodeList->objectName().isEmpty())
            MasternodeList->setObjectName(QString::fromUtf8("MasternodeList"));
        MasternodeList->resize(762, 457);
        topLayout = new QVBoxLayout(MasternodeList);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        topLayout->setContentsMargins(20, 0, 20, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        comboBoxType = new QComboBox(MasternodeList);
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->setObjectName(QString::fromUtf8("comboBoxType"));

        horizontalLayout_4->addWidget(comboBoxType);

        filterText = new QLineEdit(MasternodeList);
        filterText->setObjectName(QString::fromUtf8("filterText"));

        horizontalLayout_4->addWidget(filterText);

        checkBoxOwned = new QCheckBox(MasternodeList);
        checkBoxOwned->setObjectName(QString::fromUtf8("checkBoxOwned"));

        horizontalLayout_4->addWidget(checkBoxOwned);

        checkBoxHideBanned = new QCheckBox(MasternodeList);
        checkBoxHideBanned->setObjectName(QString::fromUtf8("checkBoxHideBanned"));
        checkBoxHideBanned->setChecked(false);

        horizontalLayout_4->addWidget(checkBoxHideBanned);

        btnRegisterMasternode = new QPushButton(MasternodeList);
        btnRegisterMasternode->setObjectName(QString::fromUtf8("btnRegisterMasternode"));

        horizontalLayout_4->addWidget(btnRegisterMasternode);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        tableViewMasternodes = new QTableView(MasternodeList);
        tableViewMasternodes->setObjectName(QString::fromUtf8("tableViewMasternodes"));
        tableViewMasternodes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewMasternodes->setAlternatingRowColors(true);
        tableViewMasternodes->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewMasternodes->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewMasternodes->setSortingEnabled(true);

        gridLayout_3->addWidget(tableViewMasternodes, 1, 0, 1, 1);

        horizontalLayout_count = new QHBoxLayout();
        horizontalLayout_count->setSpacing(3);
        horizontalLayout_count->setObjectName(QString::fromUtf8("horizontalLayout_count"));
        horizontalSpacer_count = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_count->addItem(horizontalSpacer_count);

        label_count = new QLabel(MasternodeList);
        label_count->setObjectName(QString::fromUtf8("label_count"));

        horizontalLayout_count->addWidget(label_count);

        countLabel = new QLabel(MasternodeList);
        countLabel->setObjectName(QString::fromUtf8("countLabel"));
        countLabel->setText(QString::fromUtf8("0"));

        horizontalLayout_count->addWidget(countLabel);


        gridLayout_3->addLayout(horizontalLayout_count, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);


        topLayout->addLayout(verticalLayout);


        retranslateUi(MasternodeList);

        QMetaObject::connectSlotsByName(MasternodeList);
    } // setupUi

    void retranslateUi(QWidget *MasternodeList)
    {
        MasternodeList->setWindowTitle(QCoreApplication::translate("MasternodeList", "Form", nullptr));
        comboBoxType->setItemText(0, QCoreApplication::translate("MasternodeList", "All", nullptr));
        comboBoxType->setItemText(1, QCoreApplication::translate("MasternodeList", "Regular", nullptr));
        comboBoxType->setItemText(2, QCoreApplication::translate("MasternodeList", "Evo", nullptr));

#if QT_CONFIG(tooltip)
        comboBoxType->setToolTip(QCoreApplication::translate("MasternodeList", "Filter by masternode type", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        filterText->setToolTip(QCoreApplication::translate("MasternodeList", "Filter masternode list", nullptr));
#endif // QT_CONFIG(tooltip)
        filterText->setPlaceholderText(QCoreApplication::translate("MasternodeList", "Filter by any property (e.g. address or protx hash)", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxOwned->setToolTip(QCoreApplication::translate("MasternodeList", "Show only masternodes this wallet has keys for.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxOwned->setText(QCoreApplication::translate("MasternodeList", "Owned", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxHideBanned->setToolTip(QCoreApplication::translate("MasternodeList", "Hide masternodes that are currently PoSe banned.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxHideBanned->setText(QCoreApplication::translate("MasternodeList", "Hide banned", nullptr));
#if QT_CONFIG(tooltip)
        btnRegisterMasternode->setToolTip(QCoreApplication::translate("MasternodeList", "Register a new masternode or evonode using this wallet", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRegisterMasternode->setText(QCoreApplication::translate("MasternodeList", "Register Masternode\342\200\246", nullptr));
        label_count->setText(QCoreApplication::translate("MasternodeList", "Node Count:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MasternodeList: public Ui_MasternodeList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERNODELIST_H
