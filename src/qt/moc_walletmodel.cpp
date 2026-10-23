/****************************************************************************
** Meta object code from reading C++ file 'walletmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/walletmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletModel_t {
    QByteArrayData data[40];
    char stringdata0[550];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletModel_t qt_meta_stringdata_WalletModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WalletModel"
QT_MOC_LITERAL(1, 12, 14), // "balanceChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 26), // "interfaces::WalletBalances"
QT_MOC_LITERAL(4, 55, 8), // "balances"
QT_MOC_LITERAL(5, 64, 23), // "encryptionStatusChanged"
QT_MOC_LITERAL(6, 88, 13), // "requireUnlock"
QT_MOC_LITERAL(7, 102, 14), // "fForMixingOnly"
QT_MOC_LITERAL(8, 117, 7), // "message"
QT_MOC_LITERAL(9, 125, 5), // "title"
QT_MOC_LITERAL(10, 131, 5), // "style"
QT_MOC_LITERAL(11, 137, 9), // "coinsSent"
QT_MOC_LITERAL(12, 147, 12), // "WalletModel*"
QT_MOC_LITERAL(13, 160, 6), // "wallet"
QT_MOC_LITERAL(14, 167, 18), // "SendCoinsRecipient"
QT_MOC_LITERAL(15, 186, 9), // "recipient"
QT_MOC_LITERAL(16, 196, 11), // "transaction"
QT_MOC_LITERAL(17, 208, 12), // "showProgress"
QT_MOC_LITERAL(18, 221, 9), // "nProgress"
QT_MOC_LITERAL(19, 231, 22), // "notifyWatchonlyChanged"
QT_MOC_LITERAL(20, 254, 14), // "fHaveWatchonly"
QT_MOC_LITERAL(21, 269, 6), // "unload"
QT_MOC_LITERAL(22, 276, 22), // "canGetAddressesChanged"
QT_MOC_LITERAL(23, 299, 12), // "timerTimeout"
QT_MOC_LITERAL(24, 312, 16), // "startPollBalance"
QT_MOC_LITERAL(25, 329, 12), // "updateStatus"
QT_MOC_LITERAL(26, 342, 17), // "updateTransaction"
QT_MOC_LITERAL(27, 360, 17), // "updateLockedCoins"
QT_MOC_LITERAL(28, 378, 23), // "lockExistingDustOutputs"
QT_MOC_LITERAL(29, 402, 16), // "updateNumISLocks"
QT_MOC_LITERAL(30, 419, 21), // "updateChainLockHeight"
QT_MOC_LITERAL(31, 441, 15), // "chainLockHeight"
QT_MOC_LITERAL(32, 457, 17), // "updateAddressBook"
QT_MOC_LITERAL(33, 475, 7), // "address"
QT_MOC_LITERAL(34, 483, 5), // "label"
QT_MOC_LITERAL(35, 489, 6), // "isMine"
QT_MOC_LITERAL(36, 496, 7), // "purpose"
QT_MOC_LITERAL(37, 504, 6), // "status"
QT_MOC_LITERAL(38, 511, 19), // "updateWatchOnlyFlag"
QT_MOC_LITERAL(39, 531, 18) // "pollBalanceChanged"

    },
    "WalletModel\0balanceChanged\0\0"
    "interfaces::WalletBalances\0balances\0"
    "encryptionStatusChanged\0requireUnlock\0"
    "fForMixingOnly\0message\0title\0style\0"
    "coinsSent\0WalletModel*\0wallet\0"
    "SendCoinsRecipient\0recipient\0transaction\0"
    "showProgress\0nProgress\0notifyWatchonlyChanged\0"
    "fHaveWatchonly\0unload\0canGetAddressesChanged\0"
    "timerTimeout\0startPollBalance\0"
    "updateStatus\0updateTransaction\0"
    "updateLockedCoins\0lockExistingDustOutputs\0"
    "updateNumISLocks\0updateChainLockHeight\0"
    "chainLockHeight\0updateAddressBook\0"
    "address\0label\0isMine\0purpose\0status\0"
    "updateWatchOnlyFlag\0pollBalanceChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       5,    0,  122,    2, 0x06 /* Public */,
       6,    1,  123,    2, 0x06 /* Public */,
       6,    0,  126,    2, 0x26 /* Public | MethodCloned */,
       8,    3,  127,    2, 0x06 /* Public */,
      11,    3,  134,    2, 0x06 /* Public */,
      17,    2,  141,    2, 0x06 /* Public */,
      19,    1,  146,    2, 0x06 /* Public */,
      21,    0,  149,    2, 0x06 /* Public */,
      22,    0,  150,    2, 0x06 /* Public */,
      23,    0,  151,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    0,  152,    2, 0x0a /* Public */,
      25,    0,  153,    2, 0x0a /* Public */,
      26,    0,  154,    2, 0x0a /* Public */,
      27,    0,  155,    2, 0x0a /* Public */,
      28,    0,  156,    2, 0x0a /* Public */,
      29,    0,  157,    2, 0x0a /* Public */,
      30,    1,  158,    2, 0x0a /* Public */,
      32,    5,  161,    2, 0x0a /* Public */,
      38,    1,  172,    2, 0x0a /* Public */,
      39,    0,  175,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    9,    8,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 14, QMetaType::QByteArray,   13,   15,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    9,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::QString, QMetaType::Int,   33,   34,   35,   36,   37,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,

       0        // eod
};

void WalletModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WalletModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->balanceChanged((*reinterpret_cast< const interfaces::WalletBalances(*)>(_a[1]))); break;
        case 1: _t->encryptionStatusChanged(); break;
        case 2: _t->requireUnlock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->requireUnlock(); break;
        case 4: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 5: _t->coinsSent((*reinterpret_cast< WalletModel*(*)>(_a[1])),(*reinterpret_cast< SendCoinsRecipient(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 6: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->notifyWatchonlyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->unload(); break;
        case 9: _t->canGetAddressesChanged(); break;
        case 10: _t->timerTimeout(); break;
        case 11: _t->startPollBalance(); break;
        case 12: _t->updateStatus(); break;
        case 13: _t->updateTransaction(); break;
        case 14: _t->updateLockedCoins(); break;
        case 15: _t->lockExistingDustOutputs(); break;
        case 16: _t->updateNumISLocks(); break;
        case 17: _t->updateChainLockHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->updateAddressBook((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 19: _t->updateWatchOnlyFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->pollBalanceChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WalletModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WalletModel::*)(const interfaces::WalletBalances & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::balanceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::encryptionStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::requireUnlock)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::message)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)(WalletModel * , SendCoinsRecipient , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::coinsSent)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::showProgress)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::notifyWatchonlyChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::unload)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::canGetAddressesChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::timerTimeout)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WalletModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WalletModel.data,
    qt_meta_data_WalletModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WalletModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void WalletModel::balanceChanged(const interfaces::WalletBalances & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletModel::encryptionStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WalletModel::requireUnlock(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 4
void WalletModel::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletModel::coinsSent(WalletModel * _t1, SendCoinsRecipient _t2, QByteArray _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletModel::showProgress(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WalletModel::notifyWatchonlyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WalletModel::unload()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void WalletModel::canGetAddressesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void WalletModel::timerTimeout()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
