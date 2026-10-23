/****************************************************************************
** Meta object code from reading C++ file 'transactiontablemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/transactiontablemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transactiontablemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransactionTableModel_t {
    QByteArrayData data[18];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransactionTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransactionTableModel_t qt_meta_stringdata_TransactionTableModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "TransactionTableModel"
QT_MOC_LITERAL(1, 22, 13), // "refreshWallet"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "foce"
QT_MOC_LITERAL(4, 42, 17), // "updateTransaction"
QT_MOC_LITERAL(5, 60, 4), // "hash"
QT_MOC_LITERAL(6, 65, 6), // "status"
QT_MOC_LITERAL(7, 72, 15), // "showTransaction"
QT_MOC_LITERAL(8, 88, 17), // "updateAddressBook"
QT_MOC_LITERAL(9, 106, 7), // "address"
QT_MOC_LITERAL(10, 114, 5), // "label"
QT_MOC_LITERAL(11, 120, 6), // "isMine"
QT_MOC_LITERAL(12, 127, 7), // "purpose"
QT_MOC_LITERAL(13, 135, 19), // "updateConfirmations"
QT_MOC_LITERAL(14, 155, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(15, 173, 23), // "updateAmountColumnTitle"
QT_MOC_LITERAL(16, 197, 31), // "setProcessingQueuedTransactions"
QT_MOC_LITERAL(17, 229, 5) // "value"

    },
    "TransactionTableModel\0refreshWallet\0"
    "\0foce\0updateTransaction\0hash\0status\0"
    "showTransaction\0updateAddressBook\0"
    "address\0label\0isMine\0purpose\0"
    "updateConfirmations\0updateDisplayUnit\0"
    "updateAmountColumnTitle\0"
    "setProcessingQueuedTransactions\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionTableModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       1,    0,   57,    2, 0x2a /* Public | MethodCloned */,
       4,    3,   58,    2, 0x0a /* Public */,
       8,    5,   65,    2, 0x0a /* Public */,
      13,    0,   76,    2, 0x0a /* Public */,
      14,    0,   77,    2, 0x0a /* Public */,
      15,    0,   78,    2, 0x0a /* Public */,
      16,    1,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    5,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::QString, QMetaType::Int,    9,   10,   11,   12,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,

       0        // eod
};

void TransactionTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransactionTableModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->refreshWallet(); break;
        case 2: _t->updateTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->updateAddressBook((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 4: _t->updateConfirmations(); break;
        case 5: _t->updateDisplayUnit(); break;
        case 6: _t->updateAmountColumnTitle(); break;
        case 7: _t->setProcessingQueuedTransactions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TransactionTableModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_TransactionTableModel.data,
    qt_meta_data_TransactionTableModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TransactionTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransactionTableModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int TransactionTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
