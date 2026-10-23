/********************************************************************************
** Form generated from reading UI file 'proposallist.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPOSALLIST_H
#define UI_PROPOSALLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProposalList
{
public:
    QVBoxLayout *topLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_top;
    QComboBox *proposalSourceCombo;
    QLineEdit *filterLineEdit;
    QPushButton *btnInfoView;
    QStackedWidget *proposalStack;
    QTableView *govTableView;
    QWidget *emptyPage;
    QVBoxLayout *emptyLayout;
    QSpacerItem *emptySpacerTop;
    QLabel *emptyLabel;
    QSpacerItem *emptySpacerBottom;
    QHBoxLayout *horizontalLayout_bottom;
    QPushButton *btnCreateProposal;
    QPushButton *btnResumeProposal;
    QSpacerItem *horizontalSpacer_bottom;
    QHBoxLayout *horizontalLayout_count;
    QLabel *label_count_2;
    QLabel *countLabel;

    void setupUi(QWidget *ProposalList)
    {
        if (ProposalList->objectName().isEmpty())
            ProposalList->setObjectName(QString::fromUtf8("ProposalList"));
        ProposalList->resize(762, 457);
        topLayout = new QVBoxLayout(ProposalList);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        topLayout->setContentsMargins(20, 0, 20, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_top = new QHBoxLayout();
        horizontalLayout_top->setObjectName(QString::fromUtf8("horizontalLayout_top"));
        horizontalLayout_top->setContentsMargins(-1, -1, -1, 0);
        proposalSourceCombo = new QComboBox(ProposalList);
        proposalSourceCombo->setObjectName(QString::fromUtf8("proposalSourceCombo"));

        horizontalLayout_top->addWidget(proposalSourceCombo);

        filterLineEdit = new QLineEdit(ProposalList);
        filterLineEdit->setObjectName(QString::fromUtf8("filterLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(filterLineEdit->sizePolicy().hasHeightForWidth());
        filterLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_top->addWidget(filterLineEdit);

        btnInfoView = new QPushButton(ProposalList);
        btnInfoView->setObjectName(QString::fromUtf8("btnInfoView"));

        horizontalLayout_top->addWidget(btnInfoView);


        verticalLayout->addLayout(horizontalLayout_top);

        proposalStack = new QStackedWidget(ProposalList);
        proposalStack->setObjectName(QString::fromUtf8("proposalStack"));
        govTableView = new QTableView();
        govTableView->setObjectName(QString::fromUtf8("govTableView"));
        proposalStack->addWidget(govTableView);
        emptyPage = new QWidget();
        emptyPage->setObjectName(QString::fromUtf8("emptyPage"));
        emptyLayout = new QVBoxLayout(emptyPage);
        emptyLayout->setObjectName(QString::fromUtf8("emptyLayout"));
        emptySpacerTop = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        emptyLayout->addItem(emptySpacerTop);

        emptyLabel = new QLabel(emptyPage);
        emptyLabel->setObjectName(QString::fromUtf8("emptyLabel"));
        emptyLabel->setAlignment(Qt::AlignCenter);

        emptyLayout->addWidget(emptyLabel);

        emptySpacerBottom = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        emptyLayout->addItem(emptySpacerBottom);

        proposalStack->addWidget(emptyPage);

        verticalLayout->addWidget(proposalStack);

        horizontalLayout_bottom = new QHBoxLayout();
        horizontalLayout_bottom->setObjectName(QString::fromUtf8("horizontalLayout_bottom"));
        btnCreateProposal = new QPushButton(ProposalList);
        btnCreateProposal->setObjectName(QString::fromUtf8("btnCreateProposal"));

        horizontalLayout_bottom->addWidget(btnCreateProposal);

        btnResumeProposal = new QPushButton(ProposalList);
        btnResumeProposal->setObjectName(QString::fromUtf8("btnResumeProposal"));

        horizontalLayout_bottom->addWidget(btnResumeProposal);

        horizontalSpacer_bottom = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_bottom->addItem(horizontalSpacer_bottom);

        horizontalLayout_count = new QHBoxLayout();
        horizontalLayout_count->setSpacing(3);
        horizontalLayout_count->setObjectName(QString::fromUtf8("horizontalLayout_count"));
        label_count_2 = new QLabel(ProposalList);
        label_count_2->setObjectName(QString::fromUtf8("label_count_2"));

        horizontalLayout_count->addWidget(label_count_2);

        countLabel = new QLabel(ProposalList);
        countLabel->setObjectName(QString::fromUtf8("countLabel"));
        countLabel->setText(QString::fromUtf8("0"));

        horizontalLayout_count->addWidget(countLabel);


        horizontalLayout_bottom->addLayout(horizontalLayout_count);


        verticalLayout->addLayout(horizontalLayout_bottom);


        topLayout->addLayout(verticalLayout);


        retranslateUi(ProposalList);

        QMetaObject::connectSlotsByName(ProposalList);
    } // setupUi

    void retranslateUi(QWidget *ProposalList)
    {
        ProposalList->setWindowTitle(QCoreApplication::translate("ProposalList", "Form", nullptr));
#if QT_CONFIG(tooltip)
        proposalSourceCombo->setToolTip(QCoreApplication::translate("ProposalList", "Select proposals to display", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        filterLineEdit->setToolTip(QCoreApplication::translate("ProposalList", "Filter proposal list", nullptr));
#endif // QT_CONFIG(tooltip)
        filterLineEdit->setPlaceholderText(QCoreApplication::translate("ProposalList", "Filter by Title", nullptr));
        emptyLabel->setText(QCoreApplication::translate("ProposalList", "No active proposals on the network.", nullptr));
        btnCreateProposal->setText(QCoreApplication::translate("ProposalList", "Create Proposal", nullptr));
        btnResumeProposal->setText(QCoreApplication::translate("ProposalList", "Resume Proposal", nullptr));
        label_count_2->setText(QCoreApplication::translate("ProposalList", "Proposal Count:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProposalList: public Ui_ProposalList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPOSALLIST_H
