/****************************************************************************
** Meta object code from reading C++ file 'displayupdatecontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "displayupdatecontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'displayupdatecontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__DisplayUpdateController_t {
    QByteArrayData data[12];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__DisplayUpdateController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__DisplayUpdateController_t qt_meta_stringdata_omnetpp__qtenv__DisplayUpdateController = {
    {
QT_MOC_LITERAL(0, 0, 39), // "omnetpp::qtenv::DisplayUpdate..."
QT_MOC_LITERAL(1, 40, 20), // "playbackSpeedChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 5), // "speed"
QT_MOC_LITERAL(4, 68, 14), // "runModeChanged"
QT_MOC_LITERAL(5, 83, 7), // "RunMode"
QT_MOC_LITERAL(6, 91, 4), // "mode"
QT_MOC_LITERAL(7, 96, 16), // "setPlaybackSpeed"
QT_MOC_LITERAL(8, 113, 15), // "RunModeProfile*"
QT_MOC_LITERAL(9, 129, 7), // "profile"
QT_MOC_LITERAL(10, 137, 5), // "pause"
QT_MOC_LITERAL(11, 143, 6) // "resume"

    },
    "omnetpp::qtenv::DisplayUpdateController\0"
    "playbackSpeedChanged\0\0speed\0runModeChanged\0"
    "RunMode\0mode\0setPlaybackSpeed\0"
    "RunModeProfile*\0profile\0pause\0resume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__DisplayUpdateController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   50,    2, 0x0a /* Public */,
       7,    2,   53,    2, 0x0a /* Public */,
      10,    0,   58,    2, 0x0a /* Public */,
      11,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 8,    3,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void omnetpp::qtenv::DisplayUpdateController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DisplayUpdateController *_t = static_cast<DisplayUpdateController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playbackSpeedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->runModeChanged((*reinterpret_cast< RunMode(*)>(_a[1]))); break;
        case 2: _t->setPlaybackSpeed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setPlaybackSpeed((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< RunModeProfile*(*)>(_a[2]))); break;
        case 4: _t->pause(); break;
        case 5: _t->resume(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DisplayUpdateController::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DisplayUpdateController::playbackSpeedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DisplayUpdateController::*_t)(RunMode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DisplayUpdateController::runModeChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject omnetpp::qtenv::DisplayUpdateController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__DisplayUpdateController.data,
      qt_meta_data_omnetpp__qtenv__DisplayUpdateController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::DisplayUpdateController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::DisplayUpdateController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__DisplayUpdateController.stringdata0))
        return static_cast<void*>(const_cast< DisplayUpdateController*>(this));
    return QObject::qt_metacast(_clname);
}

int omnetpp::qtenv::DisplayUpdateController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::DisplayUpdateController::playbackSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void omnetpp::qtenv::DisplayUpdateController::runModeChanged(RunMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
