/****************************************************************************
** Meta object code from reading C++ file 'outputvectorinspector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "outputvectorinspector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outputvectorinspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__OutputVectorInspector_t {
    QByteArrayData data[6];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__OutputVectorInspector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__OutputVectorInspector_t qt_meta_stringdata_omnetpp__qtenv__OutputVectorInspector = {
    {
QT_MOC_LITERAL(0, 0, 37), // "omnetpp::qtenv::OutputVectorI..."
QT_MOC_LITERAL(1, 38, 23), // "onOptionsDialogTriggerd"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 28), // "onCustomContextMenuRequested"
QT_MOC_LITERAL(4, 92, 3), // "pos"
QT_MOC_LITERAL(5, 96, 12) // "onClickApply"

    },
    "omnetpp::qtenv::OutputVectorInspector\0"
    "onOptionsDialogTriggerd\0\0"
    "onCustomContextMenuRequested\0pos\0"
    "onClickApply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__OutputVectorInspector[] = {

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
       1,    0,   29,    2, 0x09 /* Protected */,
       3,    1,   30,    2, 0x09 /* Protected */,
       5,    0,   33,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    4,
    QMetaType::Void,

       0        // eod
};

void omnetpp::qtenv::OutputVectorInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OutputVectorInspector *_t = static_cast<OutputVectorInspector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onOptionsDialogTriggerd(); break;
        case 1: _t->onCustomContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->onClickApply(); break;
        default: ;
        }
    }
}

const QMetaObject omnetpp::qtenv::OutputVectorInspector::staticMetaObject = {
    { &Inspector::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__OutputVectorInspector.data,
      qt_meta_data_omnetpp__qtenv__OutputVectorInspector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::OutputVectorInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::OutputVectorInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__OutputVectorInspector.stringdata0))
        return static_cast<void*>(const_cast< OutputVectorInspector*>(this));
    return Inspector::qt_metacast(_clname);
}

int omnetpp::qtenv::OutputVectorInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Inspector::qt_metacall(_c, _id, _a);
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
