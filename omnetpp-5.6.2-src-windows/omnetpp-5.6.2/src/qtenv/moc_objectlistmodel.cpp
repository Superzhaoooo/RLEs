/****************************************************************************
** Meta object code from reading C++ file 'objectlistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "objectlistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objectlistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__ObjectListModel_t {
    QByteArrayData data[9];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__ObjectListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__ObjectListModel_t qt_meta_stringdata_omnetpp__qtenv__ObjectListModel = {
    {
QT_MOC_LITERAL(0, 0, 31), // "omnetpp::qtenv::ObjectListModel"
QT_MOC_LITERAL(1, 32, 4), // "sort"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 1), // "i"
QT_MOC_LITERAL(4, 40, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(5, 54, 5), // "order"
QT_MOC_LITERAL(6, 60, 12), // "removeObject"
QT_MOC_LITERAL(7, 73, 8), // "cObject*"
QT_MOC_LITERAL(8, 82, 6) // "object"

    },
    "omnetpp::qtenv::ObjectListModel\0sort\0"
    "\0i\0Qt::SortOrder\0order\0removeObject\0"
    "cObject*\0object"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__ObjectListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       6,    1,   29,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void omnetpp::qtenv::ObjectListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObjectListModel *_t = static_cast<ObjectListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sort((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 1: _t->removeObject((*reinterpret_cast< cObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject omnetpp::qtenv::ObjectListModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__ObjectListModel.data,
      qt_meta_data_omnetpp__qtenv__ObjectListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::ObjectListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::ObjectListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__ObjectListModel.stringdata0))
        return static_cast<void*>(const_cast< ObjectListModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int omnetpp::qtenv::ObjectListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
