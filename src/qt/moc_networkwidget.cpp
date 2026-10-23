/****************************************************************************
** Meta object code from reading C++ file 'networkwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/networkwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetworkWidget_t {
    QByteArrayData data[10];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkWidget_t qt_meta_stringdata_NetworkWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NetworkWidget"
QT_MOC_LITERAL(1, 14, 19), // "handleClDataChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "handleCrDataChanged"
QT_MOC_LITERAL(4, 55, 19), // "handleIsDataChanged"
QT_MOC_LITERAL(5, 75, 19), // "handleMnDataChanged"
QT_MOC_LITERAL(6, 95, 19), // "handleQrDataChanged"
QT_MOC_LITERAL(7, 115, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(8, 133, 11), // "BitcoinUnit"
QT_MOC_LITERAL(9, 145, 4) // "unit"

    },
    "NetworkWidget\0handleClDataChanged\0\0"
    "handleCrDataChanged\0handleIsDataChanged\0"
    "handleMnDataChanged\0handleQrDataChanged\0"
    "updateDisplayUnit\0BitcoinUnit\0unit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void NetworkWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetworkWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleClDataChanged(); break;
        case 1: _t->handleCrDataChanged(); break;
        case 2: _t->handleIsDataChanged(); break;
        case 3: _t->handleMnDataChanged(); break;
        case 4: _t->handleQrDataChanged(); break;
        case 5: _t->updateDisplayUnit((*reinterpret_cast< BitcoinUnit(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetworkWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_NetworkWidget.data,
    qt_meta_data_NetworkWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetworkWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NetworkWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
