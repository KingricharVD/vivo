/********************************************************************************
** Form generated from reading UI file 'proposalinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPOSALINFO_H
#define UI_PROPOSALINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qt/donutchart.h"

QT_BEGIN_NAMESPACE

class Ui_ProposalInfo
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *leftPanel;
    QGridLayout *gridLayoutGovernance;
    QLabel *labelGeneral;
    QLabel *labelSuperblockCycleTitle;
    QLabel *labelSuperblockCycle;
    QLabel *labelLastSuperblockTitle;
    QLabel *labelLastSuperblock;
    QLabel *labelNextSuperblockTitle;
    QLabel *labelNextSuperblock;
    QLabel *labelVotingDeadlineTitle;
    QLabel *labelVotingDeadline;
    QLabel *labelParticipation;
    QLabel *labelMasternodesVotingTitle;
    QLabel *labelMasternodesVoting;
    QLabel *labelEvoNodesVotingTitle;
    QLabel *labelEvoNodesVoting;
    QLabel *labelPassingThresholdTitle;
    QLabel *labelPassingThreshold;
    QLabel *labelNode;
    QLabel *labelMasternodesControlledTitle;
    QLabel *labelMasternodesControlled;
    QLabel *labelWeightedVotesTitle;
    QLabel *labelWeightedVotes;
    QLabel *labelProposals;
    QLabel *labelProposalCountTitle;
    QLabel *labelProposalCount;
    QLabel *labelBudgetAllocatedTitle;
    QLabel *labelBudgetAllocated;
    QLabel *labelPassingProposalsTitle;
    QLabel *labelPassingProposals;
    QLabel *labelUnfundedProposalsTitle;
    QLabel *labelUnfundedProposals;
    QLabel *labelFailingProposalsTitle;
    QLabel *labelFailingProposals;
    QSpacerItem *verticalSpacerGovernance;
    DonutChart *budgetChart;

    void setupUi(QWidget *ProposalInfo)
    {
        if (ProposalInfo->objectName().isEmpty())
            ProposalInfo->setObjectName(QString::fromUtf8("ProposalInfo"));
        ProposalInfo->resize(700, 400);
        horizontalLayout = new QHBoxLayout(ProposalInfo);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftPanel = new QWidget(ProposalInfo);
        leftPanel->setObjectName(QString::fromUtf8("leftPanel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftPanel->sizePolicy().hasHeightForWidth());
        leftPanel->setSizePolicy(sizePolicy);
        gridLayoutGovernance = new QGridLayout(leftPanel);
        gridLayoutGovernance->setObjectName(QString::fromUtf8("gridLayoutGovernance"));
        gridLayoutGovernance->setHorizontalSpacing(12);
        gridLayoutGovernance->setContentsMargins(0, 0, 0, 0);
        labelGeneral = new QLabel(leftPanel);
        labelGeneral->setObjectName(QString::fromUtf8("labelGeneral"));

        gridLayoutGovernance->addWidget(labelGeneral, 0, 0, 1, 1);

        labelSuperblockCycleTitle = new QLabel(leftPanel);
        labelSuperblockCycleTitle->setObjectName(QString::fromUtf8("labelSuperblockCycleTitle"));

        gridLayoutGovernance->addWidget(labelSuperblockCycleTitle, 1, 0, 1, 1);

        labelSuperblockCycle = new QLabel(leftPanel);
        labelSuperblockCycle->setObjectName(QString::fromUtf8("labelSuperblockCycle"));
        labelSuperblockCycle->setCursor(QCursor(Qt::IBeamCursor));
        labelSuperblockCycle->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayoutGovernance->addWidget(labelSuperblockCycle, 1, 1, 1, 2);

        labelLastSuperblockTitle = new QLabel(leftPanel);
        labelLastSuperblockTitle->setObjectName(QString::fromUtf8("labelLastSuperblockTitle"));

        gridLayoutGovernance->addWidget(labelLastSuperblockTitle, 2, 0, 1, 1);

        labelLastSuperblock = new QLabel(leftPanel);
        labelLastSuperblock->setObjectName(QString::fromUtf8("labelLastSuperblock"));
        labelLastSuperblock->setCursor(QCursor(Qt::IBeamCursor));
        labelLastSuperblock->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayoutGovernance->addWidget(labelLastSuperblock, 2, 1, 1, 2);

        labelNextSuperblockTitle = new QLabel(leftPanel);
        labelNextSuperblockTitle->setObjectName(QString::fromUtf8("labelNextSuperblockTitle"));

        gridLayoutGovernance->addWidget(labelNextSuperblockTitle, 3, 0, 1, 1);

        labelNextSuperblock = new QLabel(leftPanel);
        labelNextSuperblock->setObjectName(QString::fromUtf8("labelNextSuperblock"));
        labelNextSuperblock->setCursor(QCursor(Qt::IBeamCursor));
        labelNextSuperblock->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayoutGovernance->addWidget(labelNextSuperblock, 3, 1, 1, 2);

        labelVotingDeadlineTitle = new QLabel(leftPanel);
        labelVotingDeadlineTitle->setObjectName(QString::fromUtf8("labelVotingDeadlineTitle"));

        gridLayoutGovernance->addWidget(labelVotingDeadlineTitle, 4, 0, 1, 1);

        labelVotingDeadline = new QLabel(leftPanel);
        labelVotingDeadline->setObjectName(QString::fromUtf8("labelVotingDeadline"));
        labelVotingDeadline->setCursor(QCursor(Qt::IBeamCursor));
        labelVotingDeadline->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayoutGovernance->addWidget(labelVotingDeadline, 4, 1, 1, 2);

        labelParticipation = new QLabel(leftPanel);
        labelParticipation->setObjectName(QString::fromUtf8("labelParticipation"));

        gridLayoutGovernance->addWidget(labelParticipation, 5, 0, 1, 1);

        labelMasternodesVotingTitle = new QLabel(leftPanel);
        labelMasternodesVotingTitle->setObjectName(QString::fromUtf8("labelMasternodesVotingTitle"));

        gridLayoutGovernance->addWidget(labelMasternodesVotingTitle, 6, 0, 1, 1);

        labelMasternodesVoting = new QLabel(leftPanel);
        labelMasternodesVoting->setObjectName(QString::fromUtf8("labelMasternodesVoting"));
        labelMasternodesVoting->setCursor(QCursor(Qt::IBeamCursor));
        labelMasternodesVoting->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayoutGovernance->addWidget(labelMasternodesVoting, 6, 1, 1, 2);

        labelEvoNodesVotingTitle = new QLabel(leftPanel);
        labelEvoNodesVotingTitle->setObjectName(QString::fromUtf8("labelEvoNodesVotingTitle"));

        gridLayoutGovernance->addWidget(labelEvoNodesVotingTitle, 7, 0, 1, 1);

        labelEvoNodesVoting = new QLabel(leftPanel);
        labelEvoNodesVoting->setObjectName(QString::fromUtf8("labelEvoNodesVoting"));
        labelEvoNodesVoting->setCursor(QCursor(Qt::IBeamCursor));
        labelEvoNodesVoting->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayoutGovernance->addWidget(labelEvoNodesVoting, 7, 1, 1, 2);

        labelPassingThresholdTitle = new QLabel(leftPanel);
        labelPassingThresholdTitle->setObjectName(QString::fromUtf8("labelPassingThresholdTitle"));

        gridLayoutGovernance->addWidget(labelPassingThresholdTitle, 8, 0, 1, 1);

        labelPassingThreshold = new QLabel(leftPanel);
        labelPassingThreshold->setObjectName(QString::fromUtf8("labelPassingThreshold"));
        labelPassingThreshold->setCursor(QCursor(Qt::IBeamCursor));
        labelPassingThreshold->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayoutGovernance->addWidget(labelPassingThreshold, 8, 1, 1, 2);

        labelNode = new QLabel(leftPanel);
        labelNode->setObjectName(QString::fromUtf8("labelNode"));

        gridLayoutGovernance->addWidget(labelNode, 9, 0, 1, 1);

        labelMasternodesControlledTitle = new QLabel(leftPanel);
        labelMasternodesControlledTitle->setObjectName(QString::fromUtf8("labelMasternodesControlledTitle"));

        gridLayoutGovernance->addWidget(labelMasternodesControlledTitle, 10, 0, 1, 1);

        labelMasternodesControlled = new QLabel(leftPanel);
        labelMasternodesControlled->setObjectName(QString::fromUtf8("labelMasternodesControlled"));
        labelMasternodesControlled->setCursor(QCursor(Qt::IBeamCursor));
        labelMasternodesControlled->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayoutGovernance->addWidget(labelMasternodesControlled, 10, 1, 1, 2);

        labelWeightedVotesTitle = new QLabel(leftPanel);
        labelWeightedVotesTitle->setObjectName(QString::fromUtf8("labelWeightedVotesTitle"));

        gridLayoutGovernance->addWidget(labelWeightedVotesTitle, 11, 0, 1, 1);

        labelWeightedVotes = new QLabel(leftPanel);
        labelWeightedVotes->setObjectName(QString::fromUtf8("labelWeightedVotes"));
        labelWeightedVotes->setCursor(QCursor(Qt::IBeamCursor));
        labelWeightedVotes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayoutGovernance->addWidget(labelWeightedVotes, 11, 1, 1, 2);

        labelProposals = new QLabel(leftPanel);
        labelProposals->setObjectName(QString::fromUtf8("labelProposals"));

        gridLayoutGovernance->addWidget(labelProposals, 12, 0, 1, 1);

        labelProposalCountTitle = new QLabel(leftPanel);
        labelProposalCountTitle->setObjectName(QString::fromUtf8("labelProposalCountTitle"));

        gridLayoutGovernance->addWidget(labelProposalCountTitle, 13, 0, 1, 1);

        labelProposalCount = new QLabel(leftPanel);
        labelProposalCount->setObjectName(QString::fromUtf8("labelProposalCount"));
        labelProposalCount->setCursor(QCursor(Qt::IBeamCursor));
        labelProposalCount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayoutGovernance->addWidget(labelProposalCount, 13, 1, 1, 2);

        labelBudgetAllocatedTitle = new QLabel(leftPanel);
        labelBudgetAllocatedTitle->setObjectName(QString::fromUtf8("labelBudgetAllocatedTitle"));

        gridLayoutGovernance->addWidget(labelBudgetAllocatedTitle, 14, 0, 1, 1);

        labelBudgetAllocated = new QLabel(leftPanel);
        labelBudgetAllocated->setObjectName(QString::fromUtf8("labelBudgetAllocated"));
        labelBudgetAllocated->setCursor(QCursor(Qt::IBeamCursor));
        labelBudgetAllocated->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayoutGovernance->addWidget(labelBudgetAllocated, 14, 1, 1, 2);

        labelPassingProposalsTitle = new QLabel(leftPanel);
        labelPassingProposalsTitle->setObjectName(QString::fromUtf8("labelPassingProposalsTitle"));

        gridLayoutGovernance->addWidget(labelPassingProposalsTitle, 15, 0, 1, 1);

        labelPassingProposals = new QLabel(leftPanel);
        labelPassingProposals->setObjectName(QString::fromUtf8("labelPassingProposals"));
        labelPassingProposals->setCursor(QCursor(Qt::IBeamCursor));
        labelPassingProposals->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayoutGovernance->addWidget(labelPassingProposals, 15, 1, 1, 2);

        labelUnfundedProposalsTitle = new QLabel(leftPanel);
        labelUnfundedProposalsTitle->setObjectName(QString::fromUtf8("labelUnfundedProposalsTitle"));
        labelUnfundedProposalsTitle->setIndent(10);

        gridLayoutGovernance->addWidget(labelUnfundedProposalsTitle, 16, 0, 1, 1);

        labelUnfundedProposals = new QLabel(leftPanel);
        labelUnfundedProposals->setObjectName(QString::fromUtf8("labelUnfundedProposals"));
        labelUnfundedProposals->setCursor(QCursor(Qt::IBeamCursor));
        labelUnfundedProposals->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayoutGovernance->addWidget(labelUnfundedProposals, 16, 1, 1, 2);

        labelFailingProposalsTitle = new QLabel(leftPanel);
        labelFailingProposalsTitle->setObjectName(QString::fromUtf8("labelFailingProposalsTitle"));

        gridLayoutGovernance->addWidget(labelFailingProposalsTitle, 17, 0, 1, 1);

        labelFailingProposals = new QLabel(leftPanel);
        labelFailingProposals->setObjectName(QString::fromUtf8("labelFailingProposals"));
        labelFailingProposals->setCursor(QCursor(Qt::IBeamCursor));
        labelFailingProposals->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayoutGovernance->addWidget(labelFailingProposals, 17, 1, 1, 2);

        verticalSpacerGovernance = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayoutGovernance->addItem(verticalSpacerGovernance, 18, 0, 1, 1);

        gridLayoutGovernance->setColumnStretch(1, 1);

        horizontalLayout->addWidget(leftPanel);

        budgetChart = new DonutChart(ProposalInfo);
        budgetChart->setObjectName(QString::fromUtf8("budgetChart"));
        budgetChart->setMinimumSize(QSize(150, 150));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(budgetChart->sizePolicy().hasHeightForWidth());
        budgetChart->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(budgetChart);


        retranslateUi(ProposalInfo);

        QMetaObject::connectSlotsByName(ProposalInfo);
    } // setupUi

    void retranslateUi(QWidget *ProposalInfo)
    {
        labelGeneral->setText(QCoreApplication::translate("ProposalInfo", "General", nullptr));
        labelSuperblockCycleTitle->setText(QCoreApplication::translate("ProposalInfo", "Voting cycles", nullptr));
        labelSuperblockCycle->setText(QCoreApplication::translate("ProposalInfo", "N/A", nullptr));
        labelLastSuperblockTitle->setText(QCoreApplication::translate("ProposalInfo", "Last superblock", nullptr));
        labelLastSuperblock->setText(QCoreApplication::translate("ProposalInfo", "N/A", nullptr));
        labelNextSuperblockTitle->setText(QCoreApplication::translate("ProposalInfo", "Next superblock", nullptr));
        labelNextSuperblock->setText(QCoreApplication::translate("ProposalInfo", "N/A", nullptr));
        labelVotingDeadlineTitle->setText(QCoreApplication::translate("ProposalInfo", "Voting cutoff block", nullptr));
        labelVotingDeadline->setText(QCoreApplication::translate("ProposalInfo", "N/A", nullptr));
        labelParticipation->setText(QCoreApplication::translate("ProposalInfo", "Participation", nullptr));
        labelMasternodesVotingTitle->setText(QCoreApplication::translate("ProposalInfo", "Masternodes voting", nullptr));
        labelMasternodesVoting->setText(QCoreApplication::translate("ProposalInfo", "N/A", nullptr));
        labelEvoNodesVotingTitle->setText(QCoreApplication::translate("ProposalInfo", "EvoNodes voting", nullptr));
        labelEvoNodesVoting->setText(QCoreApplication::translate("ProposalInfo", "N/A", nullptr));
        labelPassingThresholdTitle->setText(QCoreApplication::translate("ProposalInfo", "Passing threshold", nullptr));
        labelPassingThreshold->setText(QCoreApplication::translate("ProposalInfo", "N/A", nullptr));
        labelNode->setText(QCoreApplication::translate("ProposalInfo", "Node", nullptr));
        labelMasternodesControlledTitle->setText(QCoreApplication::translate("ProposalInfo", "Masternodes controlled", nullptr));
        labelMasternodesControlled->setText(QCoreApplication::translate("ProposalInfo", "N/A", nullptr));
        labelWeightedVotesTitle->setText(QCoreApplication::translate("ProposalInfo", "Votes controlled", nullptr));
        labelWeightedVotes->setText(QCoreApplication::translate("ProposalInfo", "N/A", nullptr));
        labelProposals->setText(QCoreApplication::translate("ProposalInfo", "Proposals", nullptr));
        labelProposalCountTitle->setText(QCoreApplication::translate("ProposalInfo", "Proposal Count", nullptr));
        labelProposalCount->setText(QCoreApplication::translate("ProposalInfo", "N/A", nullptr));
        labelBudgetAllocatedTitle->setText(QCoreApplication::translate("ProposalInfo", "Budget allocated", nullptr));
        labelBudgetAllocated->setText(QCoreApplication::translate("ProposalInfo", "N/A", nullptr));
        labelPassingProposalsTitle->setText(QCoreApplication::translate("ProposalInfo", "Passing Proposals", nullptr));
        labelPassingProposals->setText(QCoreApplication::translate("ProposalInfo", "N/A", nullptr));
        labelUnfundedProposalsTitle->setText(QCoreApplication::translate("ProposalInfo", "Unfunded proposals", nullptr));
        labelUnfundedProposals->setText(QCoreApplication::translate("ProposalInfo", "N/A", nullptr));
        labelFailingProposalsTitle->setText(QCoreApplication::translate("ProposalInfo", "Failing Proposals", nullptr));
        labelFailingProposals->setText(QCoreApplication::translate("ProposalInfo", "N/A", nullptr));
        (void)ProposalInfo;
    } // retranslateUi

};

namespace Ui {
    class ProposalInfo: public Ui_ProposalInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPOSALINFO_H
