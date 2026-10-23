/********************************************************************************
** Form generated from reading UI file 'networkwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKWIDGET_H
#define UI_NETWORKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetworkWidget
{
public:
    QVBoxLayout *mainVerticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *leftGridLayout;
    QLabel *labelCreditPool;
    QLabel *labelCrLastBlockTitle;
    QLabel *labelCrLastBlock;
    QLabel *labelCrLockedTitle;
    QLabel *labelCrLocked;
    QLabel *labelCrPendingTitle;
    QLabel *labelCrPending;
    QLabel *labelCrLimitTitle;
    QLabel *labelCrLimit;
    QLabel *labelInstantSend;
    QLabel *labelISLocksTitle;
    QLabel *labelISLocks;
    QLabel *labelISPendingTitle;
    QLabel *labelISPending;
    QLabel *labelISWaitingTitle;
    QLabel *labelISWaiting;
    QLabel *labelISUnprotectedTitle;
    QLabel *labelISUnprotected;
    QLabel *labelMasternodes;
    QLabel *masternodeCountLabel;
    QLabel *masternodeCount;
    QLabel *evoCountLabel;
    QLabel *evoCount;
    QLabel *labelChainLocks;
    QLabel *bestClHeightLabel;
    QLabel *bestClHeight;
    QLabel *bestClTimeLabel;
    QLabel *bestClTime;
    QLabel *bestClHashLabel;
    QLabel *bestClHash;
    QSpacerItem *leftVerticalSpacer;
    QGridLayout *rightGridLayout;
    QLabel *labelQuorums;
    QSpacerItem *rightVerticalSpacer;

    void setupUi(QWidget *NetworkWidget)
    {
        if (NetworkWidget->objectName().isEmpty())
            NetworkWidget->setObjectName(QString::fromUtf8("NetworkWidget"));
        NetworkWidget->resize(700, 500);
        mainVerticalLayout = new QVBoxLayout(NetworkWidget);
        mainVerticalLayout->setObjectName(QString::fromUtf8("mainVerticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftGridLayout = new QGridLayout();
        leftGridLayout->setObjectName(QString::fromUtf8("leftGridLayout"));
        leftGridLayout->setHorizontalSpacing(12);
        labelCreditPool = new QLabel(NetworkWidget);
        labelCreditPool->setObjectName(QString::fromUtf8("labelCreditPool"));

        leftGridLayout->addWidget(labelCreditPool, 0, 0, 1, 1);

        labelCrLastBlockTitle = new QLabel(NetworkWidget);
        labelCrLastBlockTitle->setObjectName(QString::fromUtf8("labelCrLastBlockTitle"));

        leftGridLayout->addWidget(labelCrLastBlockTitle, 1, 0, 1, 1);

        labelCrLastBlock = new QLabel(NetworkWidget);
        labelCrLastBlock->setObjectName(QString::fromUtf8("labelCrLastBlock"));
        labelCrLastBlock->setCursor(QCursor(Qt::IBeamCursor));
        labelCrLastBlock->setTextFormat(Qt::PlainText);
        labelCrLastBlock->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        leftGridLayout->addWidget(labelCrLastBlock, 1, 1, 1, 1);

        labelCrLockedTitle = new QLabel(NetworkWidget);
        labelCrLockedTitle->setObjectName(QString::fromUtf8("labelCrLockedTitle"));

        leftGridLayout->addWidget(labelCrLockedTitle, 2, 0, 1, 1);

        labelCrLocked = new QLabel(NetworkWidget);
        labelCrLocked->setObjectName(QString::fromUtf8("labelCrLocked"));
        labelCrLocked->setCursor(QCursor(Qt::IBeamCursor));
        labelCrLocked->setTextFormat(Qt::PlainText);
        labelCrLocked->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        leftGridLayout->addWidget(labelCrLocked, 2, 1, 1, 1);

        labelCrPendingTitle = new QLabel(NetworkWidget);
        labelCrPendingTitle->setObjectName(QString::fromUtf8("labelCrPendingTitle"));

        leftGridLayout->addWidget(labelCrPendingTitle, 3, 0, 1, 1);

        labelCrPending = new QLabel(NetworkWidget);
        labelCrPending->setObjectName(QString::fromUtf8("labelCrPending"));
        labelCrPending->setCursor(QCursor(Qt::IBeamCursor));
        labelCrPending->setTextFormat(Qt::PlainText);
        labelCrPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        leftGridLayout->addWidget(labelCrPending, 3, 1, 1, 1);

        labelCrLimitTitle = new QLabel(NetworkWidget);
        labelCrLimitTitle->setObjectName(QString::fromUtf8("labelCrLimitTitle"));

        leftGridLayout->addWidget(labelCrLimitTitle, 4, 0, 1, 1);

        labelCrLimit = new QLabel(NetworkWidget);
        labelCrLimit->setObjectName(QString::fromUtf8("labelCrLimit"));
        labelCrLimit->setCursor(QCursor(Qt::IBeamCursor));
        labelCrLimit->setTextFormat(Qt::PlainText);
        labelCrLimit->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        leftGridLayout->addWidget(labelCrLimit, 4, 1, 1, 1);

        labelInstantSend = new QLabel(NetworkWidget);
        labelInstantSend->setObjectName(QString::fromUtf8("labelInstantSend"));

        leftGridLayout->addWidget(labelInstantSend, 5, 0, 1, 1);

        labelISLocksTitle = new QLabel(NetworkWidget);
        labelISLocksTitle->setObjectName(QString::fromUtf8("labelISLocksTitle"));

        leftGridLayout->addWidget(labelISLocksTitle, 6, 0, 1, 1);

        labelISLocks = new QLabel(NetworkWidget);
        labelISLocks->setObjectName(QString::fromUtf8("labelISLocks"));
        labelISLocks->setCursor(QCursor(Qt::IBeamCursor));
        labelISLocks->setTextFormat(Qt::PlainText);
        labelISLocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        leftGridLayout->addWidget(labelISLocks, 6, 1, 1, 1);

        labelISPendingTitle = new QLabel(NetworkWidget);
        labelISPendingTitle->setObjectName(QString::fromUtf8("labelISPendingTitle"));

        leftGridLayout->addWidget(labelISPendingTitle, 7, 0, 1, 1);

        labelISPending = new QLabel(NetworkWidget);
        labelISPending->setObjectName(QString::fromUtf8("labelISPending"));
        labelISPending->setCursor(QCursor(Qt::IBeamCursor));
        labelISPending->setTextFormat(Qt::PlainText);
        labelISPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        leftGridLayout->addWidget(labelISPending, 7, 1, 1, 1);

        labelISWaitingTitle = new QLabel(NetworkWidget);
        labelISWaitingTitle->setObjectName(QString::fromUtf8("labelISWaitingTitle"));

        leftGridLayout->addWidget(labelISWaitingTitle, 8, 0, 1, 1);

        labelISWaiting = new QLabel(NetworkWidget);
        labelISWaiting->setObjectName(QString::fromUtf8("labelISWaiting"));
        labelISWaiting->setCursor(QCursor(Qt::IBeamCursor));
        labelISWaiting->setTextFormat(Qt::PlainText);
        labelISWaiting->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        leftGridLayout->addWidget(labelISWaiting, 8, 1, 1, 1);

        labelISUnprotectedTitle = new QLabel(NetworkWidget);
        labelISUnprotectedTitle->setObjectName(QString::fromUtf8("labelISUnprotectedTitle"));

        leftGridLayout->addWidget(labelISUnprotectedTitle, 9, 0, 1, 1);

        labelISUnprotected = new QLabel(NetworkWidget);
        labelISUnprotected->setObjectName(QString::fromUtf8("labelISUnprotected"));
        labelISUnprotected->setCursor(QCursor(Qt::IBeamCursor));
        labelISUnprotected->setTextFormat(Qt::PlainText);
        labelISUnprotected->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        leftGridLayout->addWidget(labelISUnprotected, 9, 1, 1, 1);

        labelMasternodes = new QLabel(NetworkWidget);
        labelMasternodes->setObjectName(QString::fromUtf8("labelMasternodes"));

        leftGridLayout->addWidget(labelMasternodes, 10, 0, 1, 1);

        masternodeCountLabel = new QLabel(NetworkWidget);
        masternodeCountLabel->setObjectName(QString::fromUtf8("masternodeCountLabel"));

        leftGridLayout->addWidget(masternodeCountLabel, 11, 0, 1, 1);

        masternodeCount = new QLabel(NetworkWidget);
        masternodeCount->setObjectName(QString::fromUtf8("masternodeCount"));
        masternodeCount->setCursor(QCursor(Qt::IBeamCursor));
        masternodeCount->setTextFormat(Qt::PlainText);
        masternodeCount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        leftGridLayout->addWidget(masternodeCount, 11, 1, 1, 1);

        evoCountLabel = new QLabel(NetworkWidget);
        evoCountLabel->setObjectName(QString::fromUtf8("evoCountLabel"));

        leftGridLayout->addWidget(evoCountLabel, 12, 0, 1, 1);

        evoCount = new QLabel(NetworkWidget);
        evoCount->setObjectName(QString::fromUtf8("evoCount"));
        evoCount->setCursor(QCursor(Qt::IBeamCursor));
        evoCount->setTextFormat(Qt::PlainText);
        evoCount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        leftGridLayout->addWidget(evoCount, 12, 1, 1, 1);

        labelChainLocks = new QLabel(NetworkWidget);
        labelChainLocks->setObjectName(QString::fromUtf8("labelChainLocks"));

        leftGridLayout->addWidget(labelChainLocks, 13, 0, 1, 1);

        bestClHeightLabel = new QLabel(NetworkWidget);
        bestClHeightLabel->setObjectName(QString::fromUtf8("bestClHeightLabel"));

        leftGridLayout->addWidget(bestClHeightLabel, 14, 0, 1, 1);

        bestClHeight = new QLabel(NetworkWidget);
        bestClHeight->setObjectName(QString::fromUtf8("bestClHeight"));
        bestClHeight->setCursor(QCursor(Qt::IBeamCursor));
        bestClHeight->setTextFormat(Qt::PlainText);
        bestClHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        leftGridLayout->addWidget(bestClHeight, 14, 1, 1, 1);

        bestClTimeLabel = new QLabel(NetworkWidget);
        bestClTimeLabel->setObjectName(QString::fromUtf8("bestClTimeLabel"));

        leftGridLayout->addWidget(bestClTimeLabel, 15, 0, 1, 1);

        bestClTime = new QLabel(NetworkWidget);
        bestClTime->setObjectName(QString::fromUtf8("bestClTime"));
        bestClTime->setCursor(QCursor(Qt::IBeamCursor));
        bestClTime->setTextFormat(Qt::PlainText);
        bestClTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        leftGridLayout->addWidget(bestClTime, 15, 1, 1, 1);

        bestClHashLabel = new QLabel(NetworkWidget);
        bestClHashLabel->setObjectName(QString::fromUtf8("bestClHashLabel"));

        leftGridLayout->addWidget(bestClHashLabel, 16, 0, 1, 1);

        bestClHash = new QLabel(NetworkWidget);
        bestClHash->setObjectName(QString::fromUtf8("bestClHash"));
        bestClHash->setCursor(QCursor(Qt::IBeamCursor));
        bestClHash->setTextFormat(Qt::PlainText);
        bestClHash->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        leftGridLayout->addWidget(bestClHash, 16, 1, 1, 1);

        leftVerticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        leftGridLayout->addItem(leftVerticalSpacer, 17, 0, 1, 1);

        leftGridLayout->setColumnStretch(1, 1);

        horizontalLayout->addLayout(leftGridLayout);

        rightGridLayout = new QGridLayout();
        rightGridLayout->setObjectName(QString::fromUtf8("rightGridLayout"));
        rightGridLayout->setHorizontalSpacing(12);
        labelQuorums = new QLabel(NetworkWidget);
        labelQuorums->setObjectName(QString::fromUtf8("labelQuorums"));

        rightGridLayout->addWidget(labelQuorums, 0, 0, 1, 1);

        rightVerticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        rightGridLayout->addItem(rightVerticalSpacer, 100, 0, 1, 1);

        rightGridLayout->setColumnStretch(1, 1);

        horizontalLayout->addLayout(rightGridLayout);


        mainVerticalLayout->addLayout(horizontalLayout);


        retranslateUi(NetworkWidget);

        QMetaObject::connectSlotsByName(NetworkWidget);
    } // setupUi

    void retranslateUi(QWidget *NetworkWidget)
    {
        labelCreditPool->setText(QCoreApplication::translate("NetworkWidget", "Credit Pool", nullptr));
        labelCrLastBlockTitle->setText(QCoreApplication::translate("NetworkWidget", "Last block change", nullptr));
        labelCrLastBlock->setText(QCoreApplication::translate("NetworkWidget", "N/A", nullptr));
        labelCrLockedTitle->setText(QCoreApplication::translate("NetworkWidget", "Total locked", nullptr));
        labelCrLocked->setText(QCoreApplication::translate("NetworkWidget", "N/A", nullptr));
        labelCrPendingTitle->setText(QCoreApplication::translate("NetworkWidget", "Pending unlocks", nullptr));
        labelCrPending->setText(QCoreApplication::translate("NetworkWidget", "N/A", nullptr));
        labelCrLimitTitle->setText(QCoreApplication::translate("NetworkWidget", "Withdrawal limit", nullptr));
        labelCrLimit->setText(QCoreApplication::translate("NetworkWidget", "N/A", nullptr));
        labelInstantSend->setText(QCoreApplication::translate("NetworkWidget", "InstantSend", nullptr));
        labelISLocksTitle->setText(QCoreApplication::translate("NetworkWidget", "Verified locks", nullptr));
        labelISLocks->setText(QCoreApplication::translate("NetworkWidget", "N/A", nullptr));
        labelISPendingTitle->setText(QCoreApplication::translate("NetworkWidget", "Unverified locks", nullptr));
        labelISPending->setText(QCoreApplication::translate("NetworkWidget", "N/A", nullptr));
        labelISWaitingTitle->setText(QCoreApplication::translate("NetworkWidget", "Locks awaiting transaction", nullptr));
        labelISWaiting->setText(QCoreApplication::translate("NetworkWidget", "N/A", nullptr));
        labelISUnprotectedTitle->setText(QCoreApplication::translate("NetworkWidget", "Unprotected transactions", nullptr));
        labelISUnprotected->setText(QCoreApplication::translate("NetworkWidget", "N/A", nullptr));
        labelMasternodes->setText(QCoreApplication::translate("NetworkWidget", "Masternodes", nullptr));
        masternodeCountLabel->setText(QCoreApplication::translate("NetworkWidget", "Masternode count", nullptr));
        masternodeCount->setText(QCoreApplication::translate("NetworkWidget", "N/A", nullptr));
        evoCountLabel->setText(QCoreApplication::translate("NetworkWidget", "EvoNode count", nullptr));
        evoCount->setText(QCoreApplication::translate("NetworkWidget", "N/A", nullptr));
        labelChainLocks->setText(QCoreApplication::translate("NetworkWidget", "ChainLocks", nullptr));
        bestClHeightLabel->setText(QCoreApplication::translate("NetworkWidget", "Current block height", nullptr));
        bestClHeight->setText(QCoreApplication::translate("NetworkWidget", "N/A", nullptr));
        bestClTimeLabel->setText(QCoreApplication::translate("NetworkWidget", "Last block time", nullptr));
        bestClTime->setText(QCoreApplication::translate("NetworkWidget", "N/A", nullptr));
        bestClHashLabel->setText(QCoreApplication::translate("NetworkWidget", "Last block hash", nullptr));
        bestClHash->setText(QCoreApplication::translate("NetworkWidget", "N/A", nullptr));
        labelQuorums->setText(QCoreApplication::translate("NetworkWidget", "Quorums", nullptr));
        (void)NetworkWidget;
    } // retranslateUi

};

namespace Ui {
    class NetworkWidget: public Ui_NetworkWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKWIDGET_H
