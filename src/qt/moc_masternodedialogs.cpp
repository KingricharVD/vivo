/****************************************************************************
** Meta object code from reading C++ file 'masternodedialogs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/masternodedialogs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masternodedialogs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OperatorSecretWidget_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OperatorSecretWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OperatorSecretWidget_t qt_meta_stringdata_OperatorSecretWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OperatorSecretWidget"
QT_MOC_LITERAL(1, 21, 7), // "changed"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "OperatorSecretWidget\0changed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OperatorSecretWidget[] = {

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

void OperatorSecretWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OperatorSecretWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OperatorSecretWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OperatorSecretWidget::changed)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject OperatorSecretWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_OperatorSecretWidget.data,
    qt_meta_data_OperatorSecretWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OperatorSecretWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OperatorSecretWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OperatorSecretWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OperatorSecretWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void OperatorSecretWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_MasternodeActionDialog_t {
    QByteArrayData data[5];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasternodeActionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasternodeActionDialog_t qt_meta_stringdata_MasternodeActionDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "MasternodeActionDialog"
QT_MOC_LITERAL(1, 23, 6), // "reject"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "validate"
QT_MOC_LITERAL(4, 40, 6) // "submit"

    },
    "MasternodeActionDialog\0reject\0\0validate\0"
    "submit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasternodeActionDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x09 /* Protected */,
       4,    0,   31,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MasternodeActionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MasternodeActionDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->reject(); break;
        case 1: _t->validate(); break;
        case 2: _t->submit(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject MasternodeActionDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MasternodeActionDialog.data,
    qt_meta_data_MasternodeActionDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MasternodeActionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasternodeActionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MasternodeActionDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MasternodeActionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_UpdateServiceDialog_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpdateServiceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpdateServiceDialog_t qt_meta_stringdata_UpdateServiceDialog = {
    {
QT_MOC_LITERAL(0, 0, 19) // "UpdateServiceDialog"

    },
    "UpdateServiceDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpdateServiceDialog[] = {

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

void UpdateServiceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject UpdateServiceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<MasternodeActionDialog::staticMetaObject>(),
    qt_meta_stringdata_UpdateServiceDialog.data,
    qt_meta_data_UpdateServiceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UpdateServiceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdateServiceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateServiceDialog.stringdata0))
        return static_cast<void*>(this);
    return MasternodeActionDialog::qt_metacast(_clname);
}

int UpdateServiceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MasternodeActionDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_UpdateRegistrarDialog_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpdateRegistrarDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpdateRegistrarDialog_t qt_meta_stringdata_UpdateRegistrarDialog = {
    {
QT_MOC_LITERAL(0, 0, 21) // "UpdateRegistrarDialog"

    },
    "UpdateRegistrarDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpdateRegistrarDialog[] = {

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

void UpdateRegistrarDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject UpdateRegistrarDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<MasternodeActionDialog::staticMetaObject>(),
    qt_meta_stringdata_UpdateRegistrarDialog.data,
    qt_meta_data_UpdateRegistrarDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UpdateRegistrarDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdateRegistrarDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateRegistrarDialog.stringdata0))
        return static_cast<void*>(this);
    return MasternodeActionDialog::qt_metacast(_clname);
}

int UpdateRegistrarDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MasternodeActionDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RevokeDialog_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RevokeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RevokeDialog_t qt_meta_stringdata_RevokeDialog = {
    {
QT_MOC_LITERAL(0, 0, 12) // "RevokeDialog"

    },
    "RevokeDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RevokeDialog[] = {

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

void RevokeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject RevokeDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<MasternodeActionDialog::staticMetaObject>(),
    qt_meta_stringdata_RevokeDialog.data,
    qt_meta_data_RevokeDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RevokeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RevokeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RevokeDialog.stringdata0))
        return static_cast<void*>(this);
    return MasternodeActionDialog::qt_metacast(_clname);
}

int RevokeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MasternodeActionDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
