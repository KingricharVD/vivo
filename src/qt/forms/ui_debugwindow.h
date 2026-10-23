/********************************************************************************
** Form generated from reading UI file 'debugwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGWINDOW_H
#define UI_DEBUGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/informationwidget.h"
#include "qt/networkwidget.h"
#include "qt/proposalinfo.h"
#include "qt/trafficgraphwidget.h"

QT_BEGIN_NAMESPACE

class Ui_RPCConsole
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_alerts;
    QHBoxLayout *horizontalLayout_Buttons_2;
    QPushButton *btnInfo;
    QPushButton *btnConsole;
    QPushButton *btnNetTraffic;
    QPushButton *btnPeers;
    QPushButton *btnRepair;
    QStackedWidget *stackedWidgetRPC;
    QWidget *pageInfo;
    QVBoxLayout *verticalLayoutInfo;
    QTabWidget *tabWidgetInfo;
    QWidget *tabGeneral;
    QVBoxLayout *verticalLayoutTabGeneral;
    InformationWidget *informationWidget;
    QWidget *tabNetwork;
    QVBoxLayout *verticalLayoutTabNetwork;
    NetworkWidget *networkWidget;
    QWidget *tabGovernance;
    QVBoxLayout *verticalLayoutTabGovernance;
    ProposalInfo *proposalInfo;
    QWidget *pageConsole;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *WalletSelectorLabel;
    QComboBox *WalletSelector;
    QSpacerItem *horizontalSpacer;
    QToolButton *fontSmallerButton;
    QToolButton *fontBiggerButton;
    QToolButton *clearButton;
    QTextEdit *messagesWidget;
    QHBoxLayout *horizontalLayoutPrompt;
    QLabel *promptLabel;
    QLineEdit *lineEdit;
    QWidget *pageNetTraffic;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    TrafficGraphWidget *trafficGraph;
    QHBoxLayout *horizontalLayout_2;
    QSlider *sldGraphRange;
    QLabel *lblGraphRange;
    QPushButton *btnClearTrafficGraph;
    QWidget *pagePeers;
    QVBoxLayout *verticalLayout_6;
    QSplitter *splitter;
    QWidget *widget_1;
    QVBoxLayout *verticalLayout_7;
    QTableView *peerWidget;
    QLabel *banHeading;
    QTableView *banlistWidget;
    QWidget *peersTabRightPanel;
    QVBoxLayout *verticalLayout_8;
    QLabel *peerHeading;
    QScrollArea *scrollArea;
    QWidget *detailWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_50;
    QLabel *peerNodeType;
    QLabel *label_51;
    QLabel *peerPoSeScore;
    QLabel *peerTransportTypeLabel;
    QLabel *peerTransportType;
    QLabel *peerSessionIdLabel;
    QLabel *peerSessionId;
    QLabel *peerNetworkLabel;
    QLabel *peerNetwork;
    QLabel *label_30;
    QLabel *peerPermissions;
    QLabel *peerConnectionTypeLabel;
    QLabel *peerConnectionType;
    QLabel *label_21;
    QLabel *peerVersion;
    QLabel *label_28;
    QLabel *peerSubversion;
    QLabel *label_4;
    QLabel *peerServices;
    QLabel *peerRelayTxesLabel;
    QLabel *peerRelayTxes;
    QLabel *peerHighBandwidthLabel;
    QLabel *peerHighBandwidth;
    QLabel *label_29;
    QLabel *peerHeight;
    QLabel *label_27;
    QLabel *peerSyncHeight;
    QLabel *label_25;
    QLabel *peerCommonHeight;
    QLabel *label_22;
    QLabel *peerConnTime;
    QLabel *peerLastBlockLabel;
    QLabel *peerLastBlock;
    QLabel *peerLastTxLabel;
    QLabel *peerLastTx;
    QLabel *label_15;
    QLabel *peerLastSend;
    QLabel *label_19;
    QLabel *peerLastRecv;
    QLabel *label_18;
    QLabel *peerBytesSent;
    QLabel *label_20;
    QLabel *peerBytesRecv;
    QLabel *label_26;
    QLabel *peerPingTime;
    QLabel *peerPingWaitLabel;
    QLabel *peerPingWait;
    QLabel *peerMinPingLabel;
    QLabel *peerMinPing;
    QLabel *label_timeoffset;
    QLabel *timeoffset;
    QLabel *peerMappedASLabel;
    QLabel *peerMappedAS;
    QLabel *peerAddrRelayEnabledLabel;
    QLabel *peerAddrRelayEnabled;
    QLabel *peerAddrProcessedLabel;
    QLabel *peerAddrProcessed;
    QLabel *peerAddrRateLimitedLabel;
    QLabel *peerAddrRateLimited;
    QSpacerItem *verticalSpacer_3;
    QWidget *pageRepair;
    QGridLayout *repairLayout;
    QLabel *label_repair_header;
    QLabel *label_repair_helptext;
    QLabel *wallet_path;
    QPushButton *btn_rescan1;
    QLabel *label_repair_rescan1;
    QPushButton *btn_rescan2;
    QLabel *label_repair_rescan2;
    QPushButton *btn_reindex;
    QLabel *label_repair_reindex;
    QSpacerItem *verticalSpacerRepair;

    void setupUi(QWidget *RPCConsole)
    {
        if (RPCConsole->objectName().isEmpty())
            RPCConsole->setObjectName(QString::fromUtf8("RPCConsole"));
        RPCConsole->resize(769, 485);
        verticalLayout_2 = new QVBoxLayout(RPCConsole);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_alerts = new QLabel(RPCConsole);
        label_alerts->setObjectName(QString::fromUtf8("label_alerts"));
        label_alerts->setVisible(false);
        label_alerts->setWordWrap(true);
        label_alerts->setMargin(3);
        label_alerts->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_alerts);

        horizontalLayout_Buttons_2 = new QHBoxLayout();
        horizontalLayout_Buttons_2->setSpacing(0);
        horizontalLayout_Buttons_2->setObjectName(QString::fromUtf8("horizontalLayout_Buttons_2"));
        horizontalLayout_Buttons_2->setContentsMargins(-1, 0, -1, -1);
        btnInfo = new QPushButton(RPCConsole);
        btnInfo->setObjectName(QString::fromUtf8("btnInfo"));
        btnInfo->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnInfo);

        btnConsole = new QPushButton(RPCConsole);
        btnConsole->setObjectName(QString::fromUtf8("btnConsole"));
        btnConsole->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnConsole);

        btnNetTraffic = new QPushButton(RPCConsole);
        btnNetTraffic->setObjectName(QString::fromUtf8("btnNetTraffic"));
        btnNetTraffic->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnNetTraffic);

        btnPeers = new QPushButton(RPCConsole);
        btnPeers->setObjectName(QString::fromUtf8("btnPeers"));
        btnPeers->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnPeers);

        btnRepair = new QPushButton(RPCConsole);
        btnRepair->setObjectName(QString::fromUtf8("btnRepair"));
        btnRepair->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnRepair);


        verticalLayout_2->addLayout(horizontalLayout_Buttons_2);

        stackedWidgetRPC = new QStackedWidget(RPCConsole);
        stackedWidgetRPC->setObjectName(QString::fromUtf8("stackedWidgetRPC"));
        stackedWidgetRPC->setMinimumSize(QSize(0, 0));
        pageInfo = new QWidget();
        pageInfo->setObjectName(QString::fromUtf8("pageInfo"));
        verticalLayoutInfo = new QVBoxLayout(pageInfo);
        verticalLayoutInfo->setObjectName(QString::fromUtf8("verticalLayoutInfo"));
        tabWidgetInfo = new QTabWidget(pageInfo);
        tabWidgetInfo->setObjectName(QString::fromUtf8("tabWidgetInfo"));
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QString::fromUtf8("tabGeneral"));
        verticalLayoutTabGeneral = new QVBoxLayout(tabGeneral);
        verticalLayoutTabGeneral->setObjectName(QString::fromUtf8("verticalLayoutTabGeneral"));
        verticalLayoutTabGeneral->setContentsMargins(0, 0, 0, 0);
        informationWidget = new InformationWidget(tabGeneral);
        informationWidget->setObjectName(QString::fromUtf8("informationWidget"));

        verticalLayoutTabGeneral->addWidget(informationWidget);

        tabWidgetInfo->addTab(tabGeneral, QString());
        tabNetwork = new QWidget();
        tabNetwork->setObjectName(QString::fromUtf8("tabNetwork"));
        verticalLayoutTabNetwork = new QVBoxLayout(tabNetwork);
        verticalLayoutTabNetwork->setObjectName(QString::fromUtf8("verticalLayoutTabNetwork"));
        verticalLayoutTabNetwork->setContentsMargins(0, 0, 0, 0);
        networkWidget = new NetworkWidget(tabNetwork);
        networkWidget->setObjectName(QString::fromUtf8("networkWidget"));

        verticalLayoutTabNetwork->addWidget(networkWidget);

        tabWidgetInfo->addTab(tabNetwork, QString());
        tabGovernance = new QWidget();
        tabGovernance->setObjectName(QString::fromUtf8("tabGovernance"));
        verticalLayoutTabGovernance = new QVBoxLayout(tabGovernance);
        verticalLayoutTabGovernance->setObjectName(QString::fromUtf8("verticalLayoutTabGovernance"));
        verticalLayoutTabGovernance->setContentsMargins(0, 0, 0, 0);
        proposalInfo = new ProposalInfo(tabGovernance);
        proposalInfo->setObjectName(QString::fromUtf8("proposalInfo"));

        verticalLayoutTabGovernance->addWidget(proposalInfo);

        tabWidgetInfo->addTab(tabGovernance, QString());

        verticalLayoutInfo->addWidget(tabWidgetInfo);

        stackedWidgetRPC->addWidget(pageInfo);
        pageConsole = new QWidget();
        pageConsole->setObjectName(QString::fromUtf8("pageConsole"));
        verticalLayout_3 = new QVBoxLayout(pageConsole);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 5);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        WalletSelectorLabel = new QLabel(pageConsole);
        WalletSelectorLabel->setObjectName(QString::fromUtf8("WalletSelectorLabel"));

        horizontalLayout->addWidget(WalletSelectorLabel);

        WalletSelector = new QComboBox(pageConsole);
        WalletSelector->addItem(QString());
        WalletSelector->setObjectName(QString::fromUtf8("WalletSelector"));
        WalletSelector->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(WalletSelector);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        fontSmallerButton = new QToolButton(pageConsole);
        fontSmallerButton->setObjectName(QString::fromUtf8("fontSmallerButton"));

        horizontalLayout->addWidget(fontSmallerButton);

        fontBiggerButton = new QToolButton(pageConsole);
        fontBiggerButton->setObjectName(QString::fromUtf8("fontBiggerButton"));

        horizontalLayout->addWidget(fontBiggerButton);

        clearButton = new QToolButton(pageConsole);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
#if QT_CONFIG(shortcut)
        clearButton->setShortcut(QString::fromUtf8("Ctrl+L"));
#endif // QT_CONFIG(shortcut)

        horizontalLayout->addWidget(clearButton);


        verticalLayout_3->addLayout(horizontalLayout);

        messagesWidget = new QTextEdit(pageConsole);
        messagesWidget->setObjectName(QString::fromUtf8("messagesWidget"));
        messagesWidget->setMinimumSize(QSize(0, 100));
        messagesWidget->setReadOnly(true);
        messagesWidget->setProperty("tabKeyNavigation", QVariant(false));
        messagesWidget->setProperty("columnCount", QVariant(2));

        verticalLayout_3->addWidget(messagesWidget);

        horizontalLayoutPrompt = new QHBoxLayout();
        horizontalLayoutPrompt->setSpacing(3);
        horizontalLayoutPrompt->setObjectName(QString::fromUtf8("horizontalLayoutPrompt"));
        promptLabel = new QLabel(pageConsole);
        promptLabel->setObjectName(QString::fromUtf8("promptLabel"));
        promptLabel->setText(QString::fromUtf8(" > "));

        horizontalLayoutPrompt->addWidget(promptLabel);

        lineEdit = new QLineEdit(pageConsole);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);

        horizontalLayoutPrompt->addWidget(lineEdit);


        verticalLayout_3->addLayout(horizontalLayoutPrompt);

        stackedWidgetRPC->addWidget(pageConsole);
        pageNetTraffic = new QWidget();
        pageNetTraffic->setObjectName(QString::fromUtf8("pageNetTraffic"));
        horizontalLayout_3 = new QHBoxLayout(pageNetTraffic);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        trafficGraph = new TrafficGraphWidget(pageNetTraffic);
        trafficGraph->setObjectName(QString::fromUtf8("trafficGraph"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(trafficGraph->sizePolicy().hasHeightForWidth());
        trafficGraph->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(trafficGraph);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sldGraphRange = new QSlider(pageNetTraffic);
        sldGraphRange->setObjectName(QString::fromUtf8("sldGraphRange"));
        sldGraphRange->setMinimum(0);
        sldGraphRange->setMaximum(9);
        sldGraphRange->setPageStep(1);
        sldGraphRange->setValue(3);
        sldGraphRange->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sldGraphRange);

        lblGraphRange = new QLabel(pageNetTraffic);
        lblGraphRange->setObjectName(QString::fromUtf8("lblGraphRange"));
        lblGraphRange->setMinimumSize(QSize(100, 0));
        lblGraphRange->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lblGraphRange);

        btnClearTrafficGraph = new QPushButton(pageNetTraffic);
        btnClearTrafficGraph->setObjectName(QString::fromUtf8("btnClearTrafficGraph"));
        btnClearTrafficGraph->setAutoDefault(false);

        horizontalLayout_2->addWidget(btnClearTrafficGraph);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        stackedWidgetRPC->addWidget(pageNetTraffic);
        pagePeers = new QWidget();
        pagePeers->setObjectName(QString::fromUtf8("pagePeers"));
        verticalLayout_6 = new QVBoxLayout(pagePeers);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        splitter = new QSplitter(pagePeers);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        widget_1 = new QWidget(splitter);
        widget_1->setObjectName(QString::fromUtf8("widget_1"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_1->sizePolicy().hasHeightForWidth());
        widget_1->setSizePolicy(sizePolicy1);
        widget_1->setMinimumSize(QSize(400, 0));
        verticalLayout_7 = new QVBoxLayout(widget_1);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        peerWidget = new QTableView(widget_1);
        peerWidget->setObjectName(QString::fromUtf8("peerWidget"));
        peerWidget->setTabKeyNavigation(false);
        peerWidget->setAlternatingRowColors(true);
        peerWidget->setTextElideMode(Qt::ElideMiddle);
        peerWidget->setSortingEnabled(true);
        peerWidget->setWordWrap(false);
        peerWidget->horizontalHeader()->setHighlightSections(false);

        verticalLayout_7->addWidget(peerWidget);

        banHeading = new QLabel(widget_1);
        banHeading->setObjectName(QString::fromUtf8("banHeading"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(banHeading->sizePolicy().hasHeightForWidth());
        banHeading->setSizePolicy(sizePolicy2);
        banHeading->setMinimumSize(QSize(0, 32));
        banHeading->setMaximumSize(QSize(16777215, 32));
        banHeading->setCursor(QCursor(Qt::IBeamCursor));
        banHeading->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        banHeading->setWordWrap(true);
        banHeading->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_7->addWidget(banHeading);

        banlistWidget = new QTableView(widget_1);
        banlistWidget->setObjectName(QString::fromUtf8("banlistWidget"));
        banlistWidget->setTabKeyNavigation(false);
        banlistWidget->setAlternatingRowColors(true);
        banlistWidget->setSortingEnabled(true);
        banlistWidget->horizontalHeader()->setHighlightSections(false);

        verticalLayout_7->addWidget(banlistWidget);

        splitter->addWidget(widget_1);
        peersTabRightPanel = new QWidget(splitter);
        peersTabRightPanel->setObjectName(QString::fromUtf8("peersTabRightPanel"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(peersTabRightPanel->sizePolicy().hasHeightForWidth());
        peersTabRightPanel->setSizePolicy(sizePolicy3);
        peersTabRightPanel->setMinimumSize(QSize(300, 0));
        verticalLayout_8 = new QVBoxLayout(peersTabRightPanel);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        peerHeading = new QLabel(peersTabRightPanel);
        peerHeading->setObjectName(QString::fromUtf8("peerHeading"));
        sizePolicy2.setHeightForWidth(peerHeading->sizePolicy().hasHeightForWidth());
        peerHeading->setSizePolicy(sizePolicy2);
        peerHeading->setMinimumSize(QSize(0, 32));
        peerHeading->setCursor(QCursor(Qt::IBeamCursor));
        peerHeading->setAlignment(Qt::AlignCenter);
        peerHeading->setWordWrap(true);
        peerHeading->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_8->addWidget(peerHeading);

        scrollArea = new QScrollArea(peersTabRightPanel);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        detailWidget = new QWidget();
        detailWidget->setObjectName(QString::fromUtf8("detailWidget"));
        detailWidget->setGeometry(QRect(0, 0, 300, 426));
        gridLayout_2 = new QGridLayout(detailWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_50 = new QLabel(detailWidget);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        gridLayout_2->addWidget(label_50, 0, 0, 1, 1);

        peerNodeType = new QLabel(detailWidget);
        peerNodeType->setObjectName(QString::fromUtf8("peerNodeType"));
        peerNodeType->setCursor(QCursor(Qt::IBeamCursor));
        peerNodeType->setTextFormat(Qt::PlainText);
        peerNodeType->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerNodeType, 0, 2, 1, 1);

        label_51 = new QLabel(detailWidget);
        label_51->setObjectName(QString::fromUtf8("label_51"));

        gridLayout_2->addWidget(label_51, 1, 0, 1, 1);

        peerPoSeScore = new QLabel(detailWidget);
        peerPoSeScore->setObjectName(QString::fromUtf8("peerPoSeScore"));
        peerPoSeScore->setCursor(QCursor(Qt::IBeamCursor));
        peerPoSeScore->setTextFormat(Qt::PlainText);
        peerPoSeScore->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerPoSeScore, 1, 2, 1, 1);

        peerTransportTypeLabel = new QLabel(detailWidget);
        peerTransportTypeLabel->setObjectName(QString::fromUtf8("peerTransportTypeLabel"));

        gridLayout_2->addWidget(peerTransportTypeLabel, 2, 0, 1, 1);

        peerTransportType = new QLabel(detailWidget);
        peerTransportType->setObjectName(QString::fromUtf8("peerTransportType"));
        peerTransportType->setCursor(QCursor(Qt::IBeamCursor));
        peerTransportType->setTextFormat(Qt::PlainText);
        peerTransportType->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerTransportType, 2, 2, 1, 1);

        peerSessionIdLabel = new QLabel(detailWidget);
        peerSessionIdLabel->setObjectName(QString::fromUtf8("peerSessionIdLabel"));

        gridLayout_2->addWidget(peerSessionIdLabel, 3, 0, 1, 1);

        peerSessionId = new QLabel(detailWidget);
        peerSessionId->setObjectName(QString::fromUtf8("peerSessionId"));
        peerSessionId->setCursor(QCursor(Qt::IBeamCursor));
        peerSessionId->setTextFormat(Qt::PlainText);
        peerSessionId->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerSessionId, 3, 2, 1, 1);

        peerNetworkLabel = new QLabel(detailWidget);
        peerNetworkLabel->setObjectName(QString::fromUtf8("peerNetworkLabel"));

        gridLayout_2->addWidget(peerNetworkLabel, 4, 0, 1, 1);

        peerNetwork = new QLabel(detailWidget);
        peerNetwork->setObjectName(QString::fromUtf8("peerNetwork"));
        peerNetwork->setCursor(QCursor(Qt::IBeamCursor));
        peerNetwork->setTextFormat(Qt::PlainText);
        peerNetwork->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerNetwork, 4, 2, 1, 1);

        label_30 = new QLabel(detailWidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_2->addWidget(label_30, 5, 0, 1, 1);

        peerPermissions = new QLabel(detailWidget);
        peerPermissions->setObjectName(QString::fromUtf8("peerPermissions"));
        peerPermissions->setCursor(QCursor(Qt::IBeamCursor));
        peerPermissions->setTextFormat(Qt::PlainText);
        peerPermissions->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerPermissions, 5, 2, 1, 1);

        peerConnectionTypeLabel = new QLabel(detailWidget);
        peerConnectionTypeLabel->setObjectName(QString::fromUtf8("peerConnectionTypeLabel"));

        gridLayout_2->addWidget(peerConnectionTypeLabel, 6, 0, 1, 1);

        peerConnectionType = new QLabel(detailWidget);
        peerConnectionType->setObjectName(QString::fromUtf8("peerConnectionType"));
        peerConnectionType->setCursor(QCursor(Qt::IBeamCursor));
        peerConnectionType->setTextFormat(Qt::PlainText);
        peerConnectionType->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerConnectionType, 6, 2, 1, 1);

        label_21 = new QLabel(detailWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_2->addWidget(label_21, 7, 0, 1, 1);

        peerVersion = new QLabel(detailWidget);
        peerVersion->setObjectName(QString::fromUtf8("peerVersion"));
        peerVersion->setCursor(QCursor(Qt::IBeamCursor));
        peerVersion->setTextFormat(Qt::PlainText);
        peerVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerVersion, 7, 2, 1, 1);

        label_28 = new QLabel(detailWidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_2->addWidget(label_28, 8, 0, 1, 1);

        peerSubversion = new QLabel(detailWidget);
        peerSubversion->setObjectName(QString::fromUtf8("peerSubversion"));
        peerSubversion->setCursor(QCursor(Qt::IBeamCursor));
        peerSubversion->setTextFormat(Qt::PlainText);
        peerSubversion->setWordWrap(true);
        peerSubversion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerSubversion, 8, 2, 1, 1);

        label_4 = new QLabel(detailWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 9, 0, 1, 1);

        peerServices = new QLabel(detailWidget);
        peerServices->setObjectName(QString::fromUtf8("peerServices"));
        peerServices->setCursor(QCursor(Qt::IBeamCursor));
        peerServices->setTextFormat(Qt::PlainText);
        peerServices->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerServices, 9, 2, 1, 1);

        peerRelayTxesLabel = new QLabel(detailWidget);
        peerRelayTxesLabel->setObjectName(QString::fromUtf8("peerRelayTxesLabel"));

        gridLayout_2->addWidget(peerRelayTxesLabel, 10, 0, 1, 1);

        peerRelayTxes = new QLabel(detailWidget);
        peerRelayTxes->setObjectName(QString::fromUtf8("peerRelayTxes"));
        peerRelayTxes->setCursor(QCursor(Qt::IBeamCursor));
        peerRelayTxes->setTextFormat(Qt::PlainText);
        peerRelayTxes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerRelayTxes, 10, 2, 1, 1);

        peerHighBandwidthLabel = new QLabel(detailWidget);
        peerHighBandwidthLabel->setObjectName(QString::fromUtf8("peerHighBandwidthLabel"));

        gridLayout_2->addWidget(peerHighBandwidthLabel, 11, 0, 1, 1);

        peerHighBandwidth = new QLabel(detailWidget);
        peerHighBandwidth->setObjectName(QString::fromUtf8("peerHighBandwidth"));
        peerHighBandwidth->setCursor(QCursor(Qt::IBeamCursor));
        peerHighBandwidth->setTextFormat(Qt::PlainText);
        peerHighBandwidth->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerHighBandwidth, 11, 2, 1, 1);

        label_29 = new QLabel(detailWidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_2->addWidget(label_29, 12, 0, 1, 1);

        peerHeight = new QLabel(detailWidget);
        peerHeight->setObjectName(QString::fromUtf8("peerHeight"));
        peerHeight->setCursor(QCursor(Qt::IBeamCursor));
        peerHeight->setTextFormat(Qt::PlainText);
        peerHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerHeight, 12, 2, 1, 1);

        label_27 = new QLabel(detailWidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_2->addWidget(label_27, 13, 0, 1, 1);

        peerSyncHeight = new QLabel(detailWidget);
        peerSyncHeight->setObjectName(QString::fromUtf8("peerSyncHeight"));
        peerSyncHeight->setCursor(QCursor(Qt::IBeamCursor));
        peerSyncHeight->setTextFormat(Qt::PlainText);
        peerSyncHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerSyncHeight, 13, 2, 1, 1);

        label_25 = new QLabel(detailWidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_2->addWidget(label_25, 14, 0, 1, 1);

        peerCommonHeight = new QLabel(detailWidget);
        peerCommonHeight->setObjectName(QString::fromUtf8("peerCommonHeight"));
        peerCommonHeight->setCursor(QCursor(Qt::IBeamCursor));
        peerCommonHeight->setTextFormat(Qt::PlainText);
        peerCommonHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerCommonHeight, 14, 2, 1, 1);

        label_22 = new QLabel(detailWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_2->addWidget(label_22, 15, 0, 1, 1);

        peerConnTime = new QLabel(detailWidget);
        peerConnTime->setObjectName(QString::fromUtf8("peerConnTime"));
        peerConnTime->setCursor(QCursor(Qt::IBeamCursor));
        peerConnTime->setTextFormat(Qt::PlainText);
        peerConnTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerConnTime, 15, 2, 1, 1);

        peerLastBlockLabel = new QLabel(detailWidget);
        peerLastBlockLabel->setObjectName(QString::fromUtf8("peerLastBlockLabel"));

        gridLayout_2->addWidget(peerLastBlockLabel, 16, 0, 1, 1);

        peerLastBlock = new QLabel(detailWidget);
        peerLastBlock->setObjectName(QString::fromUtf8("peerLastBlock"));
        peerLastBlock->setCursor(QCursor(Qt::IBeamCursor));
        peerLastBlock->setTextFormat(Qt::PlainText);
        peerLastBlock->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerLastBlock, 16, 2, 1, 1);

        peerLastTxLabel = new QLabel(detailWidget);
        peerLastTxLabel->setObjectName(QString::fromUtf8("peerLastTxLabel"));

        gridLayout_2->addWidget(peerLastTxLabel, 17, 0, 1, 1);

        peerLastTx = new QLabel(detailWidget);
        peerLastTx->setObjectName(QString::fromUtf8("peerLastTx"));
        peerLastTx->setCursor(QCursor(Qt::IBeamCursor));
        peerLastTx->setTextFormat(Qt::PlainText);
        peerLastTx->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerLastTx, 17, 2, 1, 1);

        label_15 = new QLabel(detailWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 18, 0, 1, 1);

        peerLastSend = new QLabel(detailWidget);
        peerLastSend->setObjectName(QString::fromUtf8("peerLastSend"));
        peerLastSend->setCursor(QCursor(Qt::IBeamCursor));
        peerLastSend->setTextFormat(Qt::PlainText);
        peerLastSend->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerLastSend, 18, 2, 1, 1);

        label_19 = new QLabel(detailWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 19, 0, 1, 1);

        peerLastRecv = new QLabel(detailWidget);
        peerLastRecv->setObjectName(QString::fromUtf8("peerLastRecv"));
        peerLastRecv->setCursor(QCursor(Qt::IBeamCursor));
        peerLastRecv->setTextFormat(Qt::PlainText);
        peerLastRecv->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerLastRecv, 19, 2, 1, 1);

        label_18 = new QLabel(detailWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 20, 0, 1, 1);

        peerBytesSent = new QLabel(detailWidget);
        peerBytesSent->setObjectName(QString::fromUtf8("peerBytesSent"));
        peerBytesSent->setCursor(QCursor(Qt::IBeamCursor));
        peerBytesSent->setTextFormat(Qt::PlainText);
        peerBytesSent->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerBytesSent, 20, 2, 1, 1);

        label_20 = new QLabel(detailWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 21, 0, 1, 1);

        peerBytesRecv = new QLabel(detailWidget);
        peerBytesRecv->setObjectName(QString::fromUtf8("peerBytesRecv"));
        peerBytesRecv->setCursor(QCursor(Qt::IBeamCursor));
        peerBytesRecv->setTextFormat(Qt::PlainText);
        peerBytesRecv->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerBytesRecv, 21, 2, 1, 1);

        label_26 = new QLabel(detailWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_2->addWidget(label_26, 22, 0, 1, 1);

        peerPingTime = new QLabel(detailWidget);
        peerPingTime->setObjectName(QString::fromUtf8("peerPingTime"));
        peerPingTime->setCursor(QCursor(Qt::IBeamCursor));
        peerPingTime->setTextFormat(Qt::PlainText);
        peerPingTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerPingTime, 22, 2, 1, 1);

        peerPingWaitLabel = new QLabel(detailWidget);
        peerPingWaitLabel->setObjectName(QString::fromUtf8("peerPingWaitLabel"));

        gridLayout_2->addWidget(peerPingWaitLabel, 23, 0, 1, 1);

        peerPingWait = new QLabel(detailWidget);
        peerPingWait->setObjectName(QString::fromUtf8("peerPingWait"));
        peerPingWait->setCursor(QCursor(Qt::IBeamCursor));
        peerPingWait->setTextFormat(Qt::PlainText);
        peerPingWait->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerPingWait, 23, 2, 1, 1);

        peerMinPingLabel = new QLabel(detailWidget);
        peerMinPingLabel->setObjectName(QString::fromUtf8("peerMinPingLabel"));

        gridLayout_2->addWidget(peerMinPingLabel, 24, 0, 1, 1);

        peerMinPing = new QLabel(detailWidget);
        peerMinPing->setObjectName(QString::fromUtf8("peerMinPing"));
        peerMinPing->setCursor(QCursor(Qt::IBeamCursor));
        peerMinPing->setTextFormat(Qt::PlainText);
        peerMinPing->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerMinPing, 24, 2, 1, 1);

        label_timeoffset = new QLabel(detailWidget);
        label_timeoffset->setObjectName(QString::fromUtf8("label_timeoffset"));

        gridLayout_2->addWidget(label_timeoffset, 25, 0, 1, 1);

        timeoffset = new QLabel(detailWidget);
        timeoffset->setObjectName(QString::fromUtf8("timeoffset"));
        timeoffset->setCursor(QCursor(Qt::IBeamCursor));
        timeoffset->setTextFormat(Qt::PlainText);
        timeoffset->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(timeoffset, 25, 2, 1, 1);

        peerMappedASLabel = new QLabel(detailWidget);
        peerMappedASLabel->setObjectName(QString::fromUtf8("peerMappedASLabel"));

        gridLayout_2->addWidget(peerMappedASLabel, 26, 0, 1, 1);

        peerMappedAS = new QLabel(detailWidget);
        peerMappedAS->setObjectName(QString::fromUtf8("peerMappedAS"));
        peerMappedAS->setCursor(QCursor(Qt::IBeamCursor));
        peerMappedAS->setTextFormat(Qt::PlainText);
        peerMappedAS->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerMappedAS, 26, 2, 1, 1);

        peerAddrRelayEnabledLabel = new QLabel(detailWidget);
        peerAddrRelayEnabledLabel->setObjectName(QString::fromUtf8("peerAddrRelayEnabledLabel"));

        gridLayout_2->addWidget(peerAddrRelayEnabledLabel, 27, 0, 1, 1);

        peerAddrRelayEnabled = new QLabel(detailWidget);
        peerAddrRelayEnabled->setObjectName(QString::fromUtf8("peerAddrRelayEnabled"));
        peerAddrRelayEnabled->setCursor(QCursor(Qt::IBeamCursor));
        peerAddrRelayEnabled->setTextFormat(Qt::PlainText);
        peerAddrRelayEnabled->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerAddrRelayEnabled, 27, 2, 1, 1);

        peerAddrProcessedLabel = new QLabel(detailWidget);
        peerAddrProcessedLabel->setObjectName(QString::fromUtf8("peerAddrProcessedLabel"));

        gridLayout_2->addWidget(peerAddrProcessedLabel, 28, 0, 1, 1);

        peerAddrProcessed = new QLabel(detailWidget);
        peerAddrProcessed->setObjectName(QString::fromUtf8("peerAddrProcessed"));
        peerAddrProcessed->setCursor(QCursor(Qt::IBeamCursor));
        peerAddrProcessed->setTextFormat(Qt::PlainText);
        peerAddrProcessed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerAddrProcessed, 28, 2, 1, 1);

        peerAddrRateLimitedLabel = new QLabel(detailWidget);
        peerAddrRateLimitedLabel->setObjectName(QString::fromUtf8("peerAddrRateLimitedLabel"));

        gridLayout_2->addWidget(peerAddrRateLimitedLabel, 29, 0, 1, 1);

        peerAddrRateLimited = new QLabel(detailWidget);
        peerAddrRateLimited->setObjectName(QString::fromUtf8("peerAddrRateLimited"));
        peerAddrRateLimited->setCursor(QCursor(Qt::IBeamCursor));
        peerAddrRateLimited->setTextFormat(Qt::PlainText);
        peerAddrRateLimited->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerAddrRateLimited, 29, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 30, 0, 1, 1);

        gridLayout_2->setColumnMinimumWidth(1, 10);
        scrollArea->setWidget(detailWidget);

        verticalLayout_8->addWidget(scrollArea);

        splitter->addWidget(peersTabRightPanel);

        verticalLayout_6->addWidget(splitter);

        stackedWidgetRPC->addWidget(pagePeers);
        pageRepair = new QWidget();
        pageRepair->setObjectName(QString::fromUtf8("pageRepair"));
        repairLayout = new QGridLayout(pageRepair);
        repairLayout->setObjectName(QString::fromUtf8("repairLayout"));
        repairLayout->setHorizontalSpacing(12);
        label_repair_header = new QLabel(pageRepair);
        label_repair_header->setObjectName(QString::fromUtf8("label_repair_header"));
        label_repair_header->setWordWrap(true);

        repairLayout->addWidget(label_repair_header, 0, 0, 1, 2);

        label_repair_helptext = new QLabel(pageRepair);
        label_repair_helptext->setObjectName(QString::fromUtf8("label_repair_helptext"));
        label_repair_helptext->setWordWrap(true);

        repairLayout->addWidget(label_repair_helptext, 1, 0, 1, 2);

        wallet_path = new QLabel(pageRepair);
        wallet_path->setObjectName(QString::fromUtf8("wallet_path"));

        repairLayout->addWidget(wallet_path, 2, 0, 1, 2);

        btn_rescan1 = new QPushButton(pageRepair);
        btn_rescan1->setObjectName(QString::fromUtf8("btn_rescan1"));
        btn_rescan1->setMinimumSize(QSize(180, 23));

        repairLayout->addWidget(btn_rescan1, 3, 0, 1, 1);

        label_repair_rescan1 = new QLabel(pageRepair);
        label_repair_rescan1->setObjectName(QString::fromUtf8("label_repair_rescan1"));
        label_repair_rescan1->setWordWrap(true);

        repairLayout->addWidget(label_repair_rescan1, 3, 1, 1, 1);

        btn_rescan2 = new QPushButton(pageRepair);
        btn_rescan2->setObjectName(QString::fromUtf8("btn_rescan2"));
        btn_rescan2->setMinimumSize(QSize(180, 23));

        repairLayout->addWidget(btn_rescan2, 4, 0, 1, 1);

        label_repair_rescan2 = new QLabel(pageRepair);
        label_repair_rescan2->setObjectName(QString::fromUtf8("label_repair_rescan2"));
        label_repair_rescan2->setWordWrap(true);

        repairLayout->addWidget(label_repair_rescan2, 4, 1, 1, 1);

        btn_reindex = new QPushButton(pageRepair);
        btn_reindex->setObjectName(QString::fromUtf8("btn_reindex"));

        repairLayout->addWidget(btn_reindex, 5, 0, 1, 1);

        label_repair_reindex = new QLabel(pageRepair);
        label_repair_reindex->setObjectName(QString::fromUtf8("label_repair_reindex"));
        label_repair_reindex->setWordWrap(true);

        repairLayout->addWidget(label_repair_reindex, 5, 1, 1, 1);

        verticalSpacerRepair = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        repairLayout->addItem(verticalSpacerRepair, 6, 1, 1, 1);

        repairLayout->setColumnStretch(1, 1);
        stackedWidgetRPC->addWidget(pageRepair);

        verticalLayout_2->addWidget(stackedWidgetRPC);


        retranslateUi(RPCConsole);

        stackedWidgetRPC->setCurrentIndex(0);
        tabWidgetInfo->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RPCConsole);
    } // setupUi

    void retranslateUi(QWidget *RPCConsole)
    {
        RPCConsole->setWindowTitle(QCoreApplication::translate("RPCConsole", "Tools window", nullptr));
        btnInfo->setText(QCoreApplication::translate("RPCConsole", "&Information", nullptr));
        btnConsole->setText(QCoreApplication::translate("RPCConsole", "&Console", nullptr));
        btnNetTraffic->setText(QCoreApplication::translate("RPCConsole", "&Network Traffic", nullptr));
        btnPeers->setText(QCoreApplication::translate("RPCConsole", "&Peers", nullptr));
        btnRepair->setText(QCoreApplication::translate("RPCConsole", "&Repair", nullptr));
        tabWidgetInfo->setTabText(tabWidgetInfo->indexOf(tabGeneral), QCoreApplication::translate("RPCConsole", "&General", nullptr));
        tabWidgetInfo->setTabText(tabWidgetInfo->indexOf(tabNetwork), QCoreApplication::translate("RPCConsole", "&Network", nullptr));
        tabWidgetInfo->setTabText(tabWidgetInfo->indexOf(tabGovernance), QCoreApplication::translate("RPCConsole", "Go&vernance", nullptr));
        WalletSelectorLabel->setText(QCoreApplication::translate("RPCConsole", "Wallet:", nullptr));
        WalletSelector->setItemText(0, QCoreApplication::translate("RPCConsole", "(none)", nullptr));

#if QT_CONFIG(tooltip)
        fontSmallerButton->setToolTip(QCoreApplication::translate("RPCConsole", "Decrease font size", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        fontBiggerButton->setToolTip(QCoreApplication::translate("RPCConsole", "Increase font size", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        clearButton->setToolTip(QCoreApplication::translate("RPCConsole", "Clear console", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit->setPlaceholderText(QString());
        btnClearTrafficGraph->setText(QCoreApplication::translate("RPCConsole", "&Reset", nullptr));
        banHeading->setText(QCoreApplication::translate("RPCConsole", "Banned peers", nullptr));
        peerHeading->setText(QCoreApplication::translate("RPCConsole", "Select a peer to view detailed information.", nullptr));
        label_50->setText(QCoreApplication::translate("RPCConsole", "Node Type", nullptr));
        peerNodeType->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_51->setText(QCoreApplication::translate("RPCConsole", "PoSe Score", nullptr));
        peerPoSeScore->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerTransportTypeLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The transport layer version: %1", nullptr));
#endif // QT_CONFIG(tooltip)
        peerTransportTypeLabel->setText(QCoreApplication::translate("RPCConsole", "Transport", nullptr));
        peerTransportType->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerSessionIdLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The BIP324 session ID string in hex.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerSessionIdLabel->setText(QCoreApplication::translate("RPCConsole", "Session ID", nullptr));
        peerSessionId->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerNetworkLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The network protocol this peer is connected through: IPv4, IPv6, Onion, I2P, or CJDNS.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerNetworkLabel->setText(QCoreApplication::translate("RPCConsole", "Network", nullptr));
        peerNetwork->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_30->setText(QCoreApplication::translate("RPCConsole", "Permissions", nullptr));
        peerPermissions->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerConnectionTypeLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The direction and type of peer connection: %1", nullptr));
#endif // QT_CONFIG(tooltip)
        peerConnectionTypeLabel->setText(QCoreApplication::translate("RPCConsole", "Direction/Type", nullptr));
        peerConnectionType->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_21->setText(QCoreApplication::translate("RPCConsole", "Version", nullptr));
        peerVersion->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_28->setText(QCoreApplication::translate("RPCConsole", "User Agent", nullptr));
        peerSubversion->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_4->setText(QCoreApplication::translate("RPCConsole", "Services", nullptr));
        peerServices->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerRelayTxesLabel->setToolTip(QCoreApplication::translate("RPCConsole", "Whether we relay transactions to this peer.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerRelayTxesLabel->setText(QCoreApplication::translate("RPCConsole", "Transaction Relay", nullptr));
        peerRelayTxes->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerHighBandwidthLabel->setToolTip(QCoreApplication::translate("RPCConsole", "High bandwidth BIP152 compact block relay: %1", nullptr));
#endif // QT_CONFIG(tooltip)
        peerHighBandwidthLabel->setText(QCoreApplication::translate("RPCConsole", "High Bandwidth", nullptr));
        peerHighBandwidth->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_29->setText(QCoreApplication::translate("RPCConsole", "Starting Block", nullptr));
        peerHeight->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_27->setText(QCoreApplication::translate("RPCConsole", "Synced Headers", nullptr));
        peerSyncHeight->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_25->setText(QCoreApplication::translate("RPCConsole", "Synced Blocks", nullptr));
        peerCommonHeight->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_22->setText(QCoreApplication::translate("RPCConsole", "Connection Time", nullptr));
        peerConnTime->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerLastBlockLabel->setToolTip(QCoreApplication::translate("RPCConsole", "Elapsed time since a novel block passing initial validity checks was received from this peer.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerLastBlockLabel->setText(QCoreApplication::translate("RPCConsole", "Last Block", nullptr));
        peerLastBlock->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerLastTxLabel->setToolTip(QCoreApplication::translate("RPCConsole", "Elapsed time since a novel transaction accepted into our mempool was received from this peer.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerLastTxLabel->setText(QCoreApplication::translate("RPCConsole", "Last Transaction", nullptr));
        peerLastTx->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_15->setText(QCoreApplication::translate("RPCConsole", "Last Send", nullptr));
        peerLastSend->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_19->setText(QCoreApplication::translate("RPCConsole", "Last Receive", nullptr));
        peerLastRecv->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_18->setText(QCoreApplication::translate("RPCConsole", "Sent", nullptr));
        peerBytesSent->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_20->setText(QCoreApplication::translate("RPCConsole", "Received", nullptr));
        peerBytesRecv->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_26->setText(QCoreApplication::translate("RPCConsole", "Ping Time", nullptr));
        peerPingTime->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerPingWaitLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The duration of a currently outstanding ping.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerPingWaitLabel->setText(QCoreApplication::translate("RPCConsole", "Ping Wait", nullptr));
        peerPingWait->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        peerMinPingLabel->setText(QCoreApplication::translate("RPCConsole", "Min Ping", nullptr));
        peerMinPing->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_timeoffset->setText(QCoreApplication::translate("RPCConsole", "Time Offset", nullptr));
        timeoffset->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerMappedASLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The mapped Autonomous System used for diversifying peer selection.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerMappedASLabel->setText(QCoreApplication::translate("RPCConsole", "Mapped AS", nullptr));
        peerMappedAS->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerAddrRelayEnabledLabel->setToolTip(QCoreApplication::translate("RPCConsole", "Whether we relay addresses to this peer.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerAddrRelayEnabledLabel->setText(QCoreApplication::translate("RPCConsole", "Address Relay", nullptr));
        peerAddrRelayEnabled->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerAddrProcessedLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The total number of addresses received from this peer that were processed (excludes addresses that were dropped due to rate-limiting).", nullptr));
#endif // QT_CONFIG(tooltip)
        peerAddrProcessedLabel->setText(QCoreApplication::translate("RPCConsole", "Addresses Processed", nullptr));
        peerAddrProcessed->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
#if QT_CONFIG(tooltip)
        peerAddrRateLimitedLabel->setToolTip(QCoreApplication::translate("RPCConsole", "The total number of addresses received from this peer that were dropped (not processed) due to rate-limiting.", nullptr));
#endif // QT_CONFIG(tooltip)
        peerAddrRateLimitedLabel->setText(QCoreApplication::translate("RPCConsole", "Addresses Rate-Limited", nullptr));
        peerAddrRateLimited->setText(QCoreApplication::translate("RPCConsole", "N/A", nullptr));
        label_repair_header->setText(QCoreApplication::translate("RPCConsole", "Repair options.", nullptr));
        label_repair_helptext->setText(QCoreApplication::translate("RPCConsole", "The buttons below will trigger repair actions to fix issues with corrupt files or missing/obsolete transactions.", nullptr));
        btn_rescan1->setText(QCoreApplication::translate("RPCConsole", "Rescan Chain", nullptr));
        label_repair_rescan1->setText(QCoreApplication::translate("RPCConsole", "Rescan the chain for missing wallet transactions starting from wallet creation time.", nullptr));
        btn_rescan2->setText(QCoreApplication::translate("RPCConsole", "Rescan Chain (full)", nullptr));
        label_repair_rescan2->setText(QCoreApplication::translate("RPCConsole", "Rescan the chain for missing wallet transactions starting from genesis block.", nullptr));
        btn_reindex->setText(QCoreApplication::translate("RPCConsole", "Rebuild Index", nullptr));
        label_repair_reindex->setText(QCoreApplication::translate("RPCConsole", "Restarts the client to rebuild the chain index from current blk000??.dat files.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RPCConsole: public Ui_RPCConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGWINDOW_H
