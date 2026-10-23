/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/bitcoingui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BitcoinGUI_t {
    QByteArrayData data[93];
    char stringdata0[1278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitcoinGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitcoinGUI_t qt_meta_stringdata_BitcoinGUI = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BitcoinGUI"
QT_MOC_LITERAL(1, 11, 13), // "quitRequested"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "receivedURI"
QT_MOC_LITERAL(4, 38, 3), // "uri"
QT_MOC_LITERAL(5, 42, 12), // "consoleShown"
QT_MOC_LITERAL(6, 55, 11), // "RPCConsole*"
QT_MOC_LITERAL(7, 67, 7), // "console"
QT_MOC_LITERAL(8, 75, 16), // "requestedRestart"
QT_MOC_LITERAL(9, 92, 4), // "args"
QT_MOC_LITERAL(10, 97, 10), // "setPrivacy"
QT_MOC_LITERAL(11, 108, 7), // "privacy"
QT_MOC_LITERAL(12, 116, 17), // "setNumConnections"
QT_MOC_LITERAL(13, 134, 5), // "count"
QT_MOC_LITERAL(14, 140, 16), // "setNetworkActive"
QT_MOC_LITERAL(15, 157, 14), // "network_active"
QT_MOC_LITERAL(16, 172, 13), // "handleRestart"
QT_MOC_LITERAL(17, 186, 12), // "setNumBlocks"
QT_MOC_LITERAL(18, 199, 9), // "blockDate"
QT_MOC_LITERAL(19, 209, 9), // "blockHash"
QT_MOC_LITERAL(20, 219, 21), // "nVerificationProgress"
QT_MOC_LITERAL(21, 241, 8), // "SyncType"
QT_MOC_LITERAL(22, 250, 8), // "synctype"
QT_MOC_LITERAL(23, 259, 20), // "SynchronizationState"
QT_MOC_LITERAL(24, 280, 10), // "sync_state"
QT_MOC_LITERAL(25, 291, 29), // "setAdditionalDataSyncProgress"
QT_MOC_LITERAL(26, 321, 13), // "nSyncProgress"
QT_MOC_LITERAL(27, 335, 7), // "message"
QT_MOC_LITERAL(28, 343, 5), // "title"
QT_MOC_LITERAL(29, 349, 5), // "style"
QT_MOC_LITERAL(30, 355, 5), // "bool*"
QT_MOC_LITERAL(31, 361, 3), // "ret"
QT_MOC_LITERAL(32, 365, 16), // "detailed_message"
QT_MOC_LITERAL(33, 382, 16), // "setCurrentWallet"
QT_MOC_LITERAL(34, 399, 12), // "WalletModel*"
QT_MOC_LITERAL(35, 412, 12), // "wallet_model"
QT_MOC_LITERAL(36, 425, 31), // "setCurrentWalletBySelectorIndex"
QT_MOC_LITERAL(37, 457, 5), // "index"
QT_MOC_LITERAL(38, 463, 18), // "updateWalletStatus"
QT_MOC_LITERAL(39, 482, 20), // "handlePaymentRequest"
QT_MOC_LITERAL(40, 503, 18), // "SendCoinsRecipient"
QT_MOC_LITERAL(41, 522, 9), // "recipient"
QT_MOC_LITERAL(42, 532, 19), // "incomingTransaction"
QT_MOC_LITERAL(43, 552, 4), // "date"
QT_MOC_LITERAL(44, 557, 11), // "BitcoinUnit"
QT_MOC_LITERAL(45, 569, 4), // "unit"
QT_MOC_LITERAL(46, 574, 7), // "CAmount"
QT_MOC_LITERAL(47, 582, 6), // "amount"
QT_MOC_LITERAL(48, 589, 4), // "type"
QT_MOC_LITERAL(49, 594, 7), // "address"
QT_MOC_LITERAL(50, 602, 5), // "label"
QT_MOC_LITERAL(51, 608, 10), // "walletName"
QT_MOC_LITERAL(52, 619, 24), // "showIncomingTransactions"
QT_MOC_LITERAL(53, 644, 18), // "gotoGovernancePage"
QT_MOC_LITERAL(54, 663, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(55, 680, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(56, 696, 18), // "gotoMasternodePage"
QT_MOC_LITERAL(57, 715, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(58, 736, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(59, 754, 4), // "addr"
QT_MOC_LITERAL(60, 759, 21), // "gotoCoinJoinCoinsPage"
QT_MOC_LITERAL(61, 781, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(62, 800, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(63, 821, 12), // "gotoLoadPSBT"
QT_MOC_LITERAL(64, 834, 14), // "from_clipboard"
QT_MOC_LITERAL(65, 849, 11), // "openClicked"
QT_MOC_LITERAL(66, 861, 18), // "highlightTabButton"
QT_MOC_LITERAL(67, 880, 16), // "QAbstractButton*"
QT_MOC_LITERAL(68, 897, 6), // "button"
QT_MOC_LITERAL(69, 904, 7), // "checked"
QT_MOC_LITERAL(70, 912, 14), // "optionsClicked"
QT_MOC_LITERAL(71, 927, 12), // "aboutClicked"
QT_MOC_LITERAL(72, 940, 15), // "showDebugWindow"
QT_MOC_LITERAL(73, 956, 8), // "showInfo"
QT_MOC_LITERAL(74, 965, 11), // "showConsole"
QT_MOC_LITERAL(75, 977, 9), // "showGraph"
QT_MOC_LITERAL(76, 987, 9), // "showPeers"
QT_MOC_LITERAL(77, 997, 10), // "showRepair"
QT_MOC_LITERAL(78, 1008, 14), // "showConfEditor"
QT_MOC_LITERAL(79, 1023, 11), // "showBackups"
QT_MOC_LITERAL(80, 1035, 22), // "showHelpMessageClicked"
QT_MOC_LITERAL(81, 1058, 23), // "showCoinJoinHelpClicked"
QT_MOC_LITERAL(82, 1082, 21), // "showNormalIfMinimized"
QT_MOC_LITERAL(83, 1104, 13), // "fToggleHidden"
QT_MOC_LITERAL(84, 1118, 12), // "toggleHidden"
QT_MOC_LITERAL(85, 1131, 14), // "detectShutdown"
QT_MOC_LITERAL(86, 1146, 12), // "showProgress"
QT_MOC_LITERAL(87, 1159, 9), // "nProgress"
QT_MOC_LITERAL(88, 1169, 16), // "showModalOverlay"
QT_MOC_LITERAL(89, 1186, 24), // "updateCoinJoinVisibility"
QT_MOC_LITERAL(90, 1211, 26), // "updateGovernanceVisibility"
QT_MOC_LITERAL(91, 1238, 27), // "updateMasternodesVisibility"
QT_MOC_LITERAL(92, 1266, 11) // "updateWidth"

    },
    "BitcoinGUI\0quitRequested\0\0receivedURI\0"
    "uri\0consoleShown\0RPCConsole*\0console\0"
    "requestedRestart\0args\0setPrivacy\0"
    "privacy\0setNumConnections\0count\0"
    "setNetworkActive\0network_active\0"
    "handleRestart\0setNumBlocks\0blockDate\0"
    "blockHash\0nVerificationProgress\0"
    "SyncType\0synctype\0SynchronizationState\0"
    "sync_state\0setAdditionalDataSyncProgress\0"
    "nSyncProgress\0message\0title\0style\0"
    "bool*\0ret\0detailed_message\0setCurrentWallet\0"
    "WalletModel*\0wallet_model\0"
    "setCurrentWalletBySelectorIndex\0index\0"
    "updateWalletStatus\0handlePaymentRequest\0"
    "SendCoinsRecipient\0recipient\0"
    "incomingTransaction\0date\0BitcoinUnit\0"
    "unit\0CAmount\0amount\0type\0address\0label\0"
    "walletName\0showIncomingTransactions\0"
    "gotoGovernancePage\0gotoOverviewPage\0"
    "gotoHistoryPage\0gotoMasternodePage\0"
    "gotoReceiveCoinsPage\0gotoSendCoinsPage\0"
    "addr\0gotoCoinJoinCoinsPage\0"
    "gotoSignMessageTab\0gotoVerifyMessageTab\0"
    "gotoLoadPSBT\0from_clipboard\0openClicked\0"
    "highlightTabButton\0QAbstractButton*\0"
    "button\0checked\0optionsClicked\0"
    "aboutClicked\0showDebugWindow\0showInfo\0"
    "showConsole\0showGraph\0showPeers\0"
    "showRepair\0showConfEditor\0showBackups\0"
    "showHelpMessageClicked\0showCoinJoinHelpClicked\0"
    "showNormalIfMinimized\0fToggleHidden\0"
    "toggleHidden\0detectShutdown\0showProgress\0"
    "nProgress\0showModalOverlay\0"
    "updateCoinJoinVisibility\0"
    "updateGovernanceVisibility\0"
    "updateMasternodesVisibility\0updateWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  304,    2, 0x06 /* Public */,
       3,    1,  305,    2, 0x06 /* Public */,
       5,    1,  308,    2, 0x06 /* Public */,
       8,    1,  311,    2, 0x06 /* Public */,
      10,    1,  314,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  317,    2, 0x0a /* Public */,
      14,    1,  320,    2, 0x0a /* Public */,
      16,    1,  323,    2, 0x0a /* Public */,
      17,    6,  326,    2, 0x0a /* Public */,
      25,    1,  339,    2, 0x0a /* Public */,
      27,    5,  342,    2, 0x0a /* Public */,
      27,    4,  353,    2, 0x2a /* Public | MethodCloned */,
      27,    3,  362,    2, 0x2a /* Public | MethodCloned */,
      33,    1,  369,    2, 0x0a /* Public */,
      36,    1,  372,    2, 0x0a /* Public */,
      38,    0,  375,    2, 0x0a /* Public */,
      39,    1,  376,    2, 0x0a /* Public */,
      42,    7,  379,    2, 0x0a /* Public */,
      52,    0,  394,    2, 0x0a /* Public */,
      53,    0,  395,    2, 0x0a /* Public */,
      54,    0,  396,    2, 0x0a /* Public */,
      55,    0,  397,    2, 0x0a /* Public */,
      56,    0,  398,    2, 0x0a /* Public */,
      57,    0,  399,    2, 0x0a /* Public */,
      58,    1,  400,    2, 0x0a /* Public */,
      58,    0,  403,    2, 0x2a /* Public | MethodCloned */,
      60,    1,  404,    2, 0x0a /* Public */,
      60,    0,  407,    2, 0x2a /* Public | MethodCloned */,
      61,    1,  408,    2, 0x0a /* Public */,
      61,    0,  411,    2, 0x2a /* Public | MethodCloned */,
      62,    1,  412,    2, 0x0a /* Public */,
      62,    0,  415,    2, 0x2a /* Public | MethodCloned */,
      63,    1,  416,    2, 0x0a /* Public */,
      63,    0,  419,    2, 0x2a /* Public | MethodCloned */,
      65,    0,  420,    2, 0x0a /* Public */,
      66,    2,  421,    2, 0x0a /* Public */,
      70,    0,  426,    2, 0x0a /* Public */,
      71,    0,  427,    2, 0x0a /* Public */,
      72,    0,  428,    2, 0x0a /* Public */,
      73,    0,  429,    2, 0x0a /* Public */,
      74,    0,  430,    2, 0x0a /* Public */,
      75,    0,  431,    2, 0x0a /* Public */,
      76,    0,  432,    2, 0x0a /* Public */,
      77,    0,  433,    2, 0x0a /* Public */,
      78,    0,  434,    2, 0x0a /* Public */,
      79,    0,  435,    2, 0x0a /* Public */,
      80,    0,  436,    2, 0x0a /* Public */,
      81,    0,  437,    2, 0x0a /* Public */,
      82,    0,  438,    2, 0x0a /* Public */,
      82,    1,  439,    2, 0x0a /* Public */,
      84,    0,  442,    2, 0x0a /* Public */,
      85,    0,  443,    2, 0x0a /* Public */,
      86,    2,  444,    2, 0x0a /* Public */,
      88,    0,  449,    2, 0x0a /* Public */,
      89,    0,  450,    2, 0x0a /* Public */,
      90,    0,  451,    2, 0x0a /* Public */,
      91,    0,  452,    2, 0x0a /* Public */,
      92,    0,  453,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QStringList,    9,
    QMetaType::Void, QMetaType::Bool,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::QStringList,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime, QMetaType::QString, QMetaType::Double, 0x80000000 | 21, 0x80000000 | 23,   13,   18,   19,   20,   22,   24,
    QMetaType::Void, QMetaType::Double,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt, 0x80000000 | 30, QMetaType::QString,   28,   27,   29,   31,   32,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt, 0x80000000 | 30,   28,   27,   29,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   28,   27,   29,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 40,   41,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 44, 0x80000000 | 46, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   43,   45,   47,   48,   49,   50,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   59,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   59,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   59,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   59,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 67, QMetaType::Bool,   68,   69,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   83,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   28,   87,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BitcoinGUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->quitRequested(); break;
        case 1: _t->receivedURI((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->consoleShown((*reinterpret_cast< RPCConsole*(*)>(_a[1]))); break;
        case 3: _t->requestedRestart((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: _t->setPrivacy((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setNetworkActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->handleRestart((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 8: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< SyncType(*)>(_a[5])),(*reinterpret_cast< SynchronizationState(*)>(_a[6]))); break;
        case 9: _t->setAdditionalDataSyncProgress((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< bool*(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 11: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< bool*(*)>(_a[4]))); break;
        case 12: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 13: _t->setCurrentWallet((*reinterpret_cast< WalletModel*(*)>(_a[1]))); break;
        case 14: _t->setCurrentWalletBySelectorIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->updateWalletStatus(); break;
        case 16: { bool _r = _t->handlePaymentRequest((*reinterpret_cast< const SendCoinsRecipient(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->incomingTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< BitcoinUnit(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 18: _t->showIncomingTransactions(); break;
        case 19: _t->gotoGovernancePage(); break;
        case 20: _t->gotoOverviewPage(); break;
        case 21: _t->gotoHistoryPage(); break;
        case 22: _t->gotoMasternodePage(); break;
        case 23: _t->gotoReceiveCoinsPage(); break;
        case 24: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->gotoSendCoinsPage(); break;
        case 26: _t->gotoCoinJoinCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: _t->gotoCoinJoinCoinsPage(); break;
        case 28: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->gotoSignMessageTab(); break;
        case 30: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: _t->gotoVerifyMessageTab(); break;
        case 32: _t->gotoLoadPSBT((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->gotoLoadPSBT(); break;
        case 34: _t->openClicked(); break;
        case 35: _t->highlightTabButton((*reinterpret_cast< QAbstractButton*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 36: _t->optionsClicked(); break;
        case 37: _t->aboutClicked(); break;
        case 38: _t->showDebugWindow(); break;
        case 39: _t->showInfo(); break;
        case 40: _t->showConsole(); break;
        case 41: _t->showGraph(); break;
        case 42: _t->showPeers(); break;
        case 43: _t->showRepair(); break;
        case 44: _t->showConfEditor(); break;
        case 45: _t->showBackups(); break;
        case 46: _t->showHelpMessageClicked(); break;
        case 47: _t->showCoinJoinHelpClicked(); break;
        case 48: _t->showNormalIfMinimized(); break;
        case 49: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->toggleHidden(); break;
        case 51: _t->detectShutdown(); break;
        case 52: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 53: _t->showModalOverlay(); break;
        case 54: _t->updateCoinJoinVisibility(); break;
        case 55: _t->updateGovernanceVisibility(); break;
        case 56: _t->updateMasternodesVisibility(); break;
        case 57: _t->updateWidth(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BitcoinGUI::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BitcoinGUI::quitRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BitcoinGUI::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BitcoinGUI::receivedURI)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BitcoinGUI::*)(RPCConsole * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BitcoinGUI::consoleShown)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BitcoinGUI::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BitcoinGUI::requestedRestart)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BitcoinGUI::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BitcoinGUI::setPrivacy)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BitcoinGUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_BitcoinGUI.data,
    qt_meta_data_BitcoinGUI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 58;
    }
    return _id;
}

// SIGNAL 0
void BitcoinGUI::quitRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BitcoinGUI::receivedURI(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BitcoinGUI::consoleShown(RPCConsole * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BitcoinGUI::requestedRestart(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BitcoinGUI::setPrivacy(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_UnitDisplayStatusBarControl_t {
    QByteArrayData data[8];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UnitDisplayStatusBarControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UnitDisplayStatusBarControl_t qt_meta_stringdata_UnitDisplayStatusBarControl = {
    {
QT_MOC_LITERAL(0, 0, 27), // "UnitDisplayStatusBarControl"
QT_MOC_LITERAL(1, 28, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 11), // "BitcoinUnit"
QT_MOC_LITERAL(4, 59, 8), // "newUnits"
QT_MOC_LITERAL(5, 68, 15), // "onMenuSelection"
QT_MOC_LITERAL(6, 84, 8), // "QAction*"
QT_MOC_LITERAL(7, 93, 6) // "action"

    },
    "UnitDisplayStatusBarControl\0"
    "updateDisplayUnit\0\0BitcoinUnit\0newUnits\0"
    "onMenuSelection\0QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UnitDisplayStatusBarControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       5,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void UnitDisplayStatusBarControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UnitDisplayStatusBarControl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateDisplayUnit((*reinterpret_cast< BitcoinUnit(*)>(_a[1]))); break;
        case 1: _t->onMenuSelection((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UnitDisplayStatusBarControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_UnitDisplayStatusBarControl.data,
    qt_meta_data_UnitDisplayStatusBarControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UnitDisplayStatusBarControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnitDisplayStatusBarControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UnitDisplayStatusBarControl.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int UnitDisplayStatusBarControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
