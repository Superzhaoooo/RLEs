/****************************************************************************
** Meta object code from reading C++ file 'iosgviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "iosgviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iosgviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__IOsgViewer_t {
    QByteArrayData data[5];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__IOsgViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__IOsgViewer_t qt_meta_stringdata_omnetpp__qtenv__IOsgViewer = {
    {
QT_MOC_LITERAL(0, 0, 26), // "omnetpp::qtenv::IOsgViewer"
QT_MOC_LITERAL(1, 27, 13), // "objectsPicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 21), // "std::vector<cObject*>"
QT_MOC_LITERAL(4, 64, 16) // "applyViewerHints"

    },
    "omnetpp::qtenv::IOsgViewer\0objectsPicked\0"
    "\0std::vector<cObject*>\0applyViewerHints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__IOsgViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void omnetpp::qtenv::IOsgViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IOsgViewer *_t = static_cast<IOsgViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->objectsPicked((*reinterpret_cast< const std::vector<cObject*>(*)>(_a[1]))); break;
        case 1: _t->applyViewerHints(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IOsgViewer::*_t)(const std::vector<cObject*> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IOsgViewer::objectsPicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject omnetpp::qtenv::IOsgViewer::staticMetaObject = {
    { &QOpenGLWidget::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__IOsgViewer.data,
      qt_meta_data_omnetpp__qtenv__IOsgViewer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::IOsgViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::IOsgViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__IOsgViewer.stringdata0))
        return static_cast<void*>(const_cast< IOsgViewer*>(this));
    return QOpenGLWidget::qt_metacast(_clname);
}

int omnetpp::qtenv::IOsgViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void omnetpp::qtenv::IOsgViewer::objectsPicked(const std::vector<cObject*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_omnetpp__qtenv__DummyOsgViewer_t {
    QByteArrayData data[5];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__DummyOsgViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__DummyOsgViewer_t qt_meta_stringdata_omnetpp__qtenv__DummyOsgViewer = {
    {
QT_MOC_LITERAL(0, 0, 30), // "omnetpp::qtenv::DummyOsgViewer"
QT_MOC_LITERAL(1, 31, 13), // "objectsPicked"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "std::vector<cObject*>"
QT_MOC_LITERAL(4, 68, 16) // "applyViewerHints"

    },
    "omnetpp::qtenv::DummyOsgViewer\0"
    "objectsPicked\0\0std::vector<cObject*>\0"
    "applyViewerHints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__DummyOsgViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void omnetpp::qtenv::DummyOsgViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DummyOsgViewer *_t = static_cast<DummyOsgViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->objectsPicked((*reinterpret_cast< const std::vector<cObject*>(*)>(_a[1]))); break;
        case 1: _t->applyViewerHints(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DummyOsgViewer::*_t)(const std::vector<cObject*> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DummyOsgViewer::objectsPicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject omnetpp::qtenv::DummyOsgViewer::staticMetaObject = {
    { &IOsgViewer::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__DummyOsgViewer.data,
      qt_meta_data_omnetpp__qtenv__DummyOsgViewer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::DummyOsgViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::DummyOsgViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__DummyOsgViewer.stringdata0))
        return static_cast<void*>(const_cast< DummyOsgViewer*>(this));
    return IOsgViewer::qt_metacast(_clname);
}

int omnetpp::qtenv::DummyOsgViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IOsgViewer::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void omnetpp::qtenv::DummyOsgViewer::objectsPicked(const std::vector<cObject*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
