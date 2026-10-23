/****************************************************************************
** Meta object code from reading C++ file 'appearancewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/appearancewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appearancewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppearanceWidget_t {
    QByteArrayData data[15];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppearanceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppearanceWidget_t qt_meta_stringdata_AppearanceWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AppearanceWidget"
QT_MOC_LITERAL(1, 17, 17), // "appearanceChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 6), // "accept"
QT_MOC_LITERAL(4, 43, 11), // "updateTheme"
QT_MOC_LITERAL(5, 55, 7), // "toTheme"
QT_MOC_LITERAL(6, 63, 16), // "updateFontFamily"
QT_MOC_LITERAL(7, 80, 5), // "index"
QT_MOC_LITERAL(8, 86, 15), // "updateFontScale"
QT_MOC_LITERAL(9, 102, 6), // "nScale"
QT_MOC_LITERAL(10, 109, 22), // "updateFontWeightNormal"
QT_MOC_LITERAL(11, 132, 6), // "nValue"
QT_MOC_LITERAL(12, 139, 6), // "fForce"
QT_MOC_LITERAL(13, 146, 20), // "updateFontWeightBold"
QT_MOC_LITERAL(14, 167, 15) // "updateMoneyFont"

    },
    "AppearanceWidget\0appearanceChanged\0\0"
    "accept\0updateTheme\0toTheme\0updateFontFamily\0"
    "index\0updateFontScale\0nScale\0"
    "updateFontWeightNormal\0nValue\0fForce\0"
    "updateFontWeightBold\0updateMoneyFont"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppearanceWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x0a /* Public */,
       4,    1,   71,    2, 0x08 /* Private */,
       4,    0,   74,    2, 0x28 /* Private | MethodCloned */,
       6,    1,   75,    2, 0x08 /* Private */,
       8,    1,   78,    2, 0x08 /* Private */,
      10,    2,   81,    2, 0x08 /* Private */,
      10,    1,   86,    2, 0x28 /* Private | MethodCloned */,
      13,    2,   89,    2, 0x08 /* Private */,
      13,    1,   94,    2, 0x28 /* Private | MethodCloned */,
      14,    1,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void AppearanceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppearanceWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->appearanceChanged(); break;
        case 1: _t->accept(); break;
        case 2: _t->updateTheme((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateTheme(); break;
        case 4: _t->updateFontFamily((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateFontScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateFontWeightNormal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->updateFontWeightNormal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateFontWeightBold((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->updateFontWeightBold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->updateMoneyFont((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AppearanceWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppearanceWidget::appearanceChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AppearanceWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AppearanceWidget.data,
    qt_meta_data_AppearanceWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppearanceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppearanceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppearanceWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AppearanceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void AppearanceWidget::appearanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
