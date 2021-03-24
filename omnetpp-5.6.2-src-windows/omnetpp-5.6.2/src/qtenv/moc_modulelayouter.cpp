/****************************************************************************
** Meta object code from reading C++ file 'modulelayouter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modulelayouter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modulelayouter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__ModuleLayouter_t {
    QByteArrayData data[17];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__ModuleLayouter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__ModuleLayouter_t qt_meta_stringdata_omnetpp__qtenv__ModuleLayouter = {
    {
QT_MOC_LITERAL(0, 0, 30), // "omnetpp::qtenv::ModuleLayouter"
QT_MOC_LITERAL(1, 31, 25), // "layoutVisualisationStarts"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 8), // "cModule*"
QT_MOC_LITERAL(4, 67, 6), // "module"
QT_MOC_LITERAL(5, 74, 15), // "QGraphicsScene*"
QT_MOC_LITERAL(6, 90, 14), // "layoutingScene"
QT_MOC_LITERAL(7, 105, 23), // "layoutVisualisationEnds"
QT_MOC_LITERAL(8, 129, 19), // "moduleLayoutChanged"
QT_MOC_LITERAL(9, 149, 4), // "stop"
QT_MOC_LITERAL(10, 154, 11), // "clearLayout"
QT_MOC_LITERAL(11, 166, 14), // "forgetPosition"
QT_MOC_LITERAL(12, 181, 9), // "submodule"
QT_MOC_LITERAL(13, 191, 21), // "refreshPositionFromDS"
QT_MOC_LITERAL(14, 213, 19), // "incrementLayoutSeed"
QT_MOC_LITERAL(15, 233, 14), // "ensureLayouted"
QT_MOC_LITERAL(16, 248, 12) // "fullRelayout"

    },
    "omnetpp::qtenv::ModuleLayouter\0"
    "layoutVisualisationStarts\0\0cModule*\0"
    "module\0QGraphicsScene*\0layoutingScene\0"
    "layoutVisualisationEnds\0moduleLayoutChanged\0"
    "stop\0clearLayout\0forgetPosition\0"
    "submodule\0refreshPositionFromDS\0"
    "incrementLayoutSeed\0ensureLayouted\0"
    "fullRelayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__ModuleLayouter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       7,    1,   69,    2, 0x06 /* Public */,
       8,    1,   72,    2, 0x06 /* Public */,
       9,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   76,    2, 0x0a /* Public */,
      11,    1,   79,    2, 0x0a /* Public */,
      13,    1,   82,    2, 0x0a /* Public */,
      14,    1,   85,    2, 0x0a /* Public */,
      15,    1,   88,    2, 0x0a /* Public */,
      16,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,   12,
    QMetaType::Void, 0x80000000 | 3,   12,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void omnetpp::qtenv::ModuleLayouter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModuleLayouter *_t = static_cast<ModuleLayouter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layoutVisualisationStarts((*reinterpret_cast< cModule*(*)>(_a[1])),(*reinterpret_cast< QGraphicsScene*(*)>(_a[2]))); break;
        case 1: _t->layoutVisualisationEnds((*reinterpret_cast< cModule*(*)>(_a[1]))); break;
        case 2: _t->moduleLayoutChanged((*reinterpret_cast< cModule*(*)>(_a[1]))); break;
        case 3: _t->stop(); break;
        case 4: _t->clearLayout((*reinterpret_cast< cModule*(*)>(_a[1]))); break;
        case 5: _t->forgetPosition((*reinterpret_cast< cModule*(*)>(_a[1]))); break;
        case 6: _t->refreshPositionFromDS((*reinterpret_cast< cModule*(*)>(_a[1]))); break;
        case 7: _t->incrementLayoutSeed((*reinterpret_cast< cModule*(*)>(_a[1]))); break;
        case 8: _t->ensureLayouted((*reinterpret_cast< cModule*(*)>(_a[1]))); break;
        case 9: _t->fullRelayout((*reinterpret_cast< cModule*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ModuleLayouter::*_t)(cModule * , QGraphicsScene * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModuleLayouter::layoutVisualisationStarts)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ModuleLayouter::*_t)(cModule * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModuleLayouter::layoutVisualisationEnds)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ModuleLayouter::*_t)(cModule * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModuleLayouter::moduleLayoutChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ModuleLayouter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModuleLayouter::stop)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject omnetpp::qtenv::ModuleLayouter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__ModuleLayouter.data,
      qt_meta_data_omnetpp__qtenv__ModuleLayouter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::ModuleLayouter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::ModuleLayouter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__ModuleLayouter.stringdata0))
        return static_cast<void*>(const_cast< ModuleLayouter*>(this));
    return QObject::qt_metacast(_clname);
}

int omnetpp::qtenv::ModuleLayouter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::ModuleLayouter::layoutVisualisationStarts(cModule * _t1, QGraphicsScene * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void omnetpp::qtenv::ModuleLayouter::layoutVisualisationEnds(cModule * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void omnetpp::qtenv::ModuleLayouter::moduleLayoutChanged(cModule * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void omnetpp::qtenv::ModuleLayouter::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
