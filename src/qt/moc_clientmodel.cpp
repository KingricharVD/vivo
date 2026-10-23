/****************************************************************************
** Meta object code from reading C++ file 'clientmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/clientmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientModel_t {
    QByteArrayData data[31];
    char stringdata0[440];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientModel_t qt_meta_stringdata_ClientModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ClientModel"
QT_MOC_LITERAL(1, 12, 21), // "numConnectionsChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "count"
QT_MOC_LITERAL(4, 41, 17), // "governanceChanged"
QT_MOC_LITERAL(5, 59, 21), // "masternodeListChanged"
QT_MOC_LITERAL(6, 81, 16), // "chainLockChanged"
QT_MOC_LITERAL(7, 98, 16), // "numBlocksChanged"
QT_MOC_LITERAL(8, 115, 9), // "blockDate"
QT_MOC_LITERAL(9, 125, 9), // "blockHash"
QT_MOC_LITERAL(10, 135, 21), // "nVerificationProgress"
QT_MOC_LITERAL(11, 157, 8), // "SyncType"
QT_MOC_LITERAL(12, 166, 6), // "header"
QT_MOC_LITERAL(13, 173, 20), // "SynchronizationState"
QT_MOC_LITERAL(14, 194, 10), // "sync_state"
QT_MOC_LITERAL(15, 205, 33), // "additionalDataSyncProgressCha..."
QT_MOC_LITERAL(16, 239, 13), // "nSyncProgress"
QT_MOC_LITERAL(17, 253, 18), // "mempoolSizeChanged"
QT_MOC_LITERAL(18, 272, 6), // "size_t"
QT_MOC_LITERAL(19, 279, 18), // "mempoolSizeInBytes"
QT_MOC_LITERAL(20, 298, 21), // "mempoolMaxSizeInBytes"
QT_MOC_LITERAL(21, 320, 18), // "instantSendChanged"
QT_MOC_LITERAL(22, 339, 20), // "networkActiveChanged"
QT_MOC_LITERAL(23, 360, 13), // "networkActive"
QT_MOC_LITERAL(24, 374, 13), // "alertsChanged"
QT_MOC_LITERAL(25, 388, 8), // "warnings"
QT_MOC_LITERAL(26, 397, 7), // "message"
QT_MOC_LITERAL(27, 405, 5), // "title"
QT_MOC_LITERAL(28, 411, 5), // "style"
QT_MOC_LITERAL(29, 417, 12), // "showProgress"
QT_MOC_LITERAL(30, 430, 9) // "nProgress"

    },
    "ClientModel\0numConnectionsChanged\0\0"
    "count\0governanceChanged\0masternodeListChanged\0"
    "chainLockChanged\0numBlocksChanged\0"
    "blockDate\0blockHash\0nVerificationProgress\0"
    "SyncType\0header\0SynchronizationState\0"
    "sync_state\0additionalDataSyncProgressChanged\0"
    "nSyncProgress\0mempoolSizeChanged\0"
    "size_t\0mempoolSizeInBytes\0"
    "mempoolMaxSizeInBytes\0instantSendChanged\0"
    "networkActiveChanged\0networkActive\0"
    "alertsChanged\0warnings\0message\0title\0"
    "style\0showProgress\0nProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    0,   77,    2, 0x06 /* Public */,
       5,    0,   78,    2, 0x06 /* Public */,
       6,    0,   79,    2, 0x06 /* Public */,
       7,    6,   80,    2, 0x06 /* Public */,
      15,    1,   93,    2, 0x06 /* Public */,
      17,    3,   96,    2, 0x06 /* Public */,
      21,    0,  103,    2, 0x06 /* Public */,
      22,    1,  104,    2, 0x06 /* Public */,
      24,    1,  107,    2, 0x06 /* Public */,
      26,    3,  110,    2, 0x06 /* Public */,
      29,    2,  117,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime, QMetaType::QString, QMetaType::Double, 0x80000000 | 11, 0x80000000 | 13,    3,    8,    9,   10,   12,   14,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::Long, 0x80000000 | 18, 0x80000000 | 18,    3,   19,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   27,   26,   28,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   27,   30,

       0        // eod
};

void ClientModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->numConnectionsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->governanceChanged(); break;
        case 2: _t->masternodeListChanged(); break;
        case 3: _t->chainLockChanged(); break;
        case 4: _t->numBlocksChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< SyncType(*)>(_a[5])),(*reinterpret_cast< SynchronizationState(*)>(_a[6]))); break;
        case 5: _t->additionalDataSyncProgressChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->mempoolSizeChanged((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2])),(*reinterpret_cast< size_t(*)>(_a[3]))); break;
        case 7: _t->instantSendChanged(); break;
        case 8: _t->networkActiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->alertsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 11: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::numConnectionsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::governanceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientModel::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::masternodeListChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::chainLockChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ClientModel::*)(int , const QDateTime & , const QString & , double , SyncType , SynchronizationState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::numBlocksChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ClientModel::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::additionalDataSyncProgressChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ClientModel::*)(long , size_t , size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::mempoolSizeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ClientModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::instantSendChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ClientModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::networkActiveChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ClientModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::alertsChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ClientModel::*)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::message)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ClientModel::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientModel::showProgress)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ClientModel.data,
    qt_meta_data_ClientModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ClientModel::numConnectionsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientModel::governanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ClientModel::masternodeListChanged()const
{
    QMetaObject::activate(const_cast< ClientModel *>(this), &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ClientModel::chainLockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ClientModel::numBlocksChanged(int _t1, const QDateTime & _t2, const QString & _t3, double _t4, SyncType _t5, SynchronizationState _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ClientModel::additionalDataSyncProgressChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ClientModel::mempoolSizeChanged(long _t1, size_t _t2, size_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ClientModel::instantSendChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ClientModel::networkActiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ClientModel::alertsChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ClientModel::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ClientModel::showProgress(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
