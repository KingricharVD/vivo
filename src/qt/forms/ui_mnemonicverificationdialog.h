/********************************************************************************
** Form generated from reading UI file 'mnemonicverificationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNEMONICVERIFICATIONDIALOG_H
#define UI_MNEMONICVERIFICATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MnemonicVerificationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *step1Page;
    QVBoxLayout *verticalLayout_step1;
    QLabel *warningLabel;
    QLabel *instructionLabel;
    QScrollArea *mnemonicScroll;
    QWidget *mnemonicGridWidget;
    QGridLayout *mnemonicGridLayout;
    QHBoxLayout *horizontalLayout_buttons;
    QPushButton *showMnemonicButton;
    QPushButton *hideMnemonicButton;
    QSpacerItem *horizontalSpacer_1;
    QCheckBox *writtenDownCheckbox;
    QWidget *step2Page;
    QVBoxLayout *verticalLayout_step2;
    QLabel *verificationLabel;
    QFormLayout *formLayout;
    QLabel *word1Label;
    QHBoxLayout *horizontalLayout_word1;
    QLineEdit *word1Edit;
    QLabel *word1Status;
    QLabel *word2Label;
    QHBoxLayout *horizontalLayout_word2;
    QLineEdit *word2Edit;
    QLabel *word2Status;
    QLabel *word3Label;
    QHBoxLayout *horizontalLayout_word3;
    QLineEdit *word3Edit;
    QLabel *word3Status;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MnemonicVerificationDialog)
    {
        if (MnemonicVerificationDialog->objectName().isEmpty())
            MnemonicVerificationDialog->setObjectName(QString::fromUtf8("MnemonicVerificationDialog"));
        verticalLayout = new QVBoxLayout(MnemonicVerificationDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(MnemonicVerificationDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        step1Page = new QWidget();
        step1Page->setObjectName(QString::fromUtf8("step1Page"));
        verticalLayout_step1 = new QVBoxLayout(step1Page);
        verticalLayout_step1->setObjectName(QString::fromUtf8("verticalLayout_step1"));
        warningLabel = new QLabel(step1Page);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        warningLabel->setTextFormat(Qt::RichText);
        warningLabel->setWordWrap(true);

        verticalLayout_step1->addWidget(warningLabel);

        instructionLabel = new QLabel(step1Page);
        instructionLabel->setObjectName(QString::fromUtf8("instructionLabel"));
        instructionLabel->setWordWrap(true);

        verticalLayout_step1->addWidget(instructionLabel);

        mnemonicScroll = new QScrollArea(step1Page);
        mnemonicScroll->setObjectName(QString::fromUtf8("mnemonicScroll"));
        mnemonicScroll->setFrameShape(QFrame::NoFrame);
        mnemonicScroll->setWidgetResizable(true);
        mnemonicGridWidget = new QWidget();
        mnemonicGridWidget->setObjectName(QString::fromUtf8("mnemonicGridWidget"));
        mnemonicGridLayout = new QGridLayout(mnemonicGridWidget);
        mnemonicGridLayout->setObjectName(QString::fromUtf8("mnemonicGridLayout"));
        mnemonicScroll->setWidget(mnemonicGridWidget);

        verticalLayout_step1->addWidget(mnemonicScroll);

        horizontalLayout_buttons = new QHBoxLayout();
        horizontalLayout_buttons->setObjectName(QString::fromUtf8("horizontalLayout_buttons"));
        showMnemonicButton = new QPushButton(step1Page);
        showMnemonicButton->setObjectName(QString::fromUtf8("showMnemonicButton"));

        horizontalLayout_buttons->addWidget(showMnemonicButton);

        hideMnemonicButton = new QPushButton(step1Page);
        hideMnemonicButton->setObjectName(QString::fromUtf8("hideMnemonicButton"));

        horizontalLayout_buttons->addWidget(hideMnemonicButton);

        horizontalSpacer_1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_buttons->addItem(horizontalSpacer_1);

        writtenDownCheckbox = new QCheckBox(step1Page);
        writtenDownCheckbox->setObjectName(QString::fromUtf8("writtenDownCheckbox"));

        horizontalLayout_buttons->addWidget(writtenDownCheckbox);


        verticalLayout_step1->addLayout(horizontalLayout_buttons);

        stackedWidget->addWidget(step1Page);
        step2Page = new QWidget();
        step2Page->setObjectName(QString::fromUtf8("step2Page"));
        verticalLayout_step2 = new QVBoxLayout(step2Page);
        verticalLayout_step2->setObjectName(QString::fromUtf8("verticalLayout_step2"));
        verificationLabel = new QLabel(step2Page);
        verificationLabel->setObjectName(QString::fromUtf8("verificationLabel"));
        verificationLabel->setWordWrap(true);

        verticalLayout_step2->addWidget(verificationLabel);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        word1Label = new QLabel(step2Page);
        word1Label->setObjectName(QString::fromUtf8("word1Label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, word1Label);

        horizontalLayout_word1 = new QHBoxLayout();
        horizontalLayout_word1->setObjectName(QString::fromUtf8("horizontalLayout_word1"));
        word1Edit = new QLineEdit(step2Page);
        word1Edit->setObjectName(QString::fromUtf8("word1Edit"));

        horizontalLayout_word1->addWidget(word1Edit);

        word1Status = new QLabel(step2Page);
        word1Status->setObjectName(QString::fromUtf8("word1Status"));

        horizontalLayout_word1->addWidget(word1Status);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_word1);

        word2Label = new QLabel(step2Page);
        word2Label->setObjectName(QString::fromUtf8("word2Label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, word2Label);

        horizontalLayout_word2 = new QHBoxLayout();
        horizontalLayout_word2->setObjectName(QString::fromUtf8("horizontalLayout_word2"));
        word2Edit = new QLineEdit(step2Page);
        word2Edit->setObjectName(QString::fromUtf8("word2Edit"));

        horizontalLayout_word2->addWidget(word2Edit);

        word2Status = new QLabel(step2Page);
        word2Status->setObjectName(QString::fromUtf8("word2Status"));

        horizontalLayout_word2->addWidget(word2Status);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_word2);

        word3Label = new QLabel(step2Page);
        word3Label->setObjectName(QString::fromUtf8("word3Label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, word3Label);

        horizontalLayout_word3 = new QHBoxLayout();
        horizontalLayout_word3->setObjectName(QString::fromUtf8("horizontalLayout_word3"));
        word3Edit = new QLineEdit(step2Page);
        word3Edit->setObjectName(QString::fromUtf8("word3Edit"));

        horizontalLayout_word3->addWidget(word3Edit);

        word3Status = new QLabel(step2Page);
        word3Status->setObjectName(QString::fromUtf8("word3Status"));

        horizontalLayout_word3->addWidget(word3Status);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_word3);


        verticalLayout_step2->addLayout(formLayout);

        stackedWidget->addWidget(step2Page);

        verticalLayout->addWidget(stackedWidget);

        buttonBox = new QDialogButtonBox(MnemonicVerificationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(MnemonicVerificationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MnemonicVerificationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MnemonicVerificationDialog, SLOT(reject()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MnemonicVerificationDialog);
    } // setupUi

    void retranslateUi(QDialog *MnemonicVerificationDialog)
    {
        MnemonicVerificationDialog->setWindowTitle(QCoreApplication::translate("MnemonicVerificationDialog", "Save Your Mnemonic", nullptr));
        warningLabel->setText(QCoreApplication::translate("MnemonicVerificationDialog", "WARNING: If you lose your mnemonic seed phrase, you will lose access to your wallet forever.", nullptr));
        instructionLabel->setText(QCoreApplication::translate("MnemonicVerificationDialog", "Please write down these words in order. You will need them to restore your wallet.", nullptr));
        showMnemonicButton->setText(QCoreApplication::translate("MnemonicVerificationDialog", "Show", nullptr));
        hideMnemonicButton->setText(QCoreApplication::translate("MnemonicVerificationDialog", "Hide", nullptr));
        writtenDownCheckbox->setText(QCoreApplication::translate("MnemonicVerificationDialog", "I have written down my mnemonic", nullptr));
        verificationLabel->setText(QCoreApplication::translate("MnemonicVerificationDialog", "To verify you've saved your mnemonic, please enter the following words:", nullptr));
        word1Label->setText(QCoreApplication::translate("MnemonicVerificationDialog", "Word #1:", nullptr));
        word2Label->setText(QCoreApplication::translate("MnemonicVerificationDialog", "Word #2:", nullptr));
        word3Label->setText(QCoreApplication::translate("MnemonicVerificationDialog", "Word #3:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MnemonicVerificationDialog: public Ui_MnemonicVerificationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNEMONICVERIFICATIONDIALOG_H
