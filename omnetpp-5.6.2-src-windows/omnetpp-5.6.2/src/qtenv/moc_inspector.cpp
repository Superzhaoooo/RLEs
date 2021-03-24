/****************************************************************************
** Meta object code from reading C++ file 'inspector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inspector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__Inspector_t {
    QByteArrayData data[15];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__Inspector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__Inspector_t qt_meta_stringdata_omnetpp__qtenv__Inspector = {
    {
QT_MOC_LITERAL(0, 0, 25), // "omnetpp::qtenv::Inspector"
QT_MOC_LITERAL(1, 26, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8), // "cObject*"
QT_MOC_LITERAL(4, 53, 6), // "object"
QT_MOC_LITERAL(5, 60, 19), // "objectDoubleClicked"
QT_MOC_LITERAL(6, 80, 22), // "inspectedObjectChanged"
QT_MOC_LITERAL(7, 103, 9), // "newObject"
QT_MOC_LITERAL(8, 113, 9), // "oldObject"
QT_MOC_LITERAL(9, 123, 9), // "setObject"
QT_MOC_LITERAL(10, 133, 6), // "goBack"
QT_MOC_LITERAL(11, 140, 9), // "goForward"
QT_MOC_LITERAL(12, 150, 13), // "inspectParent"
QT_MOC_LITERAL(13, 164, 17), // "findObjectsWithin"
QT_MOC_LITERAL(14, 182, 8) // "goUpInto"

    },
    "omnetpp::qtenv::Inspector\0selectionChanged\0"
    "\0cObject*\0object\0objectDoubleClicked\0"
    "inspectedObjectChanged\0newObject\0"
    "oldObject\0setObject\0goBack\0goForward\0"
    "inspectParent\0findObjectsWithin\0"
    "goUpInto"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__Inspector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       6,    2,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   70,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x0a /* Public */,
      11,    0,   74,    2, 0x0a /* Public */,
      12,    0,   75,    2, 0x0a /* Public */,
      13,    0,   76,    2, 0x0a /* Public */,
      14,    0,   77,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void omnetpp::qtenv::Inspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Inspector *_t = static_cast<Inspector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< cObject*(*)>(_a[1]))); break;
        case 1: _t->objectDoubleClicked((*reinterpret_cast< cObject*(*)>(_a[1]))); break;
        case 2: _t->inspectedObjectChanged((*reinterpret_cast< cObject*(*)>(_a[1])),(*reinterpret_cast< cObject*(*)>(_a[2]))); break;
        case 3: _t->setObject((*reinterpret_cast< cObject*(*)>(_a[1]))); break;
        case 4: _t->goBack(); break;
        case 5: _t->goForward(); break;
        case 6: _t->inspectParent(); break;
        case 7: _t->findObjectsWithin(); break;
        case 8: _t->goUpInto(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Inspector::*_t)(cObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Inspector::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Inspector::*_t)(cObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Inspector::objectDoubleClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Inspector::*_t)(cObject * , cObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Inspector::inspectedObjectChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject omnetpp::qtenv::Inspector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__Inspector.data,
      qt_meta_data_omnetpp__qtenv__Inspector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::Inspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::Inspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__Inspector.stringdata0))
        return static_cast<void*>(const_cast< Inspector*>(this));
    return QWidget::qt_metacast(_clname);
}

int omnetpp::qtenv::Inspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::Inspector::selectionChanged(cObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void omnetpp::qtenv::Inspector::objectDoubleClicked(cObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void omnetpp::qtenv::Inspector::inspectedObjectChanged(cObject * _t1, cObject * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
