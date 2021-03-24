/****************************************************************************
** Meta object code from reading C++ file 'osgviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "osgviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osgviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__HeartBeat_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__HeartBeat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__HeartBeat_t qt_meta_stringdata_omnetpp__qtenv__HeartBeat = {
    {
QT_MOC_LITERAL(0, 0, 25) // "omnetpp::qtenv::HeartBeat"

    },
    "omnetpp::qtenv::HeartBeat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__HeartBeat[] = {

 // content:
       7,       // revision
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

void omnetpp::qtenv::HeartBeat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject omnetpp::qtenv::HeartBeat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__HeartBeat.data,
      qt_meta_data_omnetpp__qtenv__HeartBeat,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::HeartBeat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::HeartBeat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__HeartBeat.stringdata0))
        return static_cast<void*>(const_cast< HeartBeat*>(this));
    return QObject::qt_metacast(_clname);
}

int omnetpp::qtenv::HeartBeat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_omnetpp__qtenv__OsgViewer_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__OsgViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__OsgViewer_t qt_meta_stringdata_omnetpp__qtenv__OsgViewer = {
    {
QT_MOC_LITERAL(0, 0, 25), // "omnetpp::qtenv::OsgViewer"
QT_MOC_LITERAL(1, 26, 13), // "objectsPicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 21), // "std::vector<cObject*>"
QT_MOC_LITERAL(4, 63, 20), // "setCameraManipulator"
QT_MOC_LITERAL(5, 84, 8), // "QAction*"
QT_MOC_LITERAL(6, 93, 6), // "sender"
QT_MOC_LITERAL(7, 100, 16) // "applyViewerHints"

    },
    "omnetpp::qtenv::OsgViewer\0objectsPicked\0"
    "\0std::vector<cObject*>\0setCameraManipulator\0"
    "QAction*\0sender\0applyViewerHints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__OsgViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x09 /* Protected */,
       7,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void omnetpp::qtenv::OsgViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OsgViewer *_t = static_cast<OsgViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->objectsPicked((*reinterpret_cast< const std::vector<cObject*>(*)>(_a[1]))); break;
        case 1: _t->setCameraManipulator((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->applyViewerHints(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OsgViewer::*_t)(const std::vector<cObject*> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OsgViewer::objectsPicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject omnetpp::qtenv::OsgViewer::staticMetaObject = {
    { &IOsgViewer::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__OsgViewer.data,
      qt_meta_data_omnetpp__qtenv__OsgViewer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::OsgViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::OsgViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__OsgViewer.stringdata0))
        return static_cast<void*>(const_cast< OsgViewer*>(this));
    return IOsgViewer::qt_metacast(_clname);
}

int omnetpp::qtenv::OsgViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IOsgViewer::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void omnetpp::qtenv::OsgViewer::objectsPicked(const std::vector<cObject*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
