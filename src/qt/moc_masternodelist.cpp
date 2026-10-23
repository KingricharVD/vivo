/****************************************************************************
** Meta object code from reading C++ file 'masternodelist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/masternodelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masternodelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MasternodeListSortFilterProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasternodeListSortFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasternodeListSortFilterProxyModel_t qt_meta_stringdata_MasternodeListSortFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 34) // "MasternodeListSortFilterProxy..."

    },
    "MasternodeListSortFilterProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasternodeListSortFilterProxyModel[] = {

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

void MasternodeListSortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject MasternodeListSortFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_MasternodeListSortFilterProxyModel.data,
    qt_meta_data_MasternodeListSortFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MasternodeListSortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasternodeListSortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MasternodeListSortFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int MasternodeListSortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MasternodeList_t {
    QByteArrayData data[25];
    char stringdata0[482];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasternodeList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasternodeList_t qt_meta_stringdata_MasternodeList = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MasternodeList"
QT_MOC_LITERAL(1, 15, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 42, 30), // "copyCollateralOutpoint_clicked"
QT_MOC_LITERAL(5, 73, 21), // "copyProTxHash_clicked"
QT_MOC_LITERAL(6, 95, 18), // "showRegisterWizard"
QT_MOC_LITERAL(7, 114, 21), // "extraInfoDIP3_clicked"
QT_MOC_LITERAL(8, 136, 25), // "filterByCollateralAddress"
QT_MOC_LITERAL(9, 162, 20), // "filterByOwnerAddress"
QT_MOC_LITERAL(10, 183, 21), // "filterByPayoutAddress"
QT_MOC_LITERAL(11, 205, 21), // "filterByVotingAddress"
QT_MOC_LITERAL(12, 227, 34), // "on_checkBoxHideBanned_stateCh..."
QT_MOC_LITERAL(13, 262, 5), // "state"
QT_MOC_LITERAL(14, 268, 29), // "on_checkBoxOwned_stateChanged"
QT_MOC_LITERAL(15, 298, 35), // "on_comboBoxType_currentIndexC..."
QT_MOC_LITERAL(16, 334, 5), // "index"
QT_MOC_LITERAL(17, 340, 25), // "on_filterText_textChanged"
QT_MOC_LITERAL(18, 366, 11), // "strFilterIn"
QT_MOC_LITERAL(19, 378, 8), // "onRevoke"
QT_MOC_LITERAL(20, 387, 17), // "onUpdateRegistrar"
QT_MOC_LITERAL(21, 405, 15), // "onUpdateService"
QT_MOC_LITERAL(22, 421, 19), // "showContextMenuDIP3"
QT_MOC_LITERAL(23, 441, 19), // "updateFilteredCount"
QT_MOC_LITERAL(24, 461, 20) // "updateMasternodeList"

    },
    "MasternodeList\0doubleClicked\0\0QModelIndex\0"
    "copyCollateralOutpoint_clicked\0"
    "copyProTxHash_clicked\0showRegisterWizard\0"
    "extraInfoDIP3_clicked\0filterByCollateralAddress\0"
    "filterByOwnerAddress\0filterByPayoutAddress\0"
    "filterByVotingAddress\0"
    "on_checkBoxHideBanned_stateChanged\0"
    "state\0on_checkBoxOwned_stateChanged\0"
    "on_comboBoxType_currentIndexChanged\0"
    "index\0on_filterText_textChanged\0"
    "strFilterIn\0onRevoke\0onUpdateRegistrar\0"
    "onUpdateService\0showContextMenuDIP3\0"
    "updateFilteredCount\0updateMasternodeList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasternodeList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  112,    2, 0x08 /* Private */,
       5,    0,  113,    2, 0x08 /* Private */,
       6,    0,  114,    2, 0x08 /* Private */,
       7,    0,  115,    2, 0x08 /* Private */,
       8,    0,  116,    2, 0x08 /* Private */,
       9,    0,  117,    2, 0x08 /* Private */,
      10,    0,  118,    2, 0x08 /* Private */,
      11,    0,  119,    2, 0x08 /* Private */,
      12,    1,  120,    2, 0x08 /* Private */,
      14,    1,  123,    2, 0x08 /* Private */,
      15,    1,  126,    2, 0x08 /* Private */,
      17,    1,  129,    2, 0x08 /* Private */,
      19,    0,  132,    2, 0x08 /* Private */,
      20,    0,  133,    2, 0x08 /* Private */,
      21,    0,  134,    2, 0x08 /* Private */,
      22,    1,  135,    2, 0x08 /* Private */,
      23,    0,  138,    2, 0x08 /* Private */,
      24,    0,  139,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MasternodeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MasternodeList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->copyCollateralOutpoint_clicked(); break;
        case 2: _t->copyProTxHash_clicked(); break;
        case 3: _t->showRegisterWizard(); break;
        case 4: _t->extraInfoDIP3_clicked(); break;
        case 5: _t->filterByCollateralAddress(); break;
        case 6: _t->filterByOwnerAddress(); break;
        case 7: _t->filterByPayoutAddress(); break;
        case 8: _t->filterByVotingAddress(); break;
        case 9: _t->on_checkBoxHideBanned_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_checkBoxOwned_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_comboBoxType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_filterText_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->onRevoke(); break;
        case 14: _t->onUpdateRegistrar(); break;
        case 15: _t->onUpdateService(); break;
        case 16: _t->showContextMenuDIP3((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 17: _t->updateFilteredCount(); break;
        case 18: _t->updateMasternodeList(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MasternodeList::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MasternodeList::doubleClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MasternodeList::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MasternodeList.data,
    qt_meta_data_MasternodeList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MasternodeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasternodeList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MasternodeList.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MasternodeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void MasternodeList::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
