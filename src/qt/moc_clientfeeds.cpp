/****************************************************************************
** Meta object code from reading C++ file 'clientfeeds.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/clientfeeds.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientfeeds.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FeedBase_t {
    QByteArrayData data[3];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FeedBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FeedBase_t qt_meta_stringdata_FeedBase = {
    {
QT_MOC_LITERAL(0, 0, 8), // "FeedBase"
QT_MOC_LITERAL(1, 9, 9), // "dataReady"
QT_MOC_LITERAL(2, 19, 0) // ""

    },
    "FeedBase\0dataReady\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FeedBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void FeedBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FeedBase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataReady(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FeedBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FeedBase::dataReady)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FeedBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FeedBase.data,
    qt_meta_data_FeedBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FeedBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FeedBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FeedBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FeedBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void FeedBase::dataReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ChainLockFeed_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChainLockFeed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChainLockFeed_t qt_meta_stringdata_ChainLockFeed = {
    {
QT_MOC_LITERAL(0, 0, 13) // "ChainLockFeed"

    },
    "ChainLockFeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChainLockFeed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ChainLockFeed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ChainLockFeed::staticMetaObject = { {
    QMetaObject::SuperData::link<Feed<ChainLockData>::staticMetaObject>(),
    qt_meta_stringdata_ChainLockFeed.data,
    qt_meta_data_ChainLockFeed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChainLockFeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChainLockFeed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChainLockFeed.stringdata0))
        return static_cast<void*>(this);
    return Feed<ChainLockData>::qt_metacast(_clname);
}

int ChainLockFeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Feed<ChainLockData>::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CreditPoolFeed_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreditPoolFeed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreditPoolFeed_t qt_meta_stringdata_CreditPoolFeed = {
    {
QT_MOC_LITERAL(0, 0, 14) // "CreditPoolFeed"

    },
    "CreditPoolFeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreditPoolFeed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CreditPoolFeed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CreditPoolFeed::staticMetaObject = { {
    QMetaObject::SuperData::link<Feed<CreditPoolData>::staticMetaObject>(),
    qt_meta_stringdata_CreditPoolFeed.data,
    qt_meta_data_CreditPoolFeed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreditPoolFeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreditPoolFeed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreditPoolFeed.stringdata0))
        return static_cast<void*>(this);
    return Feed<CreditPoolData>::qt_metacast(_clname);
}

int CreditPoolFeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Feed<CreditPoolData>::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_InstantSendFeed_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InstantSendFeed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InstantSendFeed_t qt_meta_stringdata_InstantSendFeed = {
    {
QT_MOC_LITERAL(0, 0, 15) // "InstantSendFeed"

    },
    "InstantSendFeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InstantSendFeed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void InstantSendFeed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject InstantSendFeed::staticMetaObject = { {
    QMetaObject::SuperData::link<Feed<InstantSendData>::staticMetaObject>(),
    qt_meta_stringdata_InstantSendFeed.data,
    qt_meta_data_InstantSendFeed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InstantSendFeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstantSendFeed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InstantSendFeed.stringdata0))
        return static_cast<void*>(this);
    return Feed<InstantSendData>::qt_metacast(_clname);
}

int InstantSendFeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Feed<InstantSendData>::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MasternodeFeed_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasternodeFeed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasternodeFeed_t qt_meta_stringdata_MasternodeFeed = {
    {
QT_MOC_LITERAL(0, 0, 14) // "MasternodeFeed"

    },
    "MasternodeFeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasternodeFeed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MasternodeFeed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject MasternodeFeed::staticMetaObject = { {
    QMetaObject::SuperData::link<Feed<MasternodeData>::staticMetaObject>(),
    qt_meta_stringdata_MasternodeFeed.data,
    qt_meta_data_MasternodeFeed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MasternodeFeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasternodeFeed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MasternodeFeed.stringdata0))
        return static_cast<void*>(this);
    return Feed<MasternodeData>::qt_metacast(_clname);
}

int MasternodeFeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Feed<MasternodeData>::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QuorumFeed_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuorumFeed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuorumFeed_t qt_meta_stringdata_QuorumFeed = {
    {
QT_MOC_LITERAL(0, 0, 10) // "QuorumFeed"

    },
    "QuorumFeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuorumFeed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QuorumFeed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject QuorumFeed::staticMetaObject = { {
    QMetaObject::SuperData::link<Feed<QuorumData>::staticMetaObject>(),
    qt_meta_stringdata_QuorumFeed.data,
    qt_meta_data_QuorumFeed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QuorumFeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuorumFeed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QuorumFeed.stringdata0))
        return static_cast<void*>(this);
    return Feed<QuorumData>::qt_metacast(_clname);
}

int QuorumFeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Feed<QuorumData>::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ProposalFeed_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProposalFeed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProposalFeed_t qt_meta_stringdata_ProposalFeed = {
    {
QT_MOC_LITERAL(0, 0, 12) // "ProposalFeed"

    },
    "ProposalFeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProposalFeed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ProposalFeed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ProposalFeed::staticMetaObject = { {
    QMetaObject::SuperData::link<Feed<ProposalData>::staticMetaObject>(),
    qt_meta_stringdata_ProposalFeed.data,
    qt_meta_data_ProposalFeed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProposalFeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProposalFeed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProposalFeed.stringdata0))
        return static_cast<void*>(this);
    return Feed<ProposalData>::qt_metacast(_clname);
}

int ProposalFeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Feed<ProposalData>::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ClientFeeds_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientFeeds_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientFeeds_t qt_meta_stringdata_ClientFeeds = {
    {
QT_MOC_LITERAL(0, 0, 11) // "ClientFeeds"

    },
    "ClientFeeds"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientFeeds[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ClientFeeds::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ClientFeeds::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ClientFeeds.data,
    qt_meta_data_ClientFeeds,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientFeeds::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientFeeds::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientFeeds.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientFeeds::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
