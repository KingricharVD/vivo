/********************************************************************************
** Form generated from reading UI file 'signverifymessagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNVERIFYMESSAGEDIALOG_H
#define UI_SIGNVERIFYMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SignVerifyMessageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_Buttons_2;
    QPushButton *btnSignMessage;
    QPushButton *btnVerifyMessage;
    QStackedWidget *stackedWidgetSig;
    QWidget *pageSignMessage;
    QVBoxLayout *verticalLayout_SM;
    QLabel *infoLabel_SM;
    QHBoxLayout *horizontalLayout_1_SM;
    QValidatedLineEdit *addressIn_SM;
    QToolButton *addressBookButton_SM;
    QToolButton *pasteButton_SM;
    QPlainTextEdit *messageIn_SM;
    QLabel *signatureLabel_SM;
    QHBoxLayout *horizontalLayout_2_SM;
    QLineEdit *signatureOut_SM;
    QToolButton *copySignatureButton_SM;
    QHBoxLayout *horizontalLayout_3_SM;
    QPushButton *signMessageButton_SM;
    QPushButton *clearButton_SM;
    QSpacerItem *horizontalSpacer_1_SM;
    QLabel *statusLabel_SM;
    QSpacerItem *horizontalSpacer_2_SM;
    QWidget *pageVerifyMessage;
    QVBoxLayout *verticalLayout_VM;
    QLabel *infoLabel_VM;
    QHBoxLayout *horizontalLayout_1_VM;
    QValidatedLineEdit *addressIn_VM;
    QToolButton *addressBookButton_VM;
    QPlainTextEdit *messageIn_VM;
    QValidatedLineEdit *signatureIn_VM;
    QHBoxLayout *horizontalLayout_2_VM;
    QPushButton *verifyMessageButton_VM;
    QPushButton *clearButton_VM;
    QSpacerItem *horizontalSpacer_1_VM;
    QLabel *statusLabel_VM;
    QSpacerItem *horizontalSpacer_2_VM;

    void setupUi(QDialog *SignVerifyMessageDialog)
    {
        if (SignVerifyMessageDialog->objectName().isEmpty())
            SignVerifyMessageDialog->setObjectName(QString::fromUtf8("SignVerifyMessageDialog"));
        SignVerifyMessageDialog->resize(700, 380);
        SignVerifyMessageDialog->setModal(true);
        verticalLayout = new QVBoxLayout(SignVerifyMessageDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_Buttons_2 = new QHBoxLayout();
        horizontalLayout_Buttons_2->setSpacing(0);
        horizontalLayout_Buttons_2->setObjectName(QString::fromUtf8("horizontalLayout_Buttons_2"));
        horizontalLayout_Buttons_2->setContentsMargins(-1, 0, -1, -1);
        btnSignMessage = new QPushButton(SignVerifyMessageDialog);
        btnSignMessage->setObjectName(QString::fromUtf8("btnSignMessage"));
        btnSignMessage->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnSignMessage);

        btnVerifyMessage = new QPushButton(SignVerifyMessageDialog);
        btnVerifyMessage->setObjectName(QString::fromUtf8("btnVerifyMessage"));
        btnVerifyMessage->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnVerifyMessage);


        verticalLayout->addLayout(horizontalLayout_Buttons_2);

        stackedWidgetSig = new QStackedWidget(SignVerifyMessageDialog);
        stackedWidgetSig->setObjectName(QString::fromUtf8("stackedWidgetSig"));
        stackedWidgetSig->setMinimumSize(QSize(0, 0));
        pageSignMessage = new QWidget();
        pageSignMessage->setObjectName(QString::fromUtf8("pageSignMessage"));
        verticalLayout_SM = new QVBoxLayout(pageSignMessage);
        verticalLayout_SM->setObjectName(QString::fromUtf8("verticalLayout_SM"));
        infoLabel_SM = new QLabel(pageSignMessage);
        infoLabel_SM->setObjectName(QString::fromUtf8("infoLabel_SM"));
        infoLabel_SM->setTextFormat(Qt::PlainText);
        infoLabel_SM->setWordWrap(true);

        verticalLayout_SM->addWidget(infoLabel_SM);

        horizontalLayout_1_SM = new QHBoxLayout();
        horizontalLayout_1_SM->setSpacing(0);
        horizontalLayout_1_SM->setObjectName(QString::fromUtf8("horizontalLayout_1_SM"));
        addressIn_SM = new QValidatedLineEdit(pageSignMessage);
        addressIn_SM->setObjectName(QString::fromUtf8("addressIn_SM"));

        horizontalLayout_1_SM->addWidget(addressIn_SM);

        addressBookButton_SM = new QToolButton(pageSignMessage);
        addressBookButton_SM->setObjectName(QString::fromUtf8("addressBookButton_SM"));

        horizontalLayout_1_SM->addWidget(addressBookButton_SM);

        pasteButton_SM = new QToolButton(pageSignMessage);
        pasteButton_SM->setObjectName(QString::fromUtf8("pasteButton_SM"));

        horizontalLayout_1_SM->addWidget(pasteButton_SM);


        verticalLayout_SM->addLayout(horizontalLayout_1_SM);

        messageIn_SM = new QPlainTextEdit(pageSignMessage);
        messageIn_SM->setObjectName(QString::fromUtf8("messageIn_SM"));

        verticalLayout_SM->addWidget(messageIn_SM);

        signatureLabel_SM = new QLabel(pageSignMessage);
        signatureLabel_SM->setObjectName(QString::fromUtf8("signatureLabel_SM"));
        signatureLabel_SM->setTextFormat(Qt::PlainText);

        verticalLayout_SM->addWidget(signatureLabel_SM);

        horizontalLayout_2_SM = new QHBoxLayout();
        horizontalLayout_2_SM->setSpacing(0);
        horizontalLayout_2_SM->setObjectName(QString::fromUtf8("horizontalLayout_2_SM"));
        signatureOut_SM = new QLineEdit(pageSignMessage);
        signatureOut_SM->setObjectName(QString::fromUtf8("signatureOut_SM"));
        signatureOut_SM->setReadOnly(true);

        horizontalLayout_2_SM->addWidget(signatureOut_SM);

        copySignatureButton_SM = new QToolButton(pageSignMessage);
        copySignatureButton_SM->setObjectName(QString::fromUtf8("copySignatureButton_SM"));

        horizontalLayout_2_SM->addWidget(copySignatureButton_SM);


        verticalLayout_SM->addLayout(horizontalLayout_2_SM);

        horizontalLayout_3_SM = new QHBoxLayout();
        horizontalLayout_3_SM->setObjectName(QString::fromUtf8("horizontalLayout_3_SM"));
        signMessageButton_SM = new QPushButton(pageSignMessage);
        signMessageButton_SM->setObjectName(QString::fromUtf8("signMessageButton_SM"));
        signMessageButton_SM->setAutoDefault(false);

        horizontalLayout_3_SM->addWidget(signMessageButton_SM);

        clearButton_SM = new QPushButton(pageSignMessage);
        clearButton_SM->setObjectName(QString::fromUtf8("clearButton_SM"));
        clearButton_SM->setAutoDefault(false);

        horizontalLayout_3_SM->addWidget(clearButton_SM);

        horizontalSpacer_1_SM = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_SM->addItem(horizontalSpacer_1_SM);

        statusLabel_SM = new QLabel(pageSignMessage);
        statusLabel_SM->setObjectName(QString::fromUtf8("statusLabel_SM"));
        statusLabel_SM->setWordWrap(true);

        horizontalLayout_3_SM->addWidget(statusLabel_SM);

        horizontalSpacer_2_SM = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_SM->addItem(horizontalSpacer_2_SM);


        verticalLayout_SM->addLayout(horizontalLayout_3_SM);

        stackedWidgetSig->addWidget(pageSignMessage);
        pageVerifyMessage = new QWidget();
        pageVerifyMessage->setObjectName(QString::fromUtf8("pageVerifyMessage"));
        verticalLayout_VM = new QVBoxLayout(pageVerifyMessage);
        verticalLayout_VM->setObjectName(QString::fromUtf8("verticalLayout_VM"));
        infoLabel_VM = new QLabel(pageVerifyMessage);
        infoLabel_VM->setObjectName(QString::fromUtf8("infoLabel_VM"));
        infoLabel_VM->setTextFormat(Qt::PlainText);
        infoLabel_VM->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        infoLabel_VM->setWordWrap(true);

        verticalLayout_VM->addWidget(infoLabel_VM);

        horizontalLayout_1_VM = new QHBoxLayout();
        horizontalLayout_1_VM->setSpacing(0);
        horizontalLayout_1_VM->setObjectName(QString::fromUtf8("horizontalLayout_1_VM"));
        addressIn_VM = new QValidatedLineEdit(pageVerifyMessage);
        addressIn_VM->setObjectName(QString::fromUtf8("addressIn_VM"));

        horizontalLayout_1_VM->addWidget(addressIn_VM);

        addressBookButton_VM = new QToolButton(pageVerifyMessage);
        addressBookButton_VM->setObjectName(QString::fromUtf8("addressBookButton_VM"));

        horizontalLayout_1_VM->addWidget(addressBookButton_VM);


        verticalLayout_VM->addLayout(horizontalLayout_1_VM);

        messageIn_VM = new QPlainTextEdit(pageVerifyMessage);
        messageIn_VM->setObjectName(QString::fromUtf8("messageIn_VM"));

        verticalLayout_VM->addWidget(messageIn_VM);

        signatureIn_VM = new QValidatedLineEdit(pageVerifyMessage);
        signatureIn_VM->setObjectName(QString::fromUtf8("signatureIn_VM"));

        verticalLayout_VM->addWidget(signatureIn_VM);

        horizontalLayout_2_VM = new QHBoxLayout();
        horizontalLayout_2_VM->setObjectName(QString::fromUtf8("horizontalLayout_2_VM"));
        verifyMessageButton_VM = new QPushButton(pageVerifyMessage);
        verifyMessageButton_VM->setObjectName(QString::fromUtf8("verifyMessageButton_VM"));
        verifyMessageButton_VM->setAutoDefault(false);

        horizontalLayout_2_VM->addWidget(verifyMessageButton_VM);

        clearButton_VM = new QPushButton(pageVerifyMessage);
        clearButton_VM->setObjectName(QString::fromUtf8("clearButton_VM"));
        clearButton_VM->setAutoDefault(false);

        horizontalLayout_2_VM->addWidget(clearButton_VM);

        horizontalSpacer_1_VM = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_VM->addItem(horizontalSpacer_1_VM);

        statusLabel_VM = new QLabel(pageVerifyMessage);
        statusLabel_VM->setObjectName(QString::fromUtf8("statusLabel_VM"));
        statusLabel_VM->setWordWrap(true);

        horizontalLayout_2_VM->addWidget(statusLabel_VM);

        horizontalSpacer_2_VM = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_VM->addItem(horizontalSpacer_2_VM);


        verticalLayout_VM->addLayout(horizontalLayout_2_VM);

        stackedWidgetSig->addWidget(pageVerifyMessage);

        verticalLayout->addWidget(stackedWidgetSig);


        retranslateUi(SignVerifyMessageDialog);

        stackedWidgetSig->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SignVerifyMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *SignVerifyMessageDialog)
    {
        SignVerifyMessageDialog->setWindowTitle(QCoreApplication::translate("SignVerifyMessageDialog", "Signatures - Sign / Verify a Message", nullptr));
        btnSignMessage->setText(QCoreApplication::translate("SignVerifyMessageDialog", "&Sign Message", nullptr));
        btnVerifyMessage->setText(QCoreApplication::translate("SignVerifyMessageDialog", "&Verify Message", nullptr));
        infoLabel_SM->setText(QCoreApplication::translate("SignVerifyMessageDialog", "You can sign messages/agreements with your addresses to prove you can receive Dash sent to them. Be careful not to sign anything vague or random, as phishing attacks may try to trick you into signing your identity over to them. Only sign fully-detailed statements you agree to.", nullptr));
#if QT_CONFIG(tooltip)
        addressIn_SM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "The Dash address to sign the message with", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        addressBookButton_SM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Choose previously used address", nullptr));
#endif // QT_CONFIG(tooltip)
        addressBookButton_SM->setText(QString());
#if QT_CONFIG(shortcut)
        addressBookButton_SM->setShortcut(QCoreApplication::translate("SignVerifyMessageDialog", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pasteButton_SM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Paste address from clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        pasteButton_SM->setText(QString());
#if QT_CONFIG(shortcut)
        pasteButton_SM->setShortcut(QCoreApplication::translate("SignVerifyMessageDialog", "Alt+P", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        messageIn_SM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Enter the message you want to sign here", nullptr));
#endif // QT_CONFIG(tooltip)
        messageIn_SM->setPlaceholderText(QCoreApplication::translate("SignVerifyMessageDialog", "Enter a message to be signed", nullptr));
        signatureLabel_SM->setText(QCoreApplication::translate("SignVerifyMessageDialog", "Signature", nullptr));
        signatureOut_SM->setPlaceholderText(QCoreApplication::translate("SignVerifyMessageDialog", "Click \"Sign Message\" to generate signature", nullptr));
#if QT_CONFIG(tooltip)
        copySignatureButton_SM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Copy the current signature to the system clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        copySignatureButton_SM->setText(QString());
#if QT_CONFIG(tooltip)
        signMessageButton_SM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Sign the message to prove you own this Dash address", nullptr));
#endif // QT_CONFIG(tooltip)
        signMessageButton_SM->setText(QCoreApplication::translate("SignVerifyMessageDialog", "Sign &Message", nullptr));
#if QT_CONFIG(tooltip)
        clearButton_SM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Reset all sign message fields", nullptr));
#endif // QT_CONFIG(tooltip)
        clearButton_SM->setText(QCoreApplication::translate("SignVerifyMessageDialog", "Clear &All", nullptr));
        statusLabel_SM->setText(QString());
        infoLabel_VM->setText(QCoreApplication::translate("SignVerifyMessageDialog", "Enter the receiver's address, message (ensure you copy line breaks, spaces, tabs, etc. exactly) and signature below to verify the message. Be careful not to read more into the signature than what is in the signed message itself, to avoid being tricked by a man-in-the-middle attack. Note that this only proves the signing party receives with the address, it cannot prove sendership of any transaction!", nullptr));
#if QT_CONFIG(tooltip)
        addressIn_VM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "The Dash address the message was signed with", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        addressBookButton_VM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Choose previously used address", nullptr));
#endif // QT_CONFIG(tooltip)
        addressBookButton_VM->setText(QString());
#if QT_CONFIG(shortcut)
        addressBookButton_VM->setShortcut(QCoreApplication::translate("SignVerifyMessageDialog", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        messageIn_VM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "The signed message to verify", nullptr));
#endif // QT_CONFIG(tooltip)
        messageIn_VM->setPlaceholderText(QCoreApplication::translate("SignVerifyMessageDialog", "Enter a message to be verified", nullptr));
#if QT_CONFIG(tooltip)
        signatureIn_VM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "The signature given when the message was signed", nullptr));
#endif // QT_CONFIG(tooltip)
        signatureIn_VM->setPlaceholderText(QCoreApplication::translate("SignVerifyMessageDialog", "Enter a signature for the message to be verified", nullptr));
#if QT_CONFIG(tooltip)
        verifyMessageButton_VM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Verify the message to ensure it was signed with the specified Dash address", nullptr));
#endif // QT_CONFIG(tooltip)
        verifyMessageButton_VM->setText(QCoreApplication::translate("SignVerifyMessageDialog", "Verify &Message", nullptr));
#if QT_CONFIG(tooltip)
        clearButton_VM->setToolTip(QCoreApplication::translate("SignVerifyMessageDialog", "Reset all verify message fields", nullptr));
#endif // QT_CONFIG(tooltip)
        clearButton_VM->setText(QCoreApplication::translate("SignVerifyMessageDialog", "Clear &All", nullptr));
        statusLabel_VM->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignVerifyMessageDialog: public Ui_SignVerifyMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNVERIFYMESSAGEDIALOG_H
