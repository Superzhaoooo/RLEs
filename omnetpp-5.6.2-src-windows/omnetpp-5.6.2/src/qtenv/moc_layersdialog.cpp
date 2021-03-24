/****************************************************************************
** Meta object code from reading C++ file 'layersdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "layersdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layersdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__LayersDialog_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__LayersDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__LayersDialog_t qt_meta_stringdata_omnetpp__qtenv__LayersDialog = {
    {
QT_MOC_LITERAL(0, 0, 28), // "omnetpp::qtenv::LayersDialog"
QT_MOC_LITERAL(1, 29, 24), // "onEnabledCheckBoxClicked"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 7), // "checked"
QT_MOC_LITERAL(4, 63, 23), // "onExceptCheckBoxClicked"
QT_MOC_LITERAL(5, 87, 15), // "applyTagFilters"
QT_MOC_LITERAL(6, 103, 6), // "accept"
QT_MOC_LITERAL(7, 110, 6) // "reject"

    },
    "omnetpp::qtenv::LayersDialog\0"
    "onEnabledCheckBoxClicked\0\0checked\0"
    "onExceptCheckBoxClicked\0applyTagFilters\0"
    "accept\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__LayersDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       5,    0,   45,    2, 0x08 /* Private */,
       6,    0,   46,    2, 0x0a /* Public */,
       7,    0,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void omnetpp::qtenv::LayersDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LayersDialog *_t = static_cast<LayersDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onEnabledCheckBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onExceptCheckBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->applyTagFilters(); break;
        case 3: _t->accept(); break;
        case 4: _t->reject(); break;
        default: ;
        }
    }
}

const QMetaObject omnetpp::qtenv::LayersDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__LayersDialog.data,
      qt_meta_data_omnetpp__qtenv__LayersDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::LayersDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::LayersDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__LayersDialog.stringdata0))
        return static_cast<void*>(const_cast< LayersDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int omnetpp::qtenv::LayersDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
