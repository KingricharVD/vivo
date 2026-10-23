/********************************************************************************
** Form generated from reading UI file 'qrdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRDIALOG_H
#define UI_QRDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "qt/qrimagewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QRDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *labelQRCodeTitle;
    QRImageWidget *lblQRCode;
    QTextEdit *outUri;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_saveImage;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QRDialog)
    {
        if (QRDialog->objectName().isEmpty())
            QRDialog->setObjectName(QString::fromUtf8("QRDialog"));
        QRDialog->resize(670, 698);
        verticalLayout_3 = new QVBoxLayout(QRDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        labelQRCodeTitle = new QLabel(QRDialog);
        labelQRCodeTitle->setObjectName(QString::fromUtf8("labelQRCodeTitle"));
        labelQRCodeTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelQRCodeTitle);

        lblQRCode = new QRImageWidget(QRDialog);
        lblQRCode->setObjectName(QString::fromUtf8("lblQRCode"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblQRCode->sizePolicy().hasHeightForWidth());
        lblQRCode->setSizePolicy(sizePolicy);
        lblQRCode->setMinimumSize(QSize(300, 300));
        lblQRCode->setTextFormat(Qt::PlainText);
        lblQRCode->setAlignment(Qt::AlignCenter);
        lblQRCode->setWordWrap(true);

        verticalLayout_3->addWidget(lblQRCode);

        outUri = new QTextEdit(QRDialog);
        outUri->setObjectName(QString::fromUtf8("outUri"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(outUri->sizePolicy().hasHeightForWidth());
        outUri->setSizePolicy(sizePolicy1);
        outUri->setMinimumSize(QSize(0, 50));
        outUri->setFrameShape(QFrame::NoFrame);
        outUri->setFrameShadow(QFrame::Plain);
        outUri->setTabChangesFocus(true);
        outUri->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_3->addWidget(outUri);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        button_saveImage = new QPushButton(QRDialog);
        button_saveImage->setObjectName(QString::fromUtf8("button_saveImage"));
        button_saveImage->setAutoDefault(false);

        horizontalLayout->addWidget(button_saveImage);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(QRDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(QRDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), QRDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QRDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(QRDialog);
    } // setupUi

    void retranslateUi(QDialog *QRDialog)
    {
        labelQRCodeTitle->setText(QCoreApplication::translate("QRDialog", "QR-Code Title", nullptr));
#if QT_CONFIG(tooltip)
        lblQRCode->setToolTip(QCoreApplication::translate("QRDialog", "QR Code", nullptr));
#endif // QT_CONFIG(tooltip)
        button_saveImage->setText(QCoreApplication::translate("QRDialog", "&Save Image\342\200\246", nullptr));
        (void)QRDialog;
    } // retranslateUi

};

namespace Ui {
    class QRDialog: public Ui_QRDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRDIALOG_H
