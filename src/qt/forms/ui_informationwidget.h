/********************************************************************************
** Form generated from reading UI file 'informationwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONWIDGET_H
#define UI_INFORMATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InformationWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *clientVersion;
    QLabel *labelClientUserAgent;
    QLabel *clientUserAgent;
    QLabel *label_12;
    QLabel *dataDir;
    QLabel *label_11;
    QLabel *blocksDir;
    QLabel *label_13;
    QLabel *startupTime;
    QLabel *labelNetwork;
    QLabel *label_8;
    QLabel *networkName;
    QLabel *label_7;
    QLabel *numberOfConnections;
    QLabel *label_14;
    QLabel *localAddresses;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *numberOfBlocks;
    QLabel *labelLastBlockTime;
    QLabel *lastBlockTime;
    QLabel *lastBlockHashLabel;
    QLabel *lastBlockHash;
    QLabel *labelMempoolTitle;
    QLabel *labelNumberOfTransactions;
    QLabel *mempoolNumberTxs;
    QLabel *labelMemoryUsage;
    QLabel *mempoolSize;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *InformationWidget)
    {
        if (InformationWidget->objectName().isEmpty())
            InformationWidget->setObjectName(QString::fromUtf8("InformationWidget"));
        InformationWidget->resize(700, 500);
        gridLayout = new QGridLayout(InformationWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        label_9 = new QLabel(InformationWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_6 = new QLabel(InformationWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        clientVersion = new QLabel(InformationWidget);
        clientVersion->setObjectName(QString::fromUtf8("clientVersion"));
        clientVersion->setCursor(QCursor(Qt::IBeamCursor));
        clientVersion->setTextFormat(Qt::PlainText);
        clientVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientVersion, 1, 1, 1, 1);

        labelClientUserAgent = new QLabel(InformationWidget);
        labelClientUserAgent->setObjectName(QString::fromUtf8("labelClientUserAgent"));
        labelClientUserAgent->setIndent(10);

        gridLayout->addWidget(labelClientUserAgent, 2, 0, 1, 1);

        clientUserAgent = new QLabel(InformationWidget);
        clientUserAgent->setObjectName(QString::fromUtf8("clientUserAgent"));
        clientUserAgent->setCursor(QCursor(Qt::IBeamCursor));
        clientUserAgent->setTextFormat(Qt::PlainText);
        clientUserAgent->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientUserAgent, 2, 1, 1, 1);

        label_12 = new QLabel(InformationWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        dataDir = new QLabel(InformationWidget);
        dataDir->setObjectName(QString::fromUtf8("dataDir"));
        dataDir->setCursor(QCursor(Qt::IBeamCursor));
        dataDir->setTextFormat(Qt::PlainText);
        dataDir->setWordWrap(true);
        dataDir->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(dataDir, 3, 1, 1, 1);

        label_11 = new QLabel(InformationWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 4, 0, 1, 1);

        blocksDir = new QLabel(InformationWidget);
        blocksDir->setObjectName(QString::fromUtf8("blocksDir"));
        blocksDir->setCursor(QCursor(Qt::IBeamCursor));
        blocksDir->setTextFormat(Qt::PlainText);
        blocksDir->setWordWrap(true);
        blocksDir->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(blocksDir, 4, 1, 1, 1);

        label_13 = new QLabel(InformationWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        startupTime = new QLabel(InformationWidget);
        startupTime->setObjectName(QString::fromUtf8("startupTime"));
        startupTime->setCursor(QCursor(Qt::IBeamCursor));
        startupTime->setTextFormat(Qt::PlainText);
        startupTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(startupTime, 5, 1, 1, 1);

        labelNetwork = new QLabel(InformationWidget);
        labelNetwork->setObjectName(QString::fromUtf8("labelNetwork"));

        gridLayout->addWidget(labelNetwork, 6, 0, 1, 1);

        label_8 = new QLabel(InformationWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        networkName = new QLabel(InformationWidget);
        networkName->setObjectName(QString::fromUtf8("networkName"));
        networkName->setCursor(QCursor(Qt::IBeamCursor));
        networkName->setTextFormat(Qt::PlainText);
        networkName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(networkName, 7, 1, 1, 1);

        label_7 = new QLabel(InformationWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        numberOfConnections = new QLabel(InformationWidget);
        numberOfConnections->setObjectName(QString::fromUtf8("numberOfConnections"));
        numberOfConnections->setCursor(QCursor(Qt::IBeamCursor));
        numberOfConnections->setTextFormat(Qt::PlainText);
        numberOfConnections->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfConnections, 8, 1, 1, 1);

        label_14 = new QLabel(InformationWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 9, 0, 1, 1);

        localAddresses = new QLabel(InformationWidget);
        localAddresses->setObjectName(QString::fromUtf8("localAddresses"));
        localAddresses->setCursor(QCursor(Qt::IBeamCursor));
        localAddresses->setWordWrap(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(localAddresses->sizePolicy().hasHeightForWidth());
        localAddresses->setSizePolicy(sizePolicy);
        localAddresses->setText(QString::fromUtf8("N/A"));
        localAddresses->setTextFormat(Qt::PlainText);
        localAddresses->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(localAddresses, 9, 1, 1, 1);

        label_10 = new QLabel(InformationWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 10, 0, 1, 1);

        label_3 = new QLabel(InformationWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 11, 0, 1, 1);

        numberOfBlocks = new QLabel(InformationWidget);
        numberOfBlocks->setObjectName(QString::fromUtf8("numberOfBlocks"));
        numberOfBlocks->setCursor(QCursor(Qt::IBeamCursor));
        numberOfBlocks->setTextFormat(Qt::PlainText);
        numberOfBlocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfBlocks, 11, 1, 1, 1);

        labelLastBlockTime = new QLabel(InformationWidget);
        labelLastBlockTime->setObjectName(QString::fromUtf8("labelLastBlockTime"));

        gridLayout->addWidget(labelLastBlockTime, 12, 0, 1, 1);

        lastBlockTime = new QLabel(InformationWidget);
        lastBlockTime->setObjectName(QString::fromUtf8("lastBlockTime"));
        lastBlockTime->setCursor(QCursor(Qt::IBeamCursor));
        lastBlockTime->setTextFormat(Qt::PlainText);
        lastBlockTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lastBlockTime, 12, 1, 1, 1);

        lastBlockHashLabel = new QLabel(InformationWidget);
        lastBlockHashLabel->setObjectName(QString::fromUtf8("lastBlockHashLabel"));

        gridLayout->addWidget(lastBlockHashLabel, 13, 0, 1, 1);

        lastBlockHash = new QLabel(InformationWidget);
        lastBlockHash->setObjectName(QString::fromUtf8("lastBlockHash"));
        lastBlockHash->setCursor(QCursor(Qt::IBeamCursor));
        lastBlockHash->setTextFormat(Qt::PlainText);
        lastBlockHash->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lastBlockHash, 13, 1, 1, 1);

        labelMempoolTitle = new QLabel(InformationWidget);
        labelMempoolTitle->setObjectName(QString::fromUtf8("labelMempoolTitle"));

        gridLayout->addWidget(labelMempoolTitle, 14, 0, 1, 1);

        labelNumberOfTransactions = new QLabel(InformationWidget);
        labelNumberOfTransactions->setObjectName(QString::fromUtf8("labelNumberOfTransactions"));

        gridLayout->addWidget(labelNumberOfTransactions, 15, 0, 1, 1);

        mempoolNumberTxs = new QLabel(InformationWidget);
        mempoolNumberTxs->setObjectName(QString::fromUtf8("mempoolNumberTxs"));
        mempoolNumberTxs->setCursor(QCursor(Qt::IBeamCursor));
        mempoolNumberTxs->setTextFormat(Qt::PlainText);
        mempoolNumberTxs->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(mempoolNumberTxs, 15, 1, 1, 1);

        labelMemoryUsage = new QLabel(InformationWidget);
        labelMemoryUsage->setObjectName(QString::fromUtf8("labelMemoryUsage"));

        gridLayout->addWidget(labelMemoryUsage, 16, 0, 1, 1);

        mempoolSize = new QLabel(InformationWidget);
        mempoolSize->setObjectName(QString::fromUtf8("mempoolSize"));
        mempoolSize->setCursor(QCursor(Qt::IBeamCursor));
        mempoolSize->setTextFormat(Qt::PlainText);
        mempoolSize->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(mempoolSize, 16, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 17, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        retranslateUi(InformationWidget);

        QMetaObject::connectSlotsByName(InformationWidget);
    } // setupUi

    void retranslateUi(QWidget *InformationWidget)
    {
        label_9->setText(QCoreApplication::translate("InformationWidget", "General", nullptr));
        label_6->setText(QCoreApplication::translate("InformationWidget", "Client version", nullptr));
        clientVersion->setText(QCoreApplication::translate("InformationWidget", "N/A", nullptr));
        labelClientUserAgent->setText(QCoreApplication::translate("InformationWidget", "User Agent", nullptr));
        clientUserAgent->setText(QCoreApplication::translate("InformationWidget", "N/A", nullptr));
        label_12->setText(QCoreApplication::translate("InformationWidget", "Datadir", nullptr));
#if QT_CONFIG(tooltip)
        dataDir->setToolTip(QCoreApplication::translate("InformationWidget", "To specify a non-default location of the data directory use the '%1' option.", nullptr));
#endif // QT_CONFIG(tooltip)
        dataDir->setText(QCoreApplication::translate("InformationWidget", "N/A", nullptr));
        label_11->setText(QCoreApplication::translate("InformationWidget", "Blocksdir", nullptr));
#if QT_CONFIG(tooltip)
        blocksDir->setToolTip(QCoreApplication::translate("InformationWidget", "To specify a non-default location of the blocks directory use the '%1' option.", nullptr));
#endif // QT_CONFIG(tooltip)
        blocksDir->setText(QCoreApplication::translate("InformationWidget", "N/A", nullptr));
        label_13->setText(QCoreApplication::translate("InformationWidget", "Startup time", nullptr));
        startupTime->setText(QCoreApplication::translate("InformationWidget", "N/A", nullptr));
        labelNetwork->setText(QCoreApplication::translate("InformationWidget", "Network", nullptr));
        label_8->setText(QCoreApplication::translate("InformationWidget", "Name", nullptr));
        networkName->setText(QCoreApplication::translate("InformationWidget", "N/A", nullptr));
        label_7->setText(QCoreApplication::translate("InformationWidget", "Number of connections", nullptr));
        numberOfConnections->setText(QCoreApplication::translate("InformationWidget", "N/A", nullptr));
        label_14->setText(QCoreApplication::translate("InformationWidget", "Local Addresses", nullptr));
#if QT_CONFIG(tooltip)
        localAddresses->setToolTip(QCoreApplication::translate("InformationWidget", "Network addresses that your Dash node is currently using to communicate with other nodes.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("InformationWidget", "Block chain", nullptr));
        label_3->setText(QCoreApplication::translate("InformationWidget", "Current block height", nullptr));
        numberOfBlocks->setText(QCoreApplication::translate("InformationWidget", "N/A", nullptr));
        labelLastBlockTime->setText(QCoreApplication::translate("InformationWidget", "Last block time", nullptr));
        lastBlockTime->setText(QCoreApplication::translate("InformationWidget", "N/A", nullptr));
        lastBlockHashLabel->setText(QCoreApplication::translate("InformationWidget", "Last block hash", nullptr));
        lastBlockHash->setText(QCoreApplication::translate("InformationWidget", "N/A", nullptr));
        labelMempoolTitle->setText(QCoreApplication::translate("InformationWidget", "Memory Pool", nullptr));
        labelNumberOfTransactions->setText(QCoreApplication::translate("InformationWidget", "Current number of transactions", nullptr));
        mempoolNumberTxs->setText(QCoreApplication::translate("InformationWidget", "N/A", nullptr));
        labelMemoryUsage->setText(QCoreApplication::translate("InformationWidget", "Memory usage", nullptr));
        mempoolSize->setText(QCoreApplication::translate("InformationWidget", "N/A", nullptr));
        (void)InformationWidget;
    } // retranslateUi

};

namespace Ui {
    class InformationWidget: public Ui_InformationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONWIDGET_H
