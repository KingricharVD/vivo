/****************************************************************************
** Meta object code from reading C++ file 'informationwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/informationwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'informationwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InformationWidget_t {
    QByteArrayData data[17];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InformationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InformationWidget_t qt_meta_stringdata_InformationWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "InformationWidget"
QT_MOC_LITERAL(1, 18, 17), // "setNumConnections"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "count"
QT_MOC_LITERAL(4, 43, 16), // "setNetworkActive"
QT_MOC_LITERAL(5, 60, 13), // "networkActive"
QT_MOC_LITERAL(6, 74, 12), // "setNumBlocks"
QT_MOC_LITERAL(7, 87, 9), // "blockDate"
QT_MOC_LITERAL(8, 97, 9), // "blockHash"
QT_MOC_LITERAL(9, 107, 21), // "nVerificationProgress"
QT_MOC_LITERAL(10, 129, 8), // "SyncType"
QT_MOC_LITERAL(11, 138, 8), // "synctype"
QT_MOC_LITERAL(12, 147, 14), // "setMempoolSize"
QT_MOC_LITERAL(13, 162, 11), // "numberOfTxs"
QT_MOC_LITERAL(14, 174, 6), // "size_t"
QT_MOC_LITERAL(15, 181, 8), // "dynUsage"
QT_MOC_LITERAL(16, 190, 8) // "maxUsage"

    },
    "InformationWidget\0setNumConnections\0"
    "\0count\0setNetworkActive\0networkActive\0"
    "setNumBlocks\0blockDate\0blockHash\0"
    "nVerificationProgress\0SyncType\0synctype\0"
    "setMempoolSize\0numberOfTxs\0size_t\0"
    "dynUsage\0maxUsage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InformationWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       6,    5,   40,    2, 0x0a /* Public */,
      12,    3,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime, QMetaType::QString, QMetaType::Double, 0x80000000 | 10,    3,    7,    8,    9,   11,
    QMetaType::Void, QMetaType::Long, 0x80000000 | 14, 0x80000000 | 14,   13,   15,   16,

       0        // eod
};

void InformationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InformationWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNetworkActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< SyncType(*)>(_a[5]))); break;
        case 3: _t->setMempoolSize((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2])),(*reinterpret_cast< size_t(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InformationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_InformationWidget.data,
    qt_meta_data_InformationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InformationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InformationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InformationWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int InformationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
