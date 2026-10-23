/********************************************************************************
** Form generated from reading UI file 'proposalresume.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPOSALRESUME_H
#define UI_PROPOSALRESUME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProposalResume
{
public:
    QVBoxLayout *mainLayout;
    QScrollArea *scrollArea;
    QFrame *scrollContents;
    QVBoxLayout *proposalsLayout;
    QHBoxLayout *buttonLayout;
    QSpacerItem *buttonSpacer;
    QPushButton *btnClose;

    void setupUi(QDialog *ProposalResume)
    {
        if (ProposalResume->objectName().isEmpty())
            ProposalResume->setObjectName(QString::fromUtf8("ProposalResume"));
        ProposalResume->resize(720, 400);
        ProposalResume->setMinimumSize(QSize(720, 400));
        mainLayout = new QVBoxLayout(ProposalResume);
        mainLayout->setSpacing(0);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(16, 16, 16, 0);
        scrollArea = new QScrollArea(ProposalResume);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setWidgetResizable(true);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollContents = new QFrame();
        scrollContents->setObjectName(QString::fromUtf8("scrollContents"));
        scrollContents->setFrameShape(QFrame::NoFrame);
        proposalsLayout = new QVBoxLayout(scrollContents);
        proposalsLayout->setSpacing(16);
        proposalsLayout->setObjectName(QString::fromUtf8("proposalsLayout"));
        proposalsLayout->setContentsMargins(16, 16, 16, 16);
        scrollArea->setWidget(scrollContents);

        mainLayout->addWidget(scrollArea);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        buttonLayout->setContentsMargins(0, 8, 0, 16);
        buttonSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(buttonSpacer);

        btnClose = new QPushButton(ProposalResume);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        buttonLayout->addWidget(btnClose);


        mainLayout->addLayout(buttonLayout);


        retranslateUi(ProposalResume);

        QMetaObject::connectSlotsByName(ProposalResume);
    } // setupUi

    void retranslateUi(QDialog *ProposalResume)
    {
        ProposalResume->setWindowTitle(QCoreApplication::translate("ProposalResume", "Resume Proposals", nullptr));
        btnClose->setText(QCoreApplication::translate("ProposalResume", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProposalResume: public Ui_ProposalResume {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPOSALRESUME_H
