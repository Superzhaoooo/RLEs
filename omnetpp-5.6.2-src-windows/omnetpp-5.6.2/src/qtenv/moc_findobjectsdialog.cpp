/****************************************************************************
** Meta object code from reading C++ file 'findobjectsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "findobjectsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findobjectsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__FindObjectsDialog_t {
    QByteArrayData data[11];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__FindObjectsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__FindObjectsDialog_t qt_meta_stringdata_omnetpp__qtenv__FindObjectsDialog = {
    {
QT_MOC_LITERAL(0, 0, 33), // "omnetpp::qtenv::FindObjectsDi..."
QT_MOC_LITERAL(1, 34, 10), // "invalidate"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 7), // "refresh"
QT_MOC_LITERAL(4, 54, 7), // "inspect"
QT_MOC_LITERAL(5, 62, 5), // "index"
QT_MOC_LITERAL(6, 68, 25), // "onListBoxSelectionChanged"
QT_MOC_LITERAL(7, 94, 14), // "QItemSelection"
QT_MOC_LITERAL(8, 109, 8), // "selected"
QT_MOC_LITERAL(9, 118, 10), // "deselected"
QT_MOC_LITERAL(10, 129, 13) // "onFontChanged"

    },
    "omnetpp::qtenv::FindObjectsDialog\0"
    "invalidate\0\0refresh\0inspect\0index\0"
    "onListBoxSelectionChanged\0QItemSelection\0"
    "selected\0deselected\0onFontChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__FindObjectsDialog[] = {

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
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    2,   44,    2, 0x08 /* Private */,
      10,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,
    QMetaType::Void,

       0        // eod
};

void omnetpp::qtenv::FindObjectsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FindObjectsDialog *_t = static_cast<FindObjectsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->invalidate(); break;
        case 1: _t->refresh(); break;
        case 2: _t->inspect((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->onListBoxSelectionChanged((*reinterpret_cast< QItemSelection(*)>(_a[1])),(*reinterpret_cast< QItemSelection(*)>(_a[2]))); break;
        case 4: _t->onFontChanged(); break;
        default: ;
        }
    }
}

const QMetaObject omnetpp::qtenv::FindObjectsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__FindObjectsDialog.data,
      qt_meta_data_omnetpp__qtenv__FindObjectsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::FindObjectsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::FindObjectsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__FindObjectsDialog.stringdata0))
        return static_cast<void*>(const_cast< FindObjectsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int omnetpp::qtenv::FindObjectsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
