/****************************************************************************
** Meta object code from reading C++ file 'proposallist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/proposallist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'proposallist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProposalList_t {
    QByteArrayData data[19];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProposalList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProposalList_t qt_meta_stringdata_ProposalList = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ProposalList"
QT_MOC_LITERAL(1, 13, 16), // "showProposalInfo"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 16), // "copyProposalJson"
QT_MOC_LITERAL(4, 48, 15), // "openProposalUrl"
QT_MOC_LITERAL(5, 64, 17), // "setProposalSource"
QT_MOC_LITERAL(6, 82, 5), // "index"
QT_MOC_LITERAL(7, 88, 18), // "showAdditionalInfo"
QT_MOC_LITERAL(8, 107, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 119, 24), // "showCreateProposalDialog"
QT_MOC_LITERAL(10, 144, 23), // "showProposalContextMenu"
QT_MOC_LITERAL(11, 168, 3), // "pos"
QT_MOC_LITERAL(12, 172, 24), // "showResumeProposalDialog"
QT_MOC_LITERAL(13, 197, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(14, 215, 19), // "updateProposalCount"
QT_MOC_LITERAL(15, 235, 18), // "updateProposalList"
QT_MOC_LITERAL(16, 254, 7), // "voteYes"
QT_MOC_LITERAL(17, 262, 6), // "voteNo"
QT_MOC_LITERAL(18, 269, 11) // "voteAbstain"

    },
    "ProposalList\0showProposalInfo\0\0"
    "copyProposalJson\0openProposalUrl\0"
    "setProposalSource\0index\0showAdditionalInfo\0"
    "QModelIndex\0showCreateProposalDialog\0"
    "showProposalContextMenu\0pos\0"
    "showResumeProposalDialog\0updateDisplayUnit\0"
    "updateProposalCount\0updateProposalList\0"
    "voteYes\0voteNo\0voteAbstain"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProposalList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    1,   87,    2, 0x08 /* Private */,
       7,    1,   90,    2, 0x08 /* Private */,
       9,    0,   93,    2, 0x08 /* Private */,
      10,    1,   94,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    0,   98,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ProposalList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProposalList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showProposalInfo(); break;
        case 1: _t->copyProposalJson(); break;
        case 2: _t->openProposalUrl(); break;
        case 3: _t->setProposalSource((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->showAdditionalInfo((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->showCreateProposalDialog(); break;
        case 6: _t->showProposalContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->showResumeProposalDialog(); break;
        case 8: _t->updateDisplayUnit(); break;
        case 9: _t->updateProposalCount(); break;
        case 10: _t->updateProposalList(); break;
        case 11: _t->voteYes(); break;
        case 12: _t->voteNo(); break;
        case 13: _t->voteAbstain(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProposalList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProposalList::showProposalInfo)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProposalList::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ProposalList.data,
    qt_meta_data_ProposalList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProposalList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProposalList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProposalList.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ProposalList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ProposalList::showProposalInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
