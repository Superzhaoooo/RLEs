/****************************************************************************
** Meta object code from reading C++ file 'exponentialspinbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "exponentialspinbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'exponentialspinbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__ExponentialSpinBox_t {
    QByteArrayData data[7];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__ExponentialSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__ExponentialSpinBox_t qt_meta_stringdata_omnetpp__qtenv__ExponentialSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 34), // "omnetpp::qtenv::ExponentialSp..."
QT_MOC_LITERAL(1, 35, 6), // "adjust"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 3), // "val"
QT_MOC_LITERAL(4, 47, 6), // "notify"
QT_MOC_LITERAL(5, 54, 6), // "stepBy"
QT_MOC_LITERAL(6, 61, 5) // "steps"

    },
    "omnetpp::qtenv::ExponentialSpinBox\0"
    "adjust\0\0val\0notify\0stepBy\0steps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__ExponentialSpinBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       1,    1,   34,    2, 0x2a /* Public | MethodCloned */,
       5,    1,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void omnetpp::qtenv::ExponentialSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExponentialSpinBox *_t = static_cast<ExponentialSpinBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->adjust((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->adjust((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->stepBy((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject omnetpp::qtenv::ExponentialSpinBox::staticMetaObject = {
    { &QDoubleSpinBox::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__ExponentialSpinBox.data,
      qt_meta_data_omnetpp__qtenv__ExponentialSpinBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::ExponentialSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::ExponentialSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__ExponentialSpinBox.stringdata0))
        return static_cast<void*>(const_cast< ExponentialSpinBox*>(this));
    return QDoubleSpinBox::qt_metacast(_clname);
}

int omnetpp::qtenv::ExponentialSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
