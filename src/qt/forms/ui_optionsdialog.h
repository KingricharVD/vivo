/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/qvalidatedlineedit.h"
#include "qt/qvaluecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_Buttons_2;
    QPushButton *btnMain;
    QPushButton *btnWallet;
    QPushButton *btnCoinJoin;
    QPushButton *btnNetwork;
    QPushButton *btnDisplay;
    QPushButton *btnAppearance;
    QStackedWidget *stackedWidgetOptions;
    QWidget *pageMain;
    QVBoxLayout *verticalLayout_Main;
    QCheckBox *bitcoinAtStartup;
    QSpacerItem *horizontalSpacer_0_Main;
    QCheckBox *showTrayIcon;
    QCheckBox *minimizeToTray;
    QCheckBox *minimizeOnClose;
    QHBoxLayout *horizontalLayout_Main_Prune;
    QCheckBox *prune;
    QSpinBox *pruneSize;
    QLabel *pruneSizeUnitLabel;
    QSpacerItem *horizontalSpacer_Main_Prune;
    QLabel *pruneWarning;
    QHBoxLayout *horizontalLayout_2_Main;
    QLabel *databaseCacheLabel;
    QSpinBox *databaseCache;
    QLabel *databaseCacheUnitLabel;
    QSpacerItem *horizontalSpacer_2_Main;
    QHBoxLayout *horizontalLayout_Main_VerifyLabel;
    QLabel *threadsScriptVerifLabel;
    QSpinBox *threadsScriptVerif;
    QSpacerItem *horizontalSpacer_Main_Threads;
    QCheckBox *enableServer;
    QSpacerItem *verticalSpacer_Main;
    QWidget *pageWallet;
    QVBoxLayout *verticalLayout_Wallet;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *subFeeFromAmount;
    QCheckBox *coinControlFeatures;
    QCheckBox *m_enable_psbt_controls;
    QCheckBox *keepChangeAddress;
    QCheckBox *spendZeroConfChange;
    QCheckBox *coinJoinEnabled;
    QCheckBox *dustProtection;
    QHBoxLayout *horizontalLayoutDustThreshold;
    QLabel *dustThresholdLabel;
    QSpinBox *dustProtectionThreshold;
    QLabel *dustProtectionThresholdUnitLabel;
    QSpacerItem *horizontalSpacerDustThreshold;
    QGroupBox *groupBoxHww;
    QVBoxLayout *verticalLayoutHww;
    QHBoxLayout *horizontalLayoutHww;
    QLabel *externalSignerPathLabel;
    QLineEdit *externalSignerPath;
    QSpacerItem *verticalSpacer_Wallet;
    QWidget *pageCoinJoin;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *showAdvancedCJUI;
    QCheckBox *showCoinJoinPopups;
    QCheckBox *lowKeysWarning;
    QCheckBox *coinJoinMultiSession;
    QGridLayout *gridLayout;
    QLabel *lblCoinJoinSessionsText;
    QSpinBox *coinJoinSessions;
    QLabel *lblCoinJoinRoundsText;
    QSpinBox *coinJoinRounds;
    QLabel *lblCoinJoinAmountText;
    QSpinBox *coinJoinAmount;
    QLabel *lblCoinJoinDenoms;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    QLabel *lblCoinJoinDenomsTarget;
    QSpinBox *coinJoinDenomsGoal;
    QVBoxLayout *vboxLayout1;
    QLabel *lblCoinJoinDenomsMaximum;
    QSpinBox *coinJoinDenomsHardCap;
    QSpacerItem *verticalSpacerPS;
    QWidget *pageNetwork;
    QVBoxLayout *verticalLayout_Network;
    QCheckBox *mapPortUpnp;
    QCheckBox *mapPortNatpmp;
    QCheckBox *allowIncoming;
    QCheckBox *connectSocks;
    QHBoxLayout *horizontalLayout_1_Network;
    QLabel *proxyIpLabel;
    QValidatedLineEdit *proxyIp;
    QLabel *proxyPortLabel;
    QLineEdit *proxyPort;
    QSpacerItem *horizontalSpacer_1_Network;
    QHBoxLayout *horizontalLayout_2_Network;
    QLabel *proxyActiveNets;
    QCheckBox *proxyReachIPv4;
    QCheckBox *proxyReachIPv6;
    QCheckBox *proxyReachTor;
    QSpacerItem *horizontalSpacer_2_Network;
    QCheckBox *connectSocksTor;
    QHBoxLayout *horizontalLayout_3_Network;
    QLabel *proxyIpTorLabel;
    QValidatedLineEdit *proxyIpTor;
    QLabel *proxyPortTorLabel;
    QLineEdit *proxyPortTor;
    QSpacerItem *horizontalSpacer_4_Network;
    QSpacerItem *verticalSpacer_Network;
    QWidget *pageDisplay;
    QVBoxLayout *verticalLayout_Display;
    QHBoxLayout *horizontalLayout_1_Display;
    QLabel *langLabel;
    QValueComboBox *lang;
    QLabel *label_3;
    QFrame *line;
    QCheckBox *showMasternodesTab;
    QCheckBox *showGovernanceTab;
    QHBoxLayout *horizontalLayout_govCycleIcon;
    QSpacerItem *govCycleIconIndent;
    QCheckBox *showGovernanceCycleIcon;
    QHBoxLayout *horizontalLayout_2_Display;
    QLabel *unitLabel;
    QValueComboBox *unit;
    QHBoxLayout *horizontalLayout_5_Display;
    QLabel *digitsLabel;
    QValueComboBox *digits;
    QHBoxLayout *horizontalLayout_3_Display;
    QLabel *thirdPartyTxUrlsLabel;
    QLineEdit *thirdPartyTxUrls;
    QSpacerItem *verticalSpacer;
    QWidget *pageAppearance;
    QVBoxLayout *verticalLayout_3;
    QWidget *widgetAppearance;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_Bottom;
    QHBoxLayout *horizontalLayout_Bottom;
    QLabel *overriddenByCommandLineInfoLabel;
    QSpacerItem *horizontalSpacer_Bottom;
    QLabel *overriddenByCommandLineLabel;
    QHBoxLayout *horizontalLayout_Buttons;
    QPushButton *resetButton;
    QSpacerItem *horizontalSpacer_1;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QString::fromUtf8("OptionsDialog"));
        OptionsDialog->resize(583, 420);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OptionsDialog->sizePolicy().hasHeightForWidth());
        OptionsDialog->setSizePolicy(sizePolicy);
        OptionsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(OptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_Buttons_2 = new QHBoxLayout();
        horizontalLayout_Buttons_2->setSpacing(0);
        horizontalLayout_Buttons_2->setObjectName(QString::fromUtf8("horizontalLayout_Buttons_2"));
        horizontalLayout_Buttons_2->setContentsMargins(-1, 0, -1, -1);
        btnMain = new QPushButton(OptionsDialog);
        btnMain->setObjectName(QString::fromUtf8("btnMain"));
        btnMain->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnMain);

        btnWallet = new QPushButton(OptionsDialog);
        btnWallet->setObjectName(QString::fromUtf8("btnWallet"));
        btnWallet->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnWallet);

        btnCoinJoin = new QPushButton(OptionsDialog);
        btnCoinJoin->setObjectName(QString::fromUtf8("btnCoinJoin"));
        btnCoinJoin->setText(QString::fromUtf8("CoinJoin"));
        btnCoinJoin->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnCoinJoin);

        btnNetwork = new QPushButton(OptionsDialog);
        btnNetwork->setObjectName(QString::fromUtf8("btnNetwork"));
        btnNetwork->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnNetwork);

        btnDisplay = new QPushButton(OptionsDialog);
        btnDisplay->setObjectName(QString::fromUtf8("btnDisplay"));
        btnDisplay->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnDisplay);

        btnAppearance = new QPushButton(OptionsDialog);
        btnAppearance->setObjectName(QString::fromUtf8("btnAppearance"));
        btnAppearance->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnAppearance);


        verticalLayout->addLayout(horizontalLayout_Buttons_2);

        stackedWidgetOptions = new QStackedWidget(OptionsDialog);
        stackedWidgetOptions->setObjectName(QString::fromUtf8("stackedWidgetOptions"));
        stackedWidgetOptions->setMinimumSize(QSize(0, 0));
        pageMain = new QWidget();
        pageMain->setObjectName(QString::fromUtf8("pageMain"));
        verticalLayout_Main = new QVBoxLayout(pageMain);
        verticalLayout_Main->setObjectName(QString::fromUtf8("verticalLayout_Main"));
        bitcoinAtStartup = new QCheckBox(pageMain);
        bitcoinAtStartup->setObjectName(QString::fromUtf8("bitcoinAtStartup"));

        verticalLayout_Main->addWidget(bitcoinAtStartup);

        horizontalSpacer_0_Main = new QSpacerItem(40, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_Main->addItem(horizontalSpacer_0_Main);

        showTrayIcon = new QCheckBox(pageMain);
        showTrayIcon->setObjectName(QString::fromUtf8("showTrayIcon"));
        showTrayIcon->setChecked(true);

        verticalLayout_Main->addWidget(showTrayIcon);

        minimizeToTray = new QCheckBox(pageMain);
        minimizeToTray->setObjectName(QString::fromUtf8("minimizeToTray"));

        verticalLayout_Main->addWidget(minimizeToTray);

        minimizeOnClose = new QCheckBox(pageMain);
        minimizeOnClose->setObjectName(QString::fromUtf8("minimizeOnClose"));

        verticalLayout_Main->addWidget(minimizeOnClose);

        horizontalLayout_Main_Prune = new QHBoxLayout();
        horizontalLayout_Main_Prune->setObjectName(QString::fromUtf8("horizontalLayout_Main_Prune"));
        prune = new QCheckBox(pageMain);
        prune->setObjectName(QString::fromUtf8("prune"));

        horizontalLayout_Main_Prune->addWidget(prune);

        pruneSize = new QSpinBox(pageMain);
        pruneSize->setObjectName(QString::fromUtf8("pruneSize"));

        horizontalLayout_Main_Prune->addWidget(pruneSize);

        pruneSizeUnitLabel = new QLabel(pageMain);
        pruneSizeUnitLabel->setObjectName(QString::fromUtf8("pruneSizeUnitLabel"));
        pruneSizeUnitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_Main_Prune->addWidget(pruneSizeUnitLabel);

        horizontalSpacer_Main_Prune = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Main_Prune->addItem(horizontalSpacer_Main_Prune);


        verticalLayout_Main->addLayout(horizontalLayout_Main_Prune);

        pruneWarning = new QLabel(pageMain);
        pruneWarning->setObjectName(QString::fromUtf8("pruneWarning"));
        pruneWarning->setTextFormat(Qt::PlainText);

        verticalLayout_Main->addWidget(pruneWarning);

        horizontalLayout_2_Main = new QHBoxLayout();
        horizontalLayout_2_Main->setObjectName(QString::fromUtf8("horizontalLayout_2_Main"));
        databaseCacheLabel = new QLabel(pageMain);
        databaseCacheLabel->setObjectName(QString::fromUtf8("databaseCacheLabel"));
        databaseCacheLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Main->addWidget(databaseCacheLabel);

        databaseCache = new QSpinBox(pageMain);
        databaseCache->setObjectName(QString::fromUtf8("databaseCache"));

        horizontalLayout_2_Main->addWidget(databaseCache);

        databaseCacheUnitLabel = new QLabel(pageMain);
        databaseCacheUnitLabel->setObjectName(QString::fromUtf8("databaseCacheUnitLabel"));
        databaseCacheUnitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Main->addWidget(databaseCacheUnitLabel);

        horizontalSpacer_2_Main = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_Main->addItem(horizontalSpacer_2_Main);


        verticalLayout_Main->addLayout(horizontalLayout_2_Main);

        horizontalLayout_Main_VerifyLabel = new QHBoxLayout();
        horizontalLayout_Main_VerifyLabel->setObjectName(QString::fromUtf8("horizontalLayout_Main_VerifyLabel"));
        threadsScriptVerifLabel = new QLabel(pageMain);
        threadsScriptVerifLabel->setObjectName(QString::fromUtf8("threadsScriptVerifLabel"));
        threadsScriptVerifLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_Main_VerifyLabel->addWidget(threadsScriptVerifLabel);

        threadsScriptVerif = new QSpinBox(pageMain);
        threadsScriptVerif->setObjectName(QString::fromUtf8("threadsScriptVerif"));

        horizontalLayout_Main_VerifyLabel->addWidget(threadsScriptVerif);

        horizontalSpacer_Main_Threads = new QSpacerItem(40, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Main_VerifyLabel->addItem(horizontalSpacer_Main_Threads);


        verticalLayout_Main->addLayout(horizontalLayout_Main_VerifyLabel);

        enableServer = new QCheckBox(pageMain);
        enableServer->setObjectName(QString::fromUtf8("enableServer"));

        verticalLayout_Main->addWidget(enableServer);

        verticalSpacer_Main = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Main->addItem(verticalSpacer_Main);

        stackedWidgetOptions->addWidget(pageMain);
        pageWallet = new QWidget();
        pageWallet->setObjectName(QString::fromUtf8("pageWallet"));
        verticalLayout_Wallet = new QVBoxLayout(pageWallet);
        verticalLayout_Wallet->setObjectName(QString::fromUtf8("verticalLayout_Wallet"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        subFeeFromAmount = new QCheckBox(pageWallet);
        subFeeFromAmount->setObjectName(QString::fromUtf8("subFeeFromAmount"));

        verticalLayout_2->addWidget(subFeeFromAmount);

        coinControlFeatures = new QCheckBox(pageWallet);
        coinControlFeatures->setObjectName(QString::fromUtf8("coinControlFeatures"));

        verticalLayout_2->addWidget(coinControlFeatures);

        m_enable_psbt_controls = new QCheckBox(pageWallet);
        m_enable_psbt_controls->setObjectName(QString::fromUtf8("m_enable_psbt_controls"));

        verticalLayout_2->addWidget(m_enable_psbt_controls);

        keepChangeAddress = new QCheckBox(pageWallet);
        keepChangeAddress->setObjectName(QString::fromUtf8("keepChangeAddress"));

        verticalLayout_2->addWidget(keepChangeAddress);

        spendZeroConfChange = new QCheckBox(pageWallet);
        spendZeroConfChange->setObjectName(QString::fromUtf8("spendZeroConfChange"));

        verticalLayout_2->addWidget(spendZeroConfChange);

        coinJoinEnabled = new QCheckBox(pageWallet);
        coinJoinEnabled->setObjectName(QString::fromUtf8("coinJoinEnabled"));
        coinJoinEnabled->setText(QString::fromUtf8("Enable CoinJoin features"));

        verticalLayout_2->addWidget(coinJoinEnabled);

        dustProtection = new QCheckBox(pageWallet);
        dustProtection->setObjectName(QString::fromUtf8("dustProtection"));

        verticalLayout_2->addWidget(dustProtection);

        horizontalLayoutDustThreshold = new QHBoxLayout();
        horizontalLayoutDustThreshold->setObjectName(QString::fromUtf8("horizontalLayoutDustThreshold"));
        dustThresholdLabel = new QLabel(pageWallet);
        dustThresholdLabel->setObjectName(QString::fromUtf8("dustThresholdLabel"));

        horizontalLayoutDustThreshold->addWidget(dustThresholdLabel);

        dustProtectionThreshold = new QSpinBox(pageWallet);
        dustProtectionThreshold->setObjectName(QString::fromUtf8("dustProtectionThreshold"));
        dustProtectionThreshold->setMinimum(1);
        dustProtectionThreshold->setMaximum(1000000);
        dustProtectionThreshold->setValue(10000);

        horizontalLayoutDustThreshold->addWidget(dustProtectionThreshold);

        dustProtectionThresholdUnitLabel = new QLabel(pageWallet);
        dustProtectionThresholdUnitLabel->setObjectName(QString::fromUtf8("dustProtectionThresholdUnitLabel"));
        dustProtectionThresholdUnitLabel->setTextFormat(Qt::PlainText);

        horizontalLayoutDustThreshold->addWidget(dustProtectionThresholdUnitLabel);

        horizontalSpacerDustThreshold = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutDustThreshold->addItem(horizontalSpacerDustThreshold);


        verticalLayout_2->addLayout(horizontalLayoutDustThreshold);


        verticalLayout_Wallet->addLayout(verticalLayout_2);

        groupBoxHww = new QGroupBox(pageWallet);
        groupBoxHww->setObjectName(QString::fromUtf8("groupBoxHww"));
        verticalLayoutHww = new QVBoxLayout(groupBoxHww);
        verticalLayoutHww->setObjectName(QString::fromUtf8("verticalLayoutHww"));
        horizontalLayoutHww = new QHBoxLayout();
        horizontalLayoutHww->setObjectName(QString::fromUtf8("horizontalLayoutHww"));
        externalSignerPathLabel = new QLabel(groupBoxHww);
        externalSignerPathLabel->setObjectName(QString::fromUtf8("externalSignerPathLabel"));

        horizontalLayoutHww->addWidget(externalSignerPathLabel);

        externalSignerPath = new QLineEdit(groupBoxHww);
        externalSignerPath->setObjectName(QString::fromUtf8("externalSignerPath"));

        horizontalLayoutHww->addWidget(externalSignerPath);


        verticalLayoutHww->addLayout(horizontalLayoutHww);


        verticalLayout_Wallet->addWidget(groupBoxHww);

        verticalSpacer_Wallet = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Wallet->addItem(verticalSpacer_Wallet);

        stackedWidgetOptions->addWidget(pageWallet);
        pageCoinJoin = new QWidget();
        pageCoinJoin->setObjectName(QString::fromUtf8("pageCoinJoin"));
        verticalLayout_4 = new QVBoxLayout(pageCoinJoin);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        showAdvancedCJUI = new QCheckBox(pageCoinJoin);
        showAdvancedCJUI->setObjectName(QString::fromUtf8("showAdvancedCJUI"));

        verticalLayout_4->addWidget(showAdvancedCJUI);

        showCoinJoinPopups = new QCheckBox(pageCoinJoin);
        showCoinJoinPopups->setObjectName(QString::fromUtf8("showCoinJoinPopups"));

        verticalLayout_4->addWidget(showCoinJoinPopups);

        lowKeysWarning = new QCheckBox(pageCoinJoin);
        lowKeysWarning->setObjectName(QString::fromUtf8("lowKeysWarning"));

        verticalLayout_4->addWidget(lowKeysWarning);

        coinJoinMultiSession = new QCheckBox(pageCoinJoin);
        coinJoinMultiSession->setObjectName(QString::fromUtf8("coinJoinMultiSession"));

        verticalLayout_4->addWidget(coinJoinMultiSession);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblCoinJoinSessionsText = new QLabel(pageCoinJoin);
        lblCoinJoinSessionsText->setObjectName(QString::fromUtf8("lblCoinJoinSessionsText"));

        gridLayout->addWidget(lblCoinJoinSessionsText, 0, 0, 1, 1);

        coinJoinSessions = new QSpinBox(pageCoinJoin);
        coinJoinSessions->setObjectName(QString::fromUtf8("coinJoinSessions"));
        coinJoinSessions->setMinimum(1);
        coinJoinSessions->setMaximum(10);
        coinJoinSessions->setValue(4);

        gridLayout->addWidget(coinJoinSessions, 0, 1, 1, 1);

        lblCoinJoinRoundsText = new QLabel(pageCoinJoin);
        lblCoinJoinRoundsText->setObjectName(QString::fromUtf8("lblCoinJoinRoundsText"));

        gridLayout->addWidget(lblCoinJoinRoundsText, 1, 0, 1, 1);

        coinJoinRounds = new QSpinBox(pageCoinJoin);
        coinJoinRounds->setObjectName(QString::fromUtf8("coinJoinRounds"));
        coinJoinRounds->setMinimum(2);
        coinJoinRounds->setMaximum(16);
        coinJoinRounds->setValue(4);

        gridLayout->addWidget(coinJoinRounds, 1, 1, 1, 1);

        lblCoinJoinAmountText = new QLabel(pageCoinJoin);
        lblCoinJoinAmountText->setObjectName(QString::fromUtf8("lblCoinJoinAmountText"));
#if QT_CONFIG(statustip)
        lblCoinJoinAmountText->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        lblCoinJoinAmountText->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        lblCoinJoinAmountText->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        lblCoinJoinAmountText->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)

        gridLayout->addWidget(lblCoinJoinAmountText, 2, 0, 1, 1);

        coinJoinAmount = new QSpinBox(pageCoinJoin);
        coinJoinAmount->setObjectName(QString::fromUtf8("coinJoinAmount"));
        coinJoinAmount->setMinimum(2);
        coinJoinAmount->setMaximum(21000000);
        coinJoinAmount->setSingleStep(10);
        coinJoinAmount->setValue(1000);

        gridLayout->addWidget(coinJoinAmount, 2, 1, 1, 1);

        lblCoinJoinDenoms = new QLabel(pageCoinJoin);
        lblCoinJoinDenoms->setObjectName(QString::fromUtf8("lblCoinJoinDenoms"));

        gridLayout->addWidget(lblCoinJoinDenoms, 3, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        lblCoinJoinDenomsTarget = new QLabel(pageCoinJoin);
        lblCoinJoinDenomsTarget->setObjectName(QString::fromUtf8("lblCoinJoinDenomsTarget"));

        vboxLayout->addWidget(lblCoinJoinDenomsTarget);

        coinJoinDenomsGoal = new QSpinBox(pageCoinJoin);
        coinJoinDenomsGoal->setObjectName(QString::fromUtf8("coinJoinDenomsGoal"));
        coinJoinDenomsGoal->setMinimum(10);
        coinJoinDenomsGoal->setMaximum(100000);
        coinJoinDenomsGoal->setSingleStep(10);
        coinJoinDenomsGoal->setValue(50);

        vboxLayout->addWidget(coinJoinDenomsGoal);


        hboxLayout->addLayout(vboxLayout);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        lblCoinJoinDenomsMaximum = new QLabel(pageCoinJoin);
        lblCoinJoinDenomsMaximum->setObjectName(QString::fromUtf8("lblCoinJoinDenomsMaximum"));

        vboxLayout1->addWidget(lblCoinJoinDenomsMaximum);

        coinJoinDenomsHardCap = new QSpinBox(pageCoinJoin);
        coinJoinDenomsHardCap->setObjectName(QString::fromUtf8("coinJoinDenomsHardCap"));
        coinJoinDenomsHardCap->setMinimum(10);
        coinJoinDenomsHardCap->setMaximum(100000);
        coinJoinDenomsHardCap->setSingleStep(10);
        coinJoinDenomsHardCap->setValue(300);

        vboxLayout1->addWidget(coinJoinDenomsHardCap);


        hboxLayout->addLayout(vboxLayout1);


        gridLayout->addLayout(hboxLayout, 3, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        verticalSpacerPS = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacerPS);

        stackedWidgetOptions->addWidget(pageCoinJoin);
        pageNetwork = new QWidget();
        pageNetwork->setObjectName(QString::fromUtf8("pageNetwork"));
        verticalLayout_Network = new QVBoxLayout(pageNetwork);
        verticalLayout_Network->setObjectName(QString::fromUtf8("verticalLayout_Network"));
        mapPortUpnp = new QCheckBox(pageNetwork);
        mapPortUpnp->setObjectName(QString::fromUtf8("mapPortUpnp"));

        verticalLayout_Network->addWidget(mapPortUpnp);

        mapPortNatpmp = new QCheckBox(pageNetwork);
        mapPortNatpmp->setObjectName(QString::fromUtf8("mapPortNatpmp"));

        verticalLayout_Network->addWidget(mapPortNatpmp);

        allowIncoming = new QCheckBox(pageNetwork);
        allowIncoming->setObjectName(QString::fromUtf8("allowIncoming"));

        verticalLayout_Network->addWidget(allowIncoming);

        connectSocks = new QCheckBox(pageNetwork);
        connectSocks->setObjectName(QString::fromUtf8("connectSocks"));

        verticalLayout_Network->addWidget(connectSocks);

        horizontalLayout_1_Network = new QHBoxLayout();
        horizontalLayout_1_Network->setObjectName(QString::fromUtf8("horizontalLayout_1_Network"));
        proxyIpLabel = new QLabel(pageNetwork);
        proxyIpLabel->setObjectName(QString::fromUtf8("proxyIpLabel"));
        proxyIpLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Network->addWidget(proxyIpLabel);

        proxyIp = new QValidatedLineEdit(pageNetwork);
        proxyIp->setObjectName(QString::fromUtf8("proxyIp"));
        proxyIp->setMinimumSize(QSize(140, 0));
        proxyIp->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_1_Network->addWidget(proxyIp);

        proxyPortLabel = new QLabel(pageNetwork);
        proxyPortLabel->setObjectName(QString::fromUtf8("proxyPortLabel"));
        proxyPortLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Network->addWidget(proxyPortLabel);

        proxyPort = new QLineEdit(pageNetwork);
        proxyPort->setObjectName(QString::fromUtf8("proxyPort"));
        proxyPort->setMinimumSize(QSize(60, 0));
        proxyPort->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_1_Network->addWidget(proxyPort);

        horizontalSpacer_1_Network = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1_Network->addItem(horizontalSpacer_1_Network);


        verticalLayout_Network->addLayout(horizontalLayout_1_Network);

        horizontalLayout_2_Network = new QHBoxLayout();
        horizontalLayout_2_Network->setObjectName(QString::fromUtf8("horizontalLayout_2_Network"));
        proxyActiveNets = new QLabel(pageNetwork);
        proxyActiveNets->setObjectName(QString::fromUtf8("proxyActiveNets"));
        proxyActiveNets->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Network->addWidget(proxyActiveNets);

        proxyReachIPv4 = new QCheckBox(pageNetwork);
        proxyReachIPv4->setObjectName(QString::fromUtf8("proxyReachIPv4"));
        proxyReachIPv4->setEnabled(false);

        horizontalLayout_2_Network->addWidget(proxyReachIPv4);

        proxyReachIPv6 = new QCheckBox(pageNetwork);
        proxyReachIPv6->setObjectName(QString::fromUtf8("proxyReachIPv6"));
        proxyReachIPv6->setEnabled(false);

        horizontalLayout_2_Network->addWidget(proxyReachIPv6);

        proxyReachTor = new QCheckBox(pageNetwork);
        proxyReachTor->setObjectName(QString::fromUtf8("proxyReachTor"));
        proxyReachTor->setEnabled(false);

        horizontalLayout_2_Network->addWidget(proxyReachTor);

        horizontalSpacer_2_Network = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_Network->addItem(horizontalSpacer_2_Network);


        verticalLayout_Network->addLayout(horizontalLayout_2_Network);

        connectSocksTor = new QCheckBox(pageNetwork);
        connectSocksTor->setObjectName(QString::fromUtf8("connectSocksTor"));

        verticalLayout_Network->addWidget(connectSocksTor);

        horizontalLayout_3_Network = new QHBoxLayout();
        horizontalLayout_3_Network->setObjectName(QString::fromUtf8("horizontalLayout_3_Network"));
        proxyIpTorLabel = new QLabel(pageNetwork);
        proxyIpTorLabel->setObjectName(QString::fromUtf8("proxyIpTorLabel"));
        proxyIpTorLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_3_Network->addWidget(proxyIpTorLabel);

        proxyIpTor = new QValidatedLineEdit(pageNetwork);
        proxyIpTor->setObjectName(QString::fromUtf8("proxyIpTor"));
        proxyIpTor->setMinimumSize(QSize(140, 0));
        proxyIpTor->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_3_Network->addWidget(proxyIpTor);

        proxyPortTorLabel = new QLabel(pageNetwork);
        proxyPortTorLabel->setObjectName(QString::fromUtf8("proxyPortTorLabel"));
        proxyPortTorLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_3_Network->addWidget(proxyPortTorLabel);

        proxyPortTor = new QLineEdit(pageNetwork);
        proxyPortTor->setObjectName(QString::fromUtf8("proxyPortTor"));
        proxyPortTor->setMinimumSize(QSize(60, 0));
        proxyPortTor->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3_Network->addWidget(proxyPortTor);

        horizontalSpacer_4_Network = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_Network->addItem(horizontalSpacer_4_Network);


        verticalLayout_Network->addLayout(horizontalLayout_3_Network);

        verticalSpacer_Network = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Network->addItem(verticalSpacer_Network);

        stackedWidgetOptions->addWidget(pageNetwork);
        pageDisplay = new QWidget();
        pageDisplay->setObjectName(QString::fromUtf8("pageDisplay"));
        verticalLayout_Display = new QVBoxLayout(pageDisplay);
        verticalLayout_Display->setObjectName(QString::fromUtf8("verticalLayout_Display"));
        horizontalLayout_1_Display = new QHBoxLayout();
        horizontalLayout_1_Display->setObjectName(QString::fromUtf8("horizontalLayout_1_Display"));
        langLabel = new QLabel(pageDisplay);
        langLabel->setObjectName(QString::fromUtf8("langLabel"));
        langLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Display->addWidget(langLabel);

        lang = new QValueComboBox(pageDisplay);
        lang->setObjectName(QString::fromUtf8("lang"));

        horizontalLayout_1_Display->addWidget(lang);


        verticalLayout_Display->addLayout(horizontalLayout_1_Display);

        label_3 = new QLabel(pageDisplay);
        label_3->setObjectName(QString::fromUtf8("label_3"));
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_3->setStatusTip(QString::fromUtf8(""));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        label_3->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        label_3->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        label_3->setWordWrap(true);
        label_3->setOpenExternalLinks(true);
        label_3->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_Display->addWidget(label_3);

        line = new QFrame(pageDisplay);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_Display->addWidget(line);

        showMasternodesTab = new QCheckBox(pageDisplay);
        showMasternodesTab->setObjectName(QString::fromUtf8("showMasternodesTab"));

        verticalLayout_Display->addWidget(showMasternodesTab);

        showGovernanceTab = new QCheckBox(pageDisplay);
        showGovernanceTab->setObjectName(QString::fromUtf8("showGovernanceTab"));

        verticalLayout_Display->addWidget(showGovernanceTab);

        horizontalLayout_govCycleIcon = new QHBoxLayout();
        horizontalLayout_govCycleIcon->setObjectName(QString::fromUtf8("horizontalLayout_govCycleIcon"));
        govCycleIconIndent = new QSpacerItem(18, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_govCycleIcon->addItem(govCycleIconIndent);

        showGovernanceCycleIcon = new QCheckBox(pageDisplay);
        showGovernanceCycleIcon->setObjectName(QString::fromUtf8("showGovernanceCycleIcon"));
        showGovernanceCycleIcon->setEnabled(false);

        horizontalLayout_govCycleIcon->addWidget(showGovernanceCycleIcon);


        verticalLayout_Display->addLayout(horizontalLayout_govCycleIcon);

        horizontalLayout_2_Display = new QHBoxLayout();
        horizontalLayout_2_Display->setObjectName(QString::fromUtf8("horizontalLayout_2_Display"));
        unitLabel = new QLabel(pageDisplay);
        unitLabel->setObjectName(QString::fromUtf8("unitLabel"));
        unitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Display->addWidget(unitLabel);

        unit = new QValueComboBox(pageDisplay);
        unit->setObjectName(QString::fromUtf8("unit"));

        horizontalLayout_2_Display->addWidget(unit);


        verticalLayout_Display->addLayout(horizontalLayout_2_Display);

        horizontalLayout_5_Display = new QHBoxLayout();
        horizontalLayout_5_Display->setObjectName(QString::fromUtf8("horizontalLayout_5_Display"));
        digitsLabel = new QLabel(pageDisplay);
        digitsLabel->setObjectName(QString::fromUtf8("digitsLabel"));

        horizontalLayout_5_Display->addWidget(digitsLabel);

        digits = new QValueComboBox(pageDisplay);
        digits->setObjectName(QString::fromUtf8("digits"));

        horizontalLayout_5_Display->addWidget(digits);


        verticalLayout_Display->addLayout(horizontalLayout_5_Display);

        horizontalLayout_3_Display = new QHBoxLayout();
        horizontalLayout_3_Display->setObjectName(QString::fromUtf8("horizontalLayout_3_Display"));
        thirdPartyTxUrlsLabel = new QLabel(pageDisplay);
        thirdPartyTxUrlsLabel->setObjectName(QString::fromUtf8("thirdPartyTxUrlsLabel"));

        horizontalLayout_3_Display->addWidget(thirdPartyTxUrlsLabel);

        thirdPartyTxUrls = new QLineEdit(pageDisplay);
        thirdPartyTxUrls->setObjectName(QString::fromUtf8("thirdPartyTxUrls"));
        thirdPartyTxUrls->setPlaceholderText(QString::fromUtf8("https://example.com/tx/%s"));

        horizontalLayout_3_Display->addWidget(thirdPartyTxUrls);


        verticalLayout_Display->addLayout(horizontalLayout_3_Display);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Display->addItem(verticalSpacer);

        stackedWidgetOptions->addWidget(pageDisplay);
        pageAppearance = new QWidget();
        pageAppearance->setObjectName(QString::fromUtf8("pageAppearance"));
        verticalLayout_3 = new QVBoxLayout(pageAppearance);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widgetAppearance = new QWidget(pageAppearance);
        widgetAppearance->setObjectName(QString::fromUtf8("widgetAppearance"));

        verticalLayout_3->addWidget(widgetAppearance);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        stackedWidgetOptions->addWidget(pageAppearance);

        verticalLayout->addWidget(stackedWidgetOptions);

        frame = new QFrame(OptionsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        verticalLayout_Bottom = new QVBoxLayout(frame);
        verticalLayout_Bottom->setObjectName(QString::fromUtf8("verticalLayout_Bottom"));
        horizontalLayout_Bottom = new QHBoxLayout();
        horizontalLayout_Bottom->setObjectName(QString::fromUtf8("horizontalLayout_Bottom"));
        overriddenByCommandLineInfoLabel = new QLabel(frame);
        overriddenByCommandLineInfoLabel->setObjectName(QString::fromUtf8("overriddenByCommandLineInfoLabel"));
        overriddenByCommandLineInfoLabel->setTextFormat(Qt::PlainText);
        overriddenByCommandLineInfoLabel->setWordWrap(true);

        horizontalLayout_Bottom->addWidget(overriddenByCommandLineInfoLabel);

        horizontalSpacer_Bottom = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Bottom->addItem(horizontalSpacer_Bottom);


        verticalLayout_Bottom->addLayout(horizontalLayout_Bottom);

        overriddenByCommandLineLabel = new QLabel(frame);
        overriddenByCommandLineLabel->setObjectName(QString::fromUtf8("overriddenByCommandLineLabel"));
        overriddenByCommandLineLabel->setTextFormat(Qt::PlainText);
        overriddenByCommandLineLabel->setWordWrap(true);

        verticalLayout_Bottom->addWidget(overriddenByCommandLineLabel);


        verticalLayout->addWidget(frame);

        horizontalLayout_Buttons = new QHBoxLayout();
        horizontalLayout_Buttons->setObjectName(QString::fromUtf8("horizontalLayout_Buttons"));
        resetButton = new QPushButton(OptionsDialog);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(resetButton);

        horizontalSpacer_1 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_1);

        statusLabel = new QLabel(OptionsDialog);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setMinimumSize(QSize(200, 0));
        statusLabel->setTextFormat(Qt::PlainText);
        statusLabel->setWordWrap(true);

        horizontalLayout_Buttons->addWidget(statusLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_2);

        okButton = new QPushButton(OptionsDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(okButton);

        cancelButton = new QPushButton(OptionsDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_Buttons);

#if QT_CONFIG(shortcut)
        databaseCacheLabel->setBuddy(databaseCache);
        threadsScriptVerifLabel->setBuddy(threadsScriptVerif);
        externalSignerPathLabel->setBuddy(externalSignerPath);
        proxyIpLabel->setBuddy(proxyIp);
        proxyPortLabel->setBuddy(proxyPort);
        proxyIpTorLabel->setBuddy(proxyIpTor);
        proxyPortTorLabel->setBuddy(proxyPortTor);
        langLabel->setBuddy(lang);
        unitLabel->setBuddy(unit);
        thirdPartyTxUrlsLabel->setBuddy(thirdPartyTxUrls);
#endif // QT_CONFIG(shortcut)

        retranslateUi(OptionsDialog);

        stackedWidgetOptions->setCurrentIndex(5);
        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QCoreApplication::translate("OptionsDialog", "Options", nullptr));
        btnMain->setText(QCoreApplication::translate("OptionsDialog", "&Main", nullptr));
        btnWallet->setText(QCoreApplication::translate("OptionsDialog", "W&allet", nullptr));
        btnNetwork->setText(QCoreApplication::translate("OptionsDialog", "&Network", nullptr));
        btnDisplay->setText(QCoreApplication::translate("OptionsDialog", "&Display", nullptr));
        btnAppearance->setText(QCoreApplication::translate("OptionsDialog", "&Appearance", nullptr));
#if QT_CONFIG(tooltip)
        bitcoinAtStartup->setToolTip(QCoreApplication::translate("OptionsDialog", "Automatically start %1 after logging in to the system.", nullptr));
#endif // QT_CONFIG(tooltip)
        bitcoinAtStartup->setText(QCoreApplication::translate("OptionsDialog", "&Start %1 on system login", nullptr));
#if QT_CONFIG(tooltip)
        showTrayIcon->setToolTip(QCoreApplication::translate("OptionsDialog", "Show the icon in the system tray.", nullptr));
#endif // QT_CONFIG(tooltip)
        showTrayIcon->setText(QCoreApplication::translate("OptionsDialog", "&Show tray icon", nullptr));
#if QT_CONFIG(tooltip)
        minimizeToTray->setToolTip(QCoreApplication::translate("OptionsDialog", "Show only a tray icon after minimizing the window.", nullptr));
#endif // QT_CONFIG(tooltip)
        minimizeToTray->setText(QCoreApplication::translate("OptionsDialog", "&Minimize to the tray instead of the taskbar", nullptr));
#if QT_CONFIG(tooltip)
        minimizeOnClose->setToolTip(QCoreApplication::translate("OptionsDialog", "Minimize instead of exit the application when the window is closed. When this option is enabled, the application will be closed only after selecting Exit in the menu.", nullptr));
#endif // QT_CONFIG(tooltip)
        minimizeOnClose->setText(QCoreApplication::translate("OptionsDialog", "M&inimize on close", nullptr));
#if QT_CONFIG(tooltip)
        prune->setToolTip(QCoreApplication::translate("OptionsDialog", "Enabling pruning significantly reduces the disk space required to store transactions. All blocks are still fully validated. Reverting this setting requires re-downloading the entire blockchain.", nullptr));
#endif // QT_CONFIG(tooltip)
        prune->setText(QCoreApplication::translate("OptionsDialog", "Prune &block storage to", nullptr));
        pruneSizeUnitLabel->setText(QCoreApplication::translate("OptionsDialog", "GB", nullptr));
        pruneWarning->setText(QCoreApplication::translate("OptionsDialog", "Reverting this setting requires re-downloading the entire blockchain.", nullptr));
#if QT_CONFIG(tooltip)
        databaseCacheLabel->setToolTip(QCoreApplication::translate("OptionsDialog", "Maximum database cache size. A larger cache can contribute to faster sync, after which the benefit is less pronounced for most use cases. Lowering the cache size will reduce memory usage. Unused mempool memory is shared for this cache.", nullptr));
#endif // QT_CONFIG(tooltip)
        databaseCacheLabel->setText(QCoreApplication::translate("OptionsDialog", "Size of &database cache", nullptr));
        databaseCacheUnitLabel->setText(QCoreApplication::translate("OptionsDialog", "MiB", nullptr));
#if QT_CONFIG(tooltip)
        threadsScriptVerifLabel->setToolTip(QCoreApplication::translate("OptionsDialog", "Set the number of script verification threads. Negative values correspond to the number of cores you want to leave free to the system.", nullptr));
#endif // QT_CONFIG(tooltip)
        threadsScriptVerifLabel->setText(QCoreApplication::translate("OptionsDialog", "Number of script &verification threads", nullptr));
#if QT_CONFIG(tooltip)
        threadsScriptVerif->setToolTip(QCoreApplication::translate("OptionsDialog", "(0 = auto, <0 = leave that many cores free)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        enableServer->setToolTip(QCoreApplication::translate("OptionsDialog", "This allows you or a third party tool to communicate with the node through command-line and JSON-RPC commands.", nullptr));
#endif // QT_CONFIG(tooltip)
        enableServer->setText(QCoreApplication::translate("OptionsDialog", "Enable R&PC server", nullptr));
#if QT_CONFIG(tooltip)
        subFeeFromAmount->setToolTip(QCoreApplication::translate("OptionsDialog", "Whether to set subtract fee from amount as default or not.", nullptr));
#endif // QT_CONFIG(tooltip)
        subFeeFromAmount->setText(QCoreApplication::translate("OptionsDialog", "Subtract &fee from amount by default", nullptr));
#if QT_CONFIG(tooltip)
        coinControlFeatures->setToolTip(QCoreApplication::translate("OptionsDialog", "Whether to show coin control features or not.", nullptr));
#endif // QT_CONFIG(tooltip)
        coinControlFeatures->setText(QCoreApplication::translate("OptionsDialog", "Enable coin &control features", nullptr));
        m_enable_psbt_controls->setText(QCoreApplication::translate("OptionsDialog", "Enable &PSBT controls", nullptr));
#if QT_CONFIG(tooltip)
        m_enable_psbt_controls->setToolTip(QCoreApplication::translate("OptionsDialog", "Whether to show PSBT controls.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        keepChangeAddress->setToolTip(QCoreApplication::translate("OptionsDialog", "Whether to keep the specified custom change address or not.", nullptr));
#endif // QT_CONFIG(tooltip)
        keepChangeAddress->setText(QCoreApplication::translate("OptionsDialog", "Keep custom change &address", nullptr));
#if QT_CONFIG(tooltip)
        spendZeroConfChange->setToolTip(QCoreApplication::translate("OptionsDialog", "If you disable the spending of unconfirmed change, the change from a transaction<br/>cannot be used until that transaction has at least one confirmation.<br/>This also affects how your balance is computed.", nullptr));
#endif // QT_CONFIG(tooltip)
        spendZeroConfChange->setText(QCoreApplication::translate("OptionsDialog", "&Spend unconfirmed change", nullptr));
#if QT_CONFIG(tooltip)
        coinJoinEnabled->setToolTip(QCoreApplication::translate("OptionsDialog", "Show mixing interface on Overview screen and reveal an additional screen which allows to spend fully mixed coins only.<br/>A new tab with more settings will also appear in this dialog, please make sure to check them before mixing your coins.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        dustProtection->setToolTip(QCoreApplication::translate("OptionsDialog", "Automatically lock small incoming transactions from external sources that may be dust attacks. Locked UTXOs will be excluded from coin selection.", nullptr));
#endif // QT_CONFIG(tooltip)
        dustProtection->setText(QCoreApplication::translate("OptionsDialog", "Enable &dust attack protection", nullptr));
        dustThresholdLabel->setText(QCoreApplication::translate("OptionsDialog", "Dust threshold:", nullptr));
#if QT_CONFIG(tooltip)
        dustProtectionThreshold->setToolTip(QCoreApplication::translate("OptionsDialog", "Transactions with outputs at or below this amount will be considered dust when received from external sources.", nullptr));
#endif // QT_CONFIG(tooltip)
        dustProtectionThresholdUnitLabel->setText(QCoreApplication::translate("OptionsDialog", "VLVOs", nullptr));
        groupBoxHww->setTitle(QCoreApplication::translate("OptionsDialog", "External Signer (e.g. hardware wallet)", nullptr));
        externalSignerPathLabel->setText(QCoreApplication::translate("OptionsDialog", "&External signer script path", nullptr));
#if QT_CONFIG(tooltip)
        externalSignerPath->setToolTip(QCoreApplication::translate("OptionsDialog", "Full path to a %1 compatible script (e.g. C:\\Downloads\\hwi.exe or /Users/you/Downloads/hwi.py). Beware: malware can steal your coins!", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        showAdvancedCJUI->setToolTip(QCoreApplication::translate("OptionsDialog", "Show additional information and buttons on overview screen.", nullptr));
#endif // QT_CONFIG(tooltip)
        showAdvancedCJUI->setText(QCoreApplication::translate("OptionsDialog", "Enable advanced interface", nullptr));
#if QT_CONFIG(tooltip)
        showCoinJoinPopups->setToolTip(QCoreApplication::translate("OptionsDialog", "Show system popups for mixing transactions<br/>just like for all other transaction types.", nullptr));
#endif // QT_CONFIG(tooltip)
        showCoinJoinPopups->setText(QCoreApplication::translate("OptionsDialog", "Show popups for mixing transactions", nullptr));
#if QT_CONFIG(tooltip)
        lowKeysWarning->setToolTip(QCoreApplication::translate("OptionsDialog", "Show warning dialog when the wallet has very low number of keys left.", nullptr));
#endif // QT_CONFIG(tooltip)
        lowKeysWarning->setText(QCoreApplication::translate("OptionsDialog", "Warn if the wallet is running out of keys", nullptr));
#if QT_CONFIG(tooltip)
        coinJoinMultiSession->setToolTip(QCoreApplication::translate("OptionsDialog", "Whether to use experimental mode with multiple mixing sessions per block.<br/>Note: You must use this feature carefully.<br/>Make sure you always have recent wallet (auto)backup in a safe place!", nullptr));
#endif // QT_CONFIG(tooltip)
        coinJoinMultiSession->setText(QCoreApplication::translate("OptionsDialog", "Enable &multi-session", nullptr));
#if QT_CONFIG(tooltip)
        lblCoinJoinSessionsText->setToolTip(QCoreApplication::translate("OptionsDialog", "Use this many separate masternodes in parallel to mix funds.<br/>Note: You must use this feature carefully.<br/>Make sure you always have recent wallet (auto)backup in a safe place!", nullptr));
#endif // QT_CONFIG(tooltip)
        lblCoinJoinSessionsText->setText(QCoreApplication::translate("OptionsDialog", "Parallel sessions", nullptr));
#if QT_CONFIG(tooltip)
        lblCoinJoinRoundsText->setToolTip(QCoreApplication::translate("OptionsDialog", "This setting determines the amount of individual masternodes that an input will be mixed through.<br/>More rounds of mixing gives a higher degree of privacy, but also costs more in fees.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblCoinJoinRoundsText->setText(QCoreApplication::translate("OptionsDialog", "Mixing rounds", nullptr));
#if QT_CONFIG(tooltip)
        lblCoinJoinAmountText->setToolTip(QCoreApplication::translate("OptionsDialog", "This amount acts as a threshold to turn off mixing once it's reached.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblCoinJoinAmountText->setText(QCoreApplication::translate("OptionsDialog", "Target balance", nullptr));
#if QT_CONFIG(tooltip)
        lblCoinJoinDenoms->setToolTip(QCoreApplication::translate("OptionsDialog", "How many inputs of each denominated amount are created.<br/>Lower these numbers if you want fewer smaller denominations.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblCoinJoinDenoms->setText(QCoreApplication::translate("OptionsDialog", "Inputs per denomination", nullptr));
#if QT_CONFIG(tooltip)
        lblCoinJoinDenomsTarget->setToolTip(QCoreApplication::translate("OptionsDialog", "Try to create at least this many inputs for each denominated amount.<br/>Lower this number if you want fewer smaller denominations.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblCoinJoinDenomsTarget->setText(QCoreApplication::translate("OptionsDialog", "Target", nullptr));
#if QT_CONFIG(tooltip)
        lblCoinJoinDenomsMaximum->setToolTip(QCoreApplication::translate("OptionsDialog", "Create up to this many inputs for each denominated amount.<br/>Lower this number if you want fewer smaller denominations.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblCoinJoinDenomsMaximum->setText(QCoreApplication::translate("OptionsDialog", "Maximum", nullptr));
#if QT_CONFIG(tooltip)
        mapPortUpnp->setToolTip(QCoreApplication::translate("OptionsDialog", "Automatically open the Vivo Core client port on the router. This only works when your router supports UPnP and it is enabled.", nullptr));
#endif // QT_CONFIG(tooltip)
        mapPortUpnp->setText(QCoreApplication::translate("OptionsDialog", "Map port using &UPnP", nullptr));
#if QT_CONFIG(tooltip)
        mapPortNatpmp->setToolTip(QCoreApplication::translate("OptionsDialog", "Automatically open the Vivo Core client port on the router. This only works when your router supports NAT-PMP and it is enabled. The external port could be random.", nullptr));
#endif // QT_CONFIG(tooltip)
        mapPortNatpmp->setText(QCoreApplication::translate("OptionsDialog", "Map port using NA&T-PMP", nullptr));
#if QT_CONFIG(tooltip)
        allowIncoming->setToolTip(QCoreApplication::translate("OptionsDialog", "Accept connections from outside.", nullptr));
#endif // QT_CONFIG(tooltip)
        allowIncoming->setText(QCoreApplication::translate("OptionsDialog", "Allow incomin&g connections", nullptr));
#if QT_CONFIG(tooltip)
        connectSocks->setToolTip(QCoreApplication::translate("OptionsDialog", "Connect to the Vivo network through a SOCKS5 proxy.", nullptr));
#endif // QT_CONFIG(tooltip)
        connectSocks->setText(QCoreApplication::translate("OptionsDialog", "&Connect through SOCKS5 proxy (default proxy):", nullptr));
        proxyIpLabel->setText(QCoreApplication::translate("OptionsDialog", "Proxy &IP:", nullptr));
#if QT_CONFIG(tooltip)
        proxyIp->setToolTip(QCoreApplication::translate("OptionsDialog", "IP address of the proxy (e.g. IPv4: 127.0.0.1 / IPv6: ::1)", nullptr));
#endif // QT_CONFIG(tooltip)
        proxyPortLabel->setText(QCoreApplication::translate("OptionsDialog", "&Port:", nullptr));
#if QT_CONFIG(tooltip)
        proxyPort->setToolTip(QCoreApplication::translate("OptionsDialog", "Port of the proxy (e.g. 9050)", nullptr));
#endif // QT_CONFIG(tooltip)
        proxyActiveNets->setText(QCoreApplication::translate("OptionsDialog", "Used for reaching peers via:", nullptr));
#if QT_CONFIG(tooltip)
        proxyReachIPv4->setToolTip(QCoreApplication::translate("OptionsDialog", "Shows if the supplied default SOCKS5 proxy is used to reach peers via this network type.", nullptr));
#endif // QT_CONFIG(tooltip)
        proxyReachIPv4->setText(QCoreApplication::translate("OptionsDialog", "IPv4", nullptr));
#if QT_CONFIG(tooltip)
        proxyReachIPv6->setToolTip(QCoreApplication::translate("OptionsDialog", "Shows if the supplied default SOCKS5 proxy is used to reach peers via this network type.", nullptr));
#endif // QT_CONFIG(tooltip)
        proxyReachIPv6->setText(QCoreApplication::translate("OptionsDialog", "IPv6", nullptr));
#if QT_CONFIG(tooltip)
        proxyReachTor->setToolTip(QCoreApplication::translate("OptionsDialog", "Shows if the supplied default SOCKS5 proxy is used to reach peers via this network type.", nullptr));
#endif // QT_CONFIG(tooltip)
        proxyReachTor->setText(QCoreApplication::translate("OptionsDialog", "Tor", nullptr));
#if QT_CONFIG(tooltip)
        connectSocksTor->setToolTip(QCoreApplication::translate("OptionsDialog", "Connect to the Vivo network through a separate SOCKS5 proxy for Tor onion services.", nullptr));
#endif // QT_CONFIG(tooltip)
        connectSocksTor->setText(QCoreApplication::translate("OptionsDialog", "Use separate SOCKS&5 proxy to reach peers via Tor onion services:", nullptr));
        proxyIpTorLabel->setText(QCoreApplication::translate("OptionsDialog", "Proxy &IP:", nullptr));
#if QT_CONFIG(tooltip)
        proxyIpTor->setToolTip(QCoreApplication::translate("OptionsDialog", "IP address of the proxy (e.g. IPv4: 127.0.0.1 / IPv6: ::1)", nullptr));
#endif // QT_CONFIG(tooltip)
        proxyPortTorLabel->setText(QCoreApplication::translate("OptionsDialog", "&Port:", nullptr));
#if QT_CONFIG(tooltip)
        proxyPortTor->setToolTip(QCoreApplication::translate("OptionsDialog", "Port of the proxy (e.g. 9050)", nullptr));
#endif // QT_CONFIG(tooltip)
        langLabel->setText(QCoreApplication::translate("OptionsDialog", "User Interface &language:", nullptr));
#if QT_CONFIG(tooltip)
        lang->setToolTip(QCoreApplication::translate("OptionsDialog", "The user interface language can be set here. This setting will take effect after restarting %1.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("OptionsDialog", "Language missing or translation incomplete? Help contributing translations here:\n"
"https://explore.transifex.com/vivo/vivo/", nullptr));
#if QT_CONFIG(tooltip)
        showMasternodesTab->setToolTip(QCoreApplication::translate("OptionsDialog", "Show additional tab listing all your masternodes in first sub-tab<br/>and all masternodes on the network in second sub-tab.", nullptr));
#endif // QT_CONFIG(tooltip)
        showMasternodesTab->setText(QCoreApplication::translate("OptionsDialog", "Show Masternodes Tab", nullptr));
#if QT_CONFIG(tooltip)
        showGovernanceTab->setToolTip(QCoreApplication::translate("OptionsDialog", "Show additional tab listing governance proposals.", nullptr));
#endif // QT_CONFIG(tooltip)
        showGovernanceTab->setText(QCoreApplication::translate("OptionsDialog", "Show Governance Tab", nullptr));
#if QT_CONFIG(tooltip)
        showGovernanceCycleIcon->setToolTip(QCoreApplication::translate("OptionsDialog", "Show the governance clock in the status bar.", nullptr));
#endif // QT_CONFIG(tooltip)
        showGovernanceCycleIcon->setText(QCoreApplication::translate("OptionsDialog", "Show governance clock", nullptr));
        unitLabel->setText(QCoreApplication::translate("OptionsDialog", "&Unit to show amounts in:", nullptr));
#if QT_CONFIG(tooltip)
        unit->setToolTip(QCoreApplication::translate("OptionsDialog", "Choose the default subdivision unit to show in the interface and when sending coins.", nullptr));
#endif // QT_CONFIG(tooltip)
        digitsLabel->setText(QCoreApplication::translate("OptionsDialog", "Decimal digits", nullptr));
#if QT_CONFIG(tooltip)
        thirdPartyTxUrlsLabel->setToolTip(QCoreApplication::translate("OptionsDialog", "Third-party URLs (e.g. a block explorer) that appear in the transactions tab as context menu items.<br/>%s in the URL is replaced by transaction hash. Multiple URLs are separated by vertical bar |.", nullptr));
#endif // QT_CONFIG(tooltip)
        thirdPartyTxUrlsLabel->setText(QCoreApplication::translate("OptionsDialog", "&Third-party transaction URLs", nullptr));
#if QT_CONFIG(tooltip)
        thirdPartyTxUrls->setToolTip(QCoreApplication::translate("OptionsDialog", "Third-party URLs (e.g. a block explorer) that appear in the transactions tab as context menu items.<br/>%s in the URL is replaced by transaction hash. Multiple URLs are separated by vertical bar |.", nullptr));
#endif // QT_CONFIG(tooltip)
        overriddenByCommandLineInfoLabel->setText(QCoreApplication::translate("OptionsDialog", "Options set in this dialog are overridden by the command line:", nullptr));
        overriddenByCommandLineLabel->setText(QString());
#if QT_CONFIG(tooltip)
        resetButton->setToolTip(QCoreApplication::translate("OptionsDialog", "Reset all client options to default.", nullptr));
#endif // QT_CONFIG(tooltip)
        resetButton->setText(QCoreApplication::translate("OptionsDialog", "&Reset Options", nullptr));
        statusLabel->setText(QString());
        okButton->setText(QCoreApplication::translate("OptionsDialog", "&OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("OptionsDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
