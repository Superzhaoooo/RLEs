/****************************************************************************
** Meta object code from reading C++ file 'timelineinspector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "timelineinspector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timelineinspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__TimeLineInspector_t {
    QByteArrayData data[12];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__TimeLineInspector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__TimeLineInspector_t qt_meta_stringdata_omnetpp__qtenv__TimeLineInspector = {
    {
QT_MOC_LITERAL(0, 0, 33), // "omnetpp::qtenv::TimeLineInspe..."
QT_MOC_LITERAL(1, 34, 20), // "runPreferencesDialog"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 13), // "onFontChanged"
QT_MOC_LITERAL(4, 70, 17), // "createContextMenu"
QT_MOC_LITERAL(5, 88, 17), // "QVector<cObject*>"
QT_MOC_LITERAL(6, 106, 7), // "objects"
QT_MOC_LITERAL(7, 114, 9), // "globalPos"
QT_MOC_LITERAL(8, 124, 26), // "setObjectToObjectInspector"
QT_MOC_LITERAL(9, 151, 8), // "cObject*"
QT_MOC_LITERAL(10, 160, 6), // "object"
QT_MOC_LITERAL(11, 167, 13) // "openInspector"

    },
    "omnetpp::qtenv::TimeLineInspector\0"
    "runPreferencesDialog\0\0onFontChanged\0"
    "createContextMenu\0QVector<cObject*>\0"
    "objects\0globalPos\0setObjectToObjectInspector\0"
    "cObject*\0object\0openInspector"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__TimeLineInspector[] = {

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
       4,    2,   41,    2, 0x0a /* Public */,
       8,    1,   46,    2, 0x0a /* Public */,
      11,    1,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QPoint,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void omnetpp::qtenv::TimeLineInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimeLineInspector *_t = static_cast<TimeLineInspector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->runPreferencesDialog(); break;
        case 1: _t->onFontChanged(); break;
        case 2: _t->createContextMenu((*reinterpret_cast< QVector<cObject*>(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 3: _t->setObjectToObjectInspector((*reinterpret_cast< cObject*(*)>(_a[1]))); break;
        case 4: _t->openInspector((*reinterpret_cast< cObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject omnetpp::qtenv::TimeLineInspector::staticMetaObject = {
    { &Inspector::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__TimeLineInspector.data,
      qt_meta_data_omnetpp__qtenv__TimeLineInspector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::TimeLineInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::TimeLineInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__TimeLineInspector.stringdata0))
        return static_cast<void*>(const_cast< TimeLineInspector*>(this));
    return Inspector::qt_metacast(_clname);
}

int omnetpp::qtenv::TimeLineInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
