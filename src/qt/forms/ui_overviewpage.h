/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/transactionoverviewwidget.h"

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacerLeft;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *labelWatchPending;
    QLabel *labelUnconfirmed;
    QLabel *labelWatchImmature;
    QFrame *lineSpendableBalance;
    QFrame *lineWatchBalance;
    QLabel *labelTotalText;
    QLabel *labelImmature;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelImmatureText;
    QLabel *labelTotal;
    QLabel *labelWatchTotal;
    QLabel *labelWatchonly;
    QLabel *labelBalanceText;
    QLabel *labelBalance;
    QLabel *labelWatchAvailable;
    QLabel *labelPendingText;
    QLabel *labelSpendable;
    QFrame *frameCoinJoin;
    QVBoxLayout *VerticalLayout_PS1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelCoinJoinHeader;
    QLabel *labelCoinJoinSyncStatus;
    QSpacerItem *horizontalSpacer_4;
    QFormLayout *coinJoinFormLayout;
    QLabel *labelCoinJoinEnabledText;
    QLabel *labelCoinJoinEnabled;
    QLabel *labelCompletitionText;
    QProgressBar *coinJoinProgress;
    QLabel *labelAnonymizedText;
    QLabel *labelAnonymized;
    QLabel *labelAmountAndRoundsText;
    QLabel *labelAmountRounds;
    QLabel *labelSubmittedDenomText;
    QLabel *labelSubmittedDenom;
    QVBoxLayout *VerticalLayout_PS;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *toggleCoinJoin;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacerCenter;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    TransactionOverviewWidget *listTransactions;
    QSpacerItem *horizontalSpacerRight;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(798, 318);
        OverviewPage->setMinimumSize(QSize(960, 0));
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QString::fromUtf8("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);
        labelAlerts->setTextInteractionFlags(Qt::TextSelectableByMouse);

        topLayout->addWidget(labelAlerts);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacerLeft = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacerLeft);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(frame);
        labelWalletStatus->setObjectName(QString::fromUtf8("labelWalletStatus"));
        labelWalletStatus->setText(QString::fromUtf8("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelWatchPending = new QLabel(frame);
        labelWatchPending->setObjectName(QString::fromUtf8("labelWatchPending"));
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QString::fromUtf8("0.00000000 BTC"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 2, 2, 1, 1);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.00000000 BTC"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 2, 1, 1, 1);

        labelWatchImmature = new QLabel(frame);
        labelWatchImmature->setObjectName(QString::fromUtf8("labelWatchImmature"));
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.00000000 BTC"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 3, 2, 1, 1);

        lineSpendableBalance = new QFrame(frame);
        lineSpendableBalance->setObjectName(QString::fromUtf8("lineSpendableBalance"));
        lineSpendableBalance->setFrameShape(QFrame::HLine);
        lineSpendableBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineSpendableBalance, 4, 0, 1, 2);

        lineWatchBalance = new QFrame(frame);
        lineWatchBalance->setObjectName(QString::fromUtf8("lineWatchBalance"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineWatchBalance->sizePolicy().hasHeightForWidth());
        lineWatchBalance->setSizePolicy(sizePolicy);
        lineWatchBalance->setMinimumSize(QSize(140, 0));
        lineWatchBalance->setFrameShape(QFrame::HLine);
        lineWatchBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineWatchBalance, 4, 2, 1, 1);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName(QString::fromUtf8("labelTotalText"));

        gridLayout->addWidget(labelTotalText, 5, 0, 1, 1);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QString::fromUtf8("labelImmature"));
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.00000000 BTC"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QString::fromUtf8("labelImmatureText"));

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("21 000 000.00000000 BTC"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 5, 1, 1, 1);

        labelWatchTotal = new QLabel(frame);
        labelWatchTotal->setObjectName(QString::fromUtf8("labelWatchTotal"));
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QString::fromUtf8("21 000 000.00000000 BTC"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 5, 2, 1, 1);

        labelWatchonly = new QLabel(frame);
        labelWatchonly->setObjectName(QString::fromUtf8("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 2, 1, 1);

        labelBalanceText = new QLabel(frame);
        labelBalanceText->setObjectName(QString::fromUtf8("labelBalanceText"));

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("21 000 000.00000000 BTC"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 1, 1, 1, 1);

        labelWatchAvailable = new QLabel(frame);
        labelWatchAvailable->setObjectName(QString::fromUtf8("labelWatchAvailable"));
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QString::fromUtf8("21 000 000.00000000 BTC"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 1, 2, 1, 1);

        labelPendingText = new QLabel(frame);
        labelPendingText->setObjectName(QString::fromUtf8("labelPendingText"));

        gridLayout->addWidget(labelPendingText, 2, 0, 1, 1);

        labelSpendable = new QLabel(frame);
        labelSpendable->setObjectName(QString::fromUtf8("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_2->addWidget(frame);

        frameCoinJoin = new QFrame(OverviewPage);
        frameCoinJoin->setObjectName(QString::fromUtf8("frameCoinJoin"));
        frameCoinJoin->setLayoutDirection(Qt::LeftToRight);
        frameCoinJoin->setFrameShape(QFrame::StyledPanel);
        frameCoinJoin->setFrameShadow(QFrame::Raised);
        VerticalLayout_PS1 = new QVBoxLayout(frameCoinJoin);
        VerticalLayout_PS1->setObjectName(QString::fromUtf8("VerticalLayout_PS1"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelCoinJoinHeader = new QLabel(frameCoinJoin);
        labelCoinJoinHeader->setObjectName(QString::fromUtf8("labelCoinJoinHeader"));
        labelCoinJoinHeader->setText(QString::fromUtf8("CoinJoin"));

        horizontalLayout_5->addWidget(labelCoinJoinHeader);

        labelCoinJoinSyncStatus = new QLabel(frameCoinJoin);
        labelCoinJoinSyncStatus->setObjectName(QString::fromUtf8("labelCoinJoinSyncStatus"));
        labelCoinJoinSyncStatus->setText(QString::fromUtf8("(out of sync)"));
        labelCoinJoinSyncStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(labelCoinJoinSyncStatus);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        VerticalLayout_PS1->addLayout(horizontalLayout_5);

        coinJoinFormLayout = new QFormLayout();
        coinJoinFormLayout->setObjectName(QString::fromUtf8("coinJoinFormLayout"));
        coinJoinFormLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        coinJoinFormLayout->setHorizontalSpacing(11);
        coinJoinFormLayout->setVerticalSpacing(12);
        labelCoinJoinEnabledText = new QLabel(frameCoinJoin);
        labelCoinJoinEnabledText->setObjectName(QString::fromUtf8("labelCoinJoinEnabledText"));

        coinJoinFormLayout->setWidget(0, QFormLayout::LabelRole, labelCoinJoinEnabledText);

        labelCoinJoinEnabled = new QLabel(frameCoinJoin);
        labelCoinJoinEnabled->setObjectName(QString::fromUtf8("labelCoinJoinEnabled"));

        coinJoinFormLayout->setWidget(0, QFormLayout::FieldRole, labelCoinJoinEnabled);

        labelCompletitionText = new QLabel(frameCoinJoin);
        labelCompletitionText->setObjectName(QString::fromUtf8("labelCompletitionText"));

        coinJoinFormLayout->setWidget(1, QFormLayout::LabelRole, labelCompletitionText);

        coinJoinProgress = new QProgressBar(frameCoinJoin);
        coinJoinProgress->setObjectName(QString::fromUtf8("coinJoinProgress"));
        coinJoinProgress->setMaximumSize(QSize(154, 16777215));
        coinJoinProgress->setValue(0);

        coinJoinFormLayout->setWidget(1, QFormLayout::FieldRole, coinJoinProgress);

        labelAnonymizedText = new QLabel(frameCoinJoin);
        labelAnonymizedText->setObjectName(QString::fromUtf8("labelAnonymizedText"));
        labelAnonymizedText->setText(QString::fromUtf8("CoinJoin Balance:"));

        coinJoinFormLayout->setWidget(2, QFormLayout::LabelRole, labelAnonymizedText);

        labelAnonymized = new QLabel(frameCoinJoin);
        labelAnonymized->setObjectName(QString::fromUtf8("labelAnonymized"));
        labelAnonymized->setText(QString::fromUtf8("0 DASH"));

        coinJoinFormLayout->setWidget(2, QFormLayout::FieldRole, labelAnonymized);

        labelAmountAndRoundsText = new QLabel(frameCoinJoin);
        labelAmountAndRoundsText->setObjectName(QString::fromUtf8("labelAmountAndRoundsText"));

        coinJoinFormLayout->setWidget(3, QFormLayout::LabelRole, labelAmountAndRoundsText);

        labelAmountRounds = new QLabel(frameCoinJoin);
        labelAmountRounds->setObjectName(QString::fromUtf8("labelAmountRounds"));

        coinJoinFormLayout->setWidget(3, QFormLayout::FieldRole, labelAmountRounds);

        labelSubmittedDenomText = new QLabel(frameCoinJoin);
        labelSubmittedDenomText->setObjectName(QString::fromUtf8("labelSubmittedDenomText"));

        coinJoinFormLayout->setWidget(4, QFormLayout::LabelRole, labelSubmittedDenomText);

        labelSubmittedDenom = new QLabel(frameCoinJoin);
        labelSubmittedDenom->setObjectName(QString::fromUtf8("labelSubmittedDenom"));
        labelSubmittedDenom->setWordWrap(true);

        coinJoinFormLayout->setWidget(4, QFormLayout::FieldRole, labelSubmittedDenom);


        VerticalLayout_PS1->addLayout(coinJoinFormLayout);

        VerticalLayout_PS = new QVBoxLayout();
        VerticalLayout_PS->setObjectName(QString::fromUtf8("VerticalLayout_PS"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        toggleCoinJoin = new QPushButton(frameCoinJoin);
        toggleCoinJoin->setObjectName(QString::fromUtf8("toggleCoinJoin"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toggleCoinJoin->sizePolicy().hasHeightForWidth());
        toggleCoinJoin->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(toggleCoinJoin);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        VerticalLayout_PS->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        VerticalLayout_PS->addItem(verticalSpacer_3);


        VerticalLayout_PS1->addLayout(VerticalLayout_PS);


        verticalLayout_2->addWidget(frameCoinJoin);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacerCenter = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacerCenter);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QString::fromUtf8("labelTransactionsStatus"));
        labelTransactionsStatus->setText(QString::fromUtf8("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new TransactionOverviewWidget(frame_2);
        listTransactions->setObjectName(QString::fromUtf8("listTransactions"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);
        listTransactions->setUniformItemSizes(true);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacerRight = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacerRight);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(4, 1);

        topLayout->addLayout(horizontalLayout);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QCoreApplication::translate("OverviewPage", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("OverviewPage", "Balances", nullptr));
#if QT_CONFIG(tooltip)
        labelWalletStatus->setToolTip(QCoreApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Vivo network after a connection is established, but this process has not completed yet.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        labelWatchPending->setToolTip(QCoreApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        labelUnconfirmed->setToolTip(QCoreApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        labelWatchImmature->setToolTip(QCoreApplication::translate("OverviewPage", "Mined balance in watch-only addresses that has not yet matured", nullptr));
#endif // QT_CONFIG(tooltip)
        labelTotalText->setText(QCoreApplication::translate("OverviewPage", "Total:", nullptr));
#if QT_CONFIG(tooltip)
        labelImmature->setToolTip(QCoreApplication::translate("OverviewPage", "Mined balance that has not yet matured", nullptr));
#endif // QT_CONFIG(tooltip)
        labelImmatureText->setText(QCoreApplication::translate("OverviewPage", "Immature:", nullptr));
#if QT_CONFIG(tooltip)
        labelTotal->setToolTip(QCoreApplication::translate("OverviewPage", "Your current total balance", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        labelWatchTotal->setToolTip(QCoreApplication::translate("OverviewPage", "Current total balance in watch-only addresses", nullptr));
#endif // QT_CONFIG(tooltip)
        labelWatchonly->setText(QCoreApplication::translate("OverviewPage", "Watch-only:", nullptr));
        labelBalanceText->setText(QCoreApplication::translate("OverviewPage", "Available:", nullptr));
#if QT_CONFIG(tooltip)
        labelBalance->setToolTip(QCoreApplication::translate("OverviewPage", "Your current spendable balance", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        labelWatchAvailable->setToolTip(QCoreApplication::translate("OverviewPage", "Your current balance in watch-only addresses", nullptr));
#endif // QT_CONFIG(tooltip)
        labelPendingText->setText(QCoreApplication::translate("OverviewPage", "Pending:", nullptr));
        labelSpendable->setText(QCoreApplication::translate("OverviewPage", "Spendable:", nullptr));
#if QT_CONFIG(tooltip)
        labelCoinJoinSyncStatus->setToolTip(QCoreApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Vivo network after a connection is established, but this process has not completed yet.", nullptr));
#endif // QT_CONFIG(tooltip)
        labelCoinJoinEnabledText->setText(QCoreApplication::translate("OverviewPage", "Status:", nullptr));
        labelCoinJoinEnabled->setText(QCoreApplication::translate("OverviewPage", "Enabled/Disabled", nullptr));
        labelCompletitionText->setText(QCoreApplication::translate("OverviewPage", "Completion:", nullptr));
        labelAmountAndRoundsText->setText(QCoreApplication::translate("OverviewPage", "Amount and Rounds:", nullptr));
        labelAmountRounds->setText(QCoreApplication::translate("OverviewPage", "0 DASH / 0 Rounds", nullptr));
        labelSubmittedDenomText->setText(QCoreApplication::translate("OverviewPage", "Submitted Denom:", nullptr));
#if QT_CONFIG(tooltip)
        labelSubmittedDenom->setToolTip(QCoreApplication::translate("OverviewPage", "The denominations you submitted to the Masternode.<br>To mix, other users must submit the exact same denominations.", nullptr));
#endif // QT_CONFIG(tooltip)
        labelSubmittedDenom->setText(QCoreApplication::translate("OverviewPage", "n/a", nullptr));
        toggleCoinJoin->setText(QCoreApplication::translate("OverviewPage", "Start/Stop Mixing", nullptr));
        label_4->setText(QCoreApplication::translate("OverviewPage", "Recent transactions", nullptr));
#if QT_CONFIG(tooltip)
        labelTransactionsStatus->setToolTip(QCoreApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Vivo network after a connection is established, but this process has not completed yet.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
