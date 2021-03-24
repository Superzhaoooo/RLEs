/****************************************************************************
** Meta object code from reading C++ file 'timelinegraphicsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "timelinegraphicsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timelinegraphicsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__TimeLineGraphicsView_t {
    QByteArrayData data[10];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__TimeLineGraphicsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__TimeLineGraphicsView_t qt_meta_stringdata_omnetpp__qtenv__TimeLineGraphicsView = {
    {
QT_MOC_LITERAL(0, 0, 36), // "omnetpp::qtenv::TimeLineGraph..."
QT_MOC_LITERAL(1, 37, 20), // "contextMenuRequested"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 17), // "QVector<cObject*>"
QT_MOC_LITERAL(4, 77, 7), // "objects"
QT_MOC_LITERAL(5, 85, 9), // "globalPos"
QT_MOC_LITERAL(6, 95, 5), // "click"
QT_MOC_LITERAL(7, 101, 8), // "cObject*"
QT_MOC_LITERAL(8, 110, 6), // "object"
QT_MOC_LITERAL(9, 117, 11) // "doubleClick"

    },
    "omnetpp::qtenv::TimeLineGraphicsView\0"
    "contextMenuRequested\0\0QVector<cObject*>\0"
    "objects\0globalPos\0click\0cObject*\0"
    "object\0doubleClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__TimeLineGraphicsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       6,    1,   34,    2, 0x06 /* Public */,
       9,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPoint,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void omnetpp::qtenv::TimeLineGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimeLineGraphicsView *_t = static_cast<TimeLineGraphicsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contextMenuRequested((*reinterpret_cast< QVector<cObject*>(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 1: _t->click((*reinterpret_cast< cObject*(*)>(_a[1]))); break;
        case 2: _t->doubleClick((*reinterpret_cast< cObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TimeLineGraphicsView::*_t)(QVector<cObject*> , QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TimeLineGraphicsView::contextMenuRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TimeLineGraphicsView::*_t)(cObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TimeLineGraphicsView::click)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TimeLineGraphicsView::*_t)(cObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TimeLineGraphicsView::doubleClick)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject omnetpp::qtenv::TimeLineGraphicsView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__TimeLineGraphicsView.data,
      qt_meta_data_omnetpp__qtenv__TimeLineGraphicsView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::TimeLineGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::TimeLineGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__TimeLineGraphicsView.stringdata0))
        return static_cast<void*>(const_cast< TimeLineGraphicsView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int omnetpp::qtenv::TimeLineGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
void omnetpp::qtenv::TimeLineGraphicsView::contextMenuRequested(QVector<cObject*> _t1, QPoint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void omnetpp::qtenv::TimeLineGraphicsView::click(cObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void omnetpp::qtenv::TimeLineGraphicsView::doubleClick(cObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
