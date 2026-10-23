/********************************************************************************
** Form generated from reading UI file 'proposalcreate.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPOSALCREATE_H
#define UI_PROPOSALCREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/bitcoinamountfield.h"
#include "qt/qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_ProposalCreate
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageDetails;
    QVBoxLayout *detailsLayout;
    QVBoxLayout *nameFieldLayout;
    QLabel *labelName;
    QLineEdit *editName;
    QVBoxLayout *urlFieldLayout;
    QLabel *labelUrl;
    QLineEdit *editUrl;
    QGridLayout *fieldsGridLayout;
    QLabel *labelFirstPayment;
    QLabel *labelPaymentsInline;
    QLabel *labelPayAddr;
    QComboBox *comboFirstPayment;
    QSpinBox *spinPayments;
    QValidatedLineEdit *editPayAddr;
    QSpacerItem *gridRowSpacer;
    QLabel *labelPayAmt;
    QLabel *labelTotal;
    BitcoinAmountField *paymentAmount;
    QSpacerItem *row4Spacer;
    QLabel *labelTotalValue;
    QSpacerItem *detailsVerticalSpacer;
    QHBoxLayout *detailsButtonsLayout;
    QPushButton *btnViewJson;
    QPushButton *btnViewPayload;
    QLabel *labelError;
    QPushButton *btnCreate;

    void setupUi(QDialog *ProposalCreate)
    {
        if (ProposalCreate->objectName().isEmpty())
            ProposalCreate->setObjectName(QString::fromUtf8("ProposalCreate"));
        ProposalCreate->resize(860, 380);
        ProposalCreate->setMinimumSize(QSize(860, 380));
        verticalLayout = new QVBoxLayout(ProposalCreate);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(12, 0, 12, 10);
        stackedWidget = new QStackedWidget(ProposalCreate);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageDetails = new QWidget();
        pageDetails->setObjectName(QString::fromUtf8("pageDetails"));
        detailsLayout = new QVBoxLayout(pageDetails);
        detailsLayout->setObjectName(QString::fromUtf8("detailsLayout"));
        nameFieldLayout = new QVBoxLayout();
        nameFieldLayout->setSpacing(4);
        nameFieldLayout->setObjectName(QString::fromUtf8("nameFieldLayout"));
        nameFieldLayout->setContentsMargins(4, -1, 4, -1);
        labelName = new QLabel(pageDetails);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        nameFieldLayout->addWidget(labelName);

        editName = new QLineEdit(pageDetails);
        editName->setObjectName(QString::fromUtf8("editName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editName->sizePolicy().hasHeightForWidth());
        editName->setSizePolicy(sizePolicy);
        editName->setPlaceholderText(QString::fromUtf8("short-unique-name"));
        editName->setMaximumHeight(24);

        nameFieldLayout->addWidget(editName);


        detailsLayout->addLayout(nameFieldLayout);

        urlFieldLayout = new QVBoxLayout();
        urlFieldLayout->setSpacing(4);
        urlFieldLayout->setObjectName(QString::fromUtf8("urlFieldLayout"));
        urlFieldLayout->setContentsMargins(4, -1, 4, -1);
        labelUrl = new QLabel(pageDetails);
        labelUrl->setObjectName(QString::fromUtf8("labelUrl"));

        urlFieldLayout->addWidget(labelUrl);

        editUrl = new QLineEdit(pageDetails);
        editUrl->setObjectName(QString::fromUtf8("editUrl"));
        sizePolicy.setHeightForWidth(editUrl->sizePolicy().hasHeightForWidth());
        editUrl->setSizePolicy(sizePolicy);
        editUrl->setPlaceholderText(QString::fromUtf8("https://example.com/my-proposal"));
        editUrl->setMaximumHeight(24);

        urlFieldLayout->addWidget(editUrl);


        detailsLayout->addLayout(urlFieldLayout);

        fieldsGridLayout = new QGridLayout();
        fieldsGridLayout->setObjectName(QString::fromUtf8("fieldsGridLayout"));
        fieldsGridLayout->setHorizontalSpacing(12);
        fieldsGridLayout->setVerticalSpacing(4);
        fieldsGridLayout->setContentsMargins(4, -1, 4, -1);
        labelFirstPayment = new QLabel(pageDetails);
        labelFirstPayment->setObjectName(QString::fromUtf8("labelFirstPayment"));

        fieldsGridLayout->addWidget(labelFirstPayment, 0, 0, 1, 1);

        labelPaymentsInline = new QLabel(pageDetails);
        labelPaymentsInline->setObjectName(QString::fromUtf8("labelPaymentsInline"));

        fieldsGridLayout->addWidget(labelPaymentsInline, 0, 1, 1, 1);

        labelPayAddr = new QLabel(pageDetails);
        labelPayAddr->setObjectName(QString::fromUtf8("labelPayAddr"));

        fieldsGridLayout->addWidget(labelPayAddr, 0, 2, 1, 2);

        comboFirstPayment = new QComboBox(pageDetails);
        comboFirstPayment->setObjectName(QString::fromUtf8("comboFirstPayment"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboFirstPayment->sizePolicy().hasHeightForWidth());
        comboFirstPayment->setSizePolicy(sizePolicy1);
        comboFirstPayment->setMinimumWidth(140);
        comboFirstPayment->setMaximumHeight(24);

        fieldsGridLayout->addWidget(comboFirstPayment, 1, 0, 1, 1);

        spinPayments = new QSpinBox(pageDetails);
        spinPayments->setObjectName(QString::fromUtf8("spinPayments"));
        sizePolicy.setHeightForWidth(spinPayments->sizePolicy().hasHeightForWidth());
        spinPayments->setSizePolicy(sizePolicy);
        spinPayments->setMinimumWidth(80);
        spinPayments->setMaximumHeight(24);
        spinPayments->setMinimum(1);
        spinPayments->setMaximum(12);
        spinPayments->setValue(1);

        fieldsGridLayout->addWidget(spinPayments, 1, 1, 1, 1);

        editPayAddr = new QValidatedLineEdit(pageDetails);
        editPayAddr->setObjectName(QString::fromUtf8("editPayAddr"));
        sizePolicy1.setHeightForWidth(editPayAddr->sizePolicy().hasHeightForWidth());
        editPayAddr->setSizePolicy(sizePolicy1);
        editPayAddr->setMinimumWidth(200);
        editPayAddr->setMaximumHeight(24);

        fieldsGridLayout->addWidget(editPayAddr, 1, 2, 1, 2);

        gridRowSpacer = new QSpacerItem(0, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        fieldsGridLayout->addItem(gridRowSpacer, 2, 0, 1, 4);

        labelPayAmt = new QLabel(pageDetails);
        labelPayAmt->setObjectName(QString::fromUtf8("labelPayAmt"));

        fieldsGridLayout->addWidget(labelPayAmt, 3, 0, 1, 1);

        labelTotal = new QLabel(pageDetails);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));

        fieldsGridLayout->addWidget(labelTotal, 3, 2, 1, 1);

        paymentAmount = new BitcoinAmountField(pageDetails);
        paymentAmount->setObjectName(QString::fromUtf8("paymentAmount"));
        sizePolicy1.setHeightForWidth(paymentAmount->sizePolicy().hasHeightForWidth());
        paymentAmount->setSizePolicy(sizePolicy1);
        paymentAmount->setMinimumWidth(140);

        fieldsGridLayout->addWidget(paymentAmount, 4, 0, 1, 1);

        row4Spacer = new QSpacerItem(0, 0, QSizePolicy::Ignored, QSizePolicy::Minimum);

        fieldsGridLayout->addItem(row4Spacer, 4, 1, 1, 1);

        labelTotalValue = new QLabel(pageDetails);
        labelTotalValue->setObjectName(QString::fromUtf8("labelTotalValue"));
        labelTotalValue->setText(QString::fromUtf8("0"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelTotalValue->sizePolicy().hasHeightForWidth());
        labelTotalValue->setSizePolicy(sizePolicy2);
        labelTotalValue->setMinimumWidth(190);
        labelTotalValue->setMinimumHeight(24);
        labelTotalValue->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);

        fieldsGridLayout->addWidget(labelTotalValue, 4, 2, 1, 1);

        fieldsGridLayout->setColumnStretch(0, 2);
        fieldsGridLayout->setColumnStretch(1, 1);
        fieldsGridLayout->setColumnStretch(2, 2);

        detailsLayout->addLayout(fieldsGridLayout);

        detailsVerticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        detailsLayout->addItem(detailsVerticalSpacer);

        detailsButtonsLayout = new QHBoxLayout();
        detailsButtonsLayout->setSpacing(8);
        detailsButtonsLayout->setObjectName(QString::fromUtf8("detailsButtonsLayout"));
        btnViewJson = new QPushButton(pageDetails);
        btnViewJson->setObjectName(QString::fromUtf8("btnViewJson"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnViewJson->sizePolicy().hasHeightForWidth());
        btnViewJson->setSizePolicy(sizePolicy3);
        btnViewJson->setMinimumSize(QSize(100, 28));
        btnViewJson->setAutoDefault(false);

        detailsButtonsLayout->addWidget(btnViewJson);

        btnViewPayload = new QPushButton(pageDetails);
        btnViewPayload->setObjectName(QString::fromUtf8("btnViewPayload"));
        sizePolicy3.setHeightForWidth(btnViewPayload->sizePolicy().hasHeightForWidth());
        btnViewPayload->setSizePolicy(sizePolicy3);
        btnViewPayload->setMinimumSize(QSize(100, 28));
        btnViewPayload->setAutoDefault(false);

        detailsButtonsLayout->addWidget(btnViewPayload);

        labelError = new QLabel(pageDetails);
        labelError->setObjectName(QString::fromUtf8("labelError"));
        labelError->setText(QString::fromUtf8(""));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelError->sizePolicy().hasHeightForWidth());
        labelError->setSizePolicy(sizePolicy4);
        labelError->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);

        detailsButtonsLayout->addWidget(labelError);

        btnCreate = new QPushButton(pageDetails);
        btnCreate->setObjectName(QString::fromUtf8("btnCreate"));
        sizePolicy3.setHeightForWidth(btnCreate->sizePolicy().hasHeightForWidth());
        btnCreate->setSizePolicy(sizePolicy3);
        btnCreate->setMinimumSize(QSize(120, 28));

        detailsButtonsLayout->addWidget(btnCreate);


        detailsLayout->addLayout(detailsButtonsLayout);

        stackedWidget->addWidget(pageDetails);

        verticalLayout->addWidget(stackedWidget);

#if QT_CONFIG(shortcut)
        labelName->setBuddy(editName);
        labelUrl->setBuddy(editUrl);
        labelFirstPayment->setBuddy(comboFirstPayment);
        labelPaymentsInline->setBuddy(spinPayments);
        labelPayAddr->setBuddy(editPayAddr);
        labelPayAmt->setBuddy(paymentAmount);
        labelTotal->setBuddy(labelTotalValue);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(editName, editUrl);
        QWidget::setTabOrder(editUrl, comboFirstPayment);
        QWidget::setTabOrder(comboFirstPayment, spinPayments);
        QWidget::setTabOrder(spinPayments, editPayAddr);
        QWidget::setTabOrder(editPayAddr, paymentAmount);
        QWidget::setTabOrder(paymentAmount, btnCreate);

        retranslateUi(ProposalCreate);

        btnCreate->setDefault(true);


        QMetaObject::connectSlotsByName(ProposalCreate);
    } // setupUi

    void retranslateUi(QDialog *ProposalCreate)
    {
        ProposalCreate->setWindowTitle(QCoreApplication::translate("ProposalCreate", "New proposal", nullptr));
        labelName->setText(QCoreApplication::translate("ProposalCreate", "Proposal &name", nullptr));
        labelUrl->setText(QCoreApplication::translate("ProposalCreate", "&Description URL", nullptr));
        labelFirstPayment->setText(QCoreApplication::translate("ProposalCreate", "&Payment date", nullptr));
        labelPaymentsInline->setText(QCoreApplication::translate("ProposalCreate", "Pa&yments", nullptr));
        labelPayAddr->setText(QCoreApplication::translate("ProposalCreate", "Payment &address", nullptr));
        labelPayAmt->setText(QCoreApplication::translate("ProposalCreate", "Payment &amount", nullptr));
        labelTotal->setText(QCoreApplication::translate("ProposalCreate", "To&tal amount", nullptr));
#if QT_CONFIG(tooltip)
        paymentAmount->setToolTip(QCoreApplication::translate("ProposalCreate", "The amount to request in a single payment", nullptr));
#endif // QT_CONFIG(tooltip)
        btnViewJson->setText(QCoreApplication::translate("ProposalCreate", "View JSON", nullptr));
        btnViewPayload->setText(QCoreApplication::translate("ProposalCreate", "View Payload", nullptr));
        btnCreate->setText(QCoreApplication::translate("ProposalCreate", "Create Proposal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProposalCreate: public Ui_ProposalCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPOSALCREATE_H
