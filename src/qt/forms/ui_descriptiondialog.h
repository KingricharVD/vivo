/********************************************************************************
** Form generated from reading UI file 'descriptiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESCRIPTIONDIALOG_H
#define UI_DESCRIPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DescriptionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *detailText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DescriptionDialog)
    {
        if (DescriptionDialog->objectName().isEmpty())
            DescriptionDialog->setObjectName(QString::fromUtf8("DescriptionDialog"));
        DescriptionDialog->resize(620, 250);
        DescriptionDialog->setWindowTitle(QString::fromUtf8("Details"));
        verticalLayout = new QVBoxLayout(DescriptionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        detailText = new QTextEdit(DescriptionDialog);
        detailText->setObjectName(QString::fromUtf8("detailText"));
        detailText->setReadOnly(true);

        verticalLayout->addWidget(detailText);

        buttonBox = new QDialogButtonBox(DescriptionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DescriptionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DescriptionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DescriptionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DescriptionDialog);
    } // setupUi

    void retranslateUi(QDialog *DescriptionDialog)
    {
#if QT_CONFIG(tooltip)
        detailText->setToolTip(QCoreApplication::translate("DescriptionDialog", "This pane shows detailed information", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)DescriptionDialog;
    } // retranslateUi

};

namespace Ui {
    class DescriptionDialog: public Ui_DescriptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESCRIPTIONDIALOG_H
