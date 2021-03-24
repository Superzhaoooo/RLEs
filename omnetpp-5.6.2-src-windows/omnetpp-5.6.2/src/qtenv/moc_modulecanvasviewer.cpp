/****************************************************************************
** Meta object code from reading C++ file 'modulecanvasviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modulecanvasviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modulecanvasviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__ModuleCanvasViewer_t {
    QByteArrayData data[19];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__ModuleCanvasViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__ModuleCanvasViewer_t qt_meta_stringdata_omnetpp__qtenv__ModuleCanvasViewer = {
    {
QT_MOC_LITERAL(0, 0, 34), // "omnetpp::qtenv::ModuleCanvasV..."
QT_MOC_LITERAL(1, 35, 5), // "click"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "QMouseEvent*"
QT_MOC_LITERAL(4, 55, 4), // "back"
QT_MOC_LITERAL(5, 60, 7), // "forward"
QT_MOC_LITERAL(6, 68, 11), // "doubleClick"
QT_MOC_LITERAL(7, 80, 20), // "contextMenuRequested"
QT_MOC_LITERAL(8, 101, 21), // "std::vector<cObject*>"
QT_MOC_LITERAL(9, 123, 7), // "objects"
QT_MOC_LITERAL(10, 131, 9), // "globalPos"
QT_MOC_LITERAL(11, 141, 7), // "dragged"
QT_MOC_LITERAL(12, 149, 11), // "marqueeZoom"
QT_MOC_LITERAL(13, 161, 13), // "exportToImage"
QT_MOC_LITERAL(14, 175, 11), // "exportToPdf"
QT_MOC_LITERAL(15, 187, 5), // "print"
QT_MOC_LITERAL(16, 193, 17), // "setLayoutingScene"
QT_MOC_LITERAL(17, 211, 15), // "QGraphicsScene*"
QT_MOC_LITERAL(18, 227, 14) // "layoutingScene"

    },
    "omnetpp::qtenv::ModuleCanvasViewer\0"
    "click\0\0QMouseEvent*\0back\0forward\0"
    "doubleClick\0contextMenuRequested\0"
    "std::vector<cObject*>\0objects\0globalPos\0"
    "dragged\0marqueeZoom\0exportToImage\0"
    "exportToPdf\0print\0setLayoutingScene\0"
    "QGraphicsScene*\0layoutingScene"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__ModuleCanvasViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    0,   72,    2, 0x06 /* Public */,
       5,    0,   73,    2, 0x06 /* Public */,
       6,    1,   74,    2, 0x06 /* Public */,
       7,    2,   77,    2, 0x06 /* Public */,
      11,    1,   82,    2, 0x06 /* Public */,
      12,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   88,    2, 0x0a /* Public */,
      14,    0,   89,    2, 0x0a /* Public */,
      15,    0,   90,    2, 0x0a /* Public */,
      16,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QPoint,    9,   10,
    QMetaType::Void, QMetaType::QPointF,    2,
    QMetaType::Void, QMetaType::QRectF,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void omnetpp::qtenv::ModuleCanvasViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModuleCanvasViewer *_t = static_cast<ModuleCanvasViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->click((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->back(); break;
        case 2: _t->forward(); break;
        case 3: _t->doubleClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->contextMenuRequested((*reinterpret_cast< const std::vector<cObject*>(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 5: _t->dragged((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 6: _t->marqueeZoom((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 7: _t->exportToImage(); break;
        case 8: _t->exportToPdf(); break;
        case 9: _t->print(); break;
        case 10: _t->setLayoutingScene((*reinterpret_cast< QGraphicsScene*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ModuleCanvasViewer::*_t)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModuleCanvasViewer::click)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ModuleCanvasViewer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModuleCanvasViewer::back)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ModuleCanvasViewer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModuleCanvasViewer::forward)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ModuleCanvasViewer::*_t)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModuleCanvasViewer::doubleClick)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ModuleCanvasViewer::*_t)(const std::vector<cObject*> & , const QPoint & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModuleCanvasViewer::contextMenuRequested)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ModuleCanvasViewer::*_t)(QPointF );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModuleCanvasViewer::dragged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ModuleCanvasViewer::*_t)(QRectF );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModuleCanvasViewer::marqueeZoom)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject omnetpp::qtenv::ModuleCanvasViewer::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__ModuleCanvasViewer.data,
      qt_meta_data_omnetpp__qtenv__ModuleCanvasViewer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::ModuleCanvasViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::ModuleCanvasViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__ModuleCanvasViewer.stringdata0))
        return static_cast<void*>(const_cast< ModuleCanvasViewer*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int omnetpp::qtenv::ModuleCanvasViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::ModuleCanvasViewer::click(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void omnetpp::qtenv::ModuleCanvasViewer::back()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void omnetpp::qtenv::ModuleCanvasViewer::forward()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void omnetpp::qtenv::ModuleCanvasViewer::doubleClick(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void omnetpp::qtenv::ModuleCanvasViewer::contextMenuRequested(const std::vector<cObject*> & _t1, const QPoint & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void omnetpp::qtenv::ModuleCanvasViewer::dragged(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void omnetpp::qtenv::ModuleCanvasViewer::marqueeZoom(QRectF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
