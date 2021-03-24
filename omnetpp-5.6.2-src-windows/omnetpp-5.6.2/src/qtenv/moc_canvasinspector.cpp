/****************************************************************************
** Meta object code from reading C++ file 'canvasinspector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "canvasinspector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canvasinspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__CanvasInspector_t {
    QByteArrayData data[10];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__CanvasInspector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__CanvasInspector_t qt_meta_stringdata_omnetpp__qtenv__CanvasInspector = {
    {
QT_MOC_LITERAL(0, 0, 31), // "omnetpp::qtenv::CanvasInspector"
QT_MOC_LITERAL(1, 32, 6), // "zoomIn"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "zoomOut"
QT_MOC_LITERAL(4, 48, 7), // "onClick"
QT_MOC_LITERAL(5, 56, 12), // "QMouseEvent*"
QT_MOC_LITERAL(6, 69, 5), // "event"
QT_MOC_LITERAL(7, 75, 22), // "onContextMenuRequested"
QT_MOC_LITERAL(8, 98, 18), // "QContextMenuEvent*"
QT_MOC_LITERAL(9, 117, 6) // "redraw"

    },
    "omnetpp::qtenv::CanvasInspector\0zoomIn\0"
    "\0zoomOut\0onClick\0QMouseEvent*\0event\0"
    "onContextMenuRequested\0QContextMenuEvent*\0"
    "redraw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__CanvasInspector[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       7,    1,   44,    2, 0x08 /* Private */,
       9,    0,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    6,
    QMetaType::Void,

       0        // eod
};

void omnetpp::qtenv::CanvasInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CanvasInspector *_t = static_cast<CanvasInspector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->zoomIn(); break;
        case 1: _t->zoomOut(); break;
        case 2: _t->onClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->onContextMenuRequested((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 4: _t->redraw(); break;
        default: ;
        }
    }
}

const QMetaObject omnetpp::qtenv::CanvasInspector::staticMetaObject = {
    { &Inspector::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__CanvasInspector.data,
      qt_meta_data_omnetpp__qtenv__CanvasInspector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::CanvasInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::CanvasInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__CanvasInspector.stringdata0))
        return static_cast<void*>(const_cast< CanvasInspector*>(this));
    return Inspector::qt_metacast(_clname);
}

int omnetpp::qtenv::CanvasInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Inspector::qt_metacall(_c, _id, _a);
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
