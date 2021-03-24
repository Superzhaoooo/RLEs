/****************************************************************************
** Meta object code from reading C++ file 'qtenv.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qtenv.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtenv.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__Qtenv_t {
    QByteArrayData data[23];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__Qtenv_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__Qtenv_t qt_meta_stringdata_omnetpp__qtenv__Qtenv = {
    {
QT_MOC_LITERAL(0, 0, 21), // "omnetpp::qtenv::Qtenv"
QT_MOC_LITERAL(1, 22, 11), // "fontChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "objectDeletedSignal"
QT_MOC_LITERAL(4, 55, 8), // "cObject*"
QT_MOC_LITERAL(5, 64, 6), // "object"
QT_MOC_LITERAL(6, 71, 18), // "onSelectionChanged"
QT_MOC_LITERAL(7, 90, 21), // "onObjectDoubleClicked"
QT_MOC_LITERAL(8, 112, 7), // "inspect"
QT_MOC_LITERAL(9, 120, 14), // "runUntilModule"
QT_MOC_LITERAL(10, 135, 15), // "runUntilMessage"
QT_MOC_LITERAL(11, 151, 14), // "excludeMessage"
QT_MOC_LITERAL(12, 166, 16), // "utilitiesSubMenu"
QT_MOC_LITERAL(13, 183, 21), // "updateStoredInspector"
QT_MOC_LITERAL(14, 205, 9), // "newObject"
QT_MOC_LITERAL(15, 215, 9), // "oldObject"
QT_MOC_LITERAL(16, 225, 20), // "setComponentLogLevel"
QT_MOC_LITERAL(17, 246, 11), // "cComponent*"
QT_MOC_LITERAL(18, 258, 9), // "component"
QT_MOC_LITERAL(19, 268, 8), // "LogLevel"
QT_MOC_LITERAL(20, 277, 5), // "level"
QT_MOC_LITERAL(21, 283, 4), // "save"
QT_MOC_LITERAL(22, 288, 25) // "initialSetUpConfiguration"

    },
    "omnetpp::qtenv::Qtenv\0fontChanged\0\0"
    "objectDeletedSignal\0cObject*\0object\0"
    "onSelectionChanged\0onObjectDoubleClicked\0"
    "inspect\0runUntilModule\0runUntilMessage\0"
    "excludeMessage\0utilitiesSubMenu\0"
    "updateStoredInspector\0newObject\0"
    "oldObject\0setComponentLogLevel\0"
    "cComponent*\0component\0LogLevel\0level\0"
    "save\0initialSetUpConfiguration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__Qtenv[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   88,    2, 0x0a /* Public */,
       7,    1,   91,    2, 0x0a /* Public */,
       8,    0,   94,    2, 0x0a /* Public */,
       9,    0,   95,    2, 0x0a /* Public */,
      10,    0,   96,    2, 0x0a /* Public */,
      11,    0,   97,    2, 0x0a /* Public */,
      12,    0,   98,    2, 0x0a /* Public */,
      13,    2,   99,    2, 0x0a /* Public */,
      16,    0,  104,    2, 0x0a /* Public */,
      16,    3,  105,    2, 0x0a /* Public */,
      16,    2,  112,    2, 0x2a /* Public | MethodCloned */,
      22,    0,  117,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,   14,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 19, QMetaType::Bool,   18,   20,   21,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 19,   18,   20,
    QMetaType::Void,

       0        // eod
};

void omnetpp::qtenv::Qtenv::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Qtenv *_t = static_cast<Qtenv *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fontChanged(); break;
        case 1: _t->objectDeletedSignal((*reinterpret_cast< cObject*(*)>(_a[1]))); break;
        case 2: _t->onSelectionChanged((*reinterpret_cast< cObject*(*)>(_a[1]))); break;
        case 3: _t->onObjectDoubleClicked((*reinterpret_cast< cObject*(*)>(_a[1]))); break;
        case 4: _t->inspect(); break;
        case 5: _t->runUntilModule(); break;
        case 6: _t->runUntilMessage(); break;
        case 7: _t->excludeMessage(); break;
        case 8: _t->utilitiesSubMenu(); break;
        case 9: _t->updateStoredInspector((*reinterpret_cast< cObject*(*)>(_a[1])),(*reinterpret_cast< cObject*(*)>(_a[2]))); break;
        case 10: _t->setComponentLogLevel(); break;
        case 11: _t->setComponentLogLevel((*reinterpret_cast< cComponent*(*)>(_a[1])),(*reinterpret_cast< LogLevel(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->setComponentLogLevel((*reinterpret_cast< cComponent*(*)>(_a[1])),(*reinterpret_cast< LogLevel(*)>(_a[2]))); break;
        case 13: _t->initialSetUpConfiguration(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Qtenv::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Qtenv::fontChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Qtenv::*_t)(cObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Qtenv::objectDeletedSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject omnetpp::qtenv::Qtenv::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__Qtenv.data,
      qt_meta_data_omnetpp__qtenv__Qtenv,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::Qtenv::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::Qtenv::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__Qtenv.stringdata0))
        return static_cast<void*>(const_cast< Qtenv*>(this));
    if (!strcmp(_clname, "EnvirBase"))
        return static_cast< EnvirBase*>(const_cast< Qtenv*>(this));
    return QObject::qt_metacast(_clname);
}

int omnetpp::qtenv::Qtenv::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void omnetpp::qtenv::Qtenv::fontChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void omnetpp::qtenv::Qtenv::objectDeletedSignal(cObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
