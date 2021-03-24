/****************************************************************************
** Meta object code from reading C++ file 'textviewerproviders.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "textviewerproviders.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textviewerproviders.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__TextViewerContentProvider_t {
    QByteArrayData data[5];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__TextViewerContentProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__TextViewerContentProvider_t qt_meta_stringdata_omnetpp__qtenv__TextViewerContentProvider = {
    {
QT_MOC_LITERAL(0, 0, 41), // "omnetpp::qtenv::TextViewerCon..."
QT_MOC_LITERAL(1, 42, 11), // "textChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 14), // "linesDiscarded"
QT_MOC_LITERAL(4, 70, 17) // "numDiscardedLines"

    },
    "omnetpp::qtenv::TextViewerContentProvider\0"
    "textChanged\0\0linesDiscarded\0"
    "numDiscardedLines"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__TextViewerContentProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void omnetpp::qtenv::TextViewerContentProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TextViewerContentProvider *_t = static_cast<TextViewerContentProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->linesDiscarded((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TextViewerContentProvider::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TextViewerContentProvider::textChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TextViewerContentProvider::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TextViewerContentProvider::linesDiscarded)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject omnetpp::qtenv::TextViewerContentProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__TextViewerContentProvider.data,
      qt_meta_data_omnetpp__qtenv__TextViewerContentProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::TextViewerContentProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::TextViewerContentProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__TextViewerContentProvider.stringdata0))
        return static_cast<void*>(const_cast< TextViewerContentProvider*>(this));
    return QObject::qt_metacast(_clname);
}

int omnetpp::qtenv::TextViewerContentProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void omnetpp::qtenv::TextViewerContentProvider::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void omnetpp::qtenv::TextViewerContentProvider::linesDiscarded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_omnetpp__qtenv__StringTextViewerContentProvider_t {
    QByteArrayData data[1];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__StringTextViewerContentProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__StringTextViewerContentProvider_t qt_meta_stringdata_omnetpp__qtenv__StringTextViewerContentProvider = {
    {
QT_MOC_LITERAL(0, 0, 47) // "omnetpp::qtenv::StringTextVie..."

    },
    "omnetpp::qtenv::StringTextViewerContentProvider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__StringTextViewerContentProvider[] = {

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

void omnetpp::qtenv::StringTextViewerContentProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject omnetpp::qtenv::StringTextViewerContentProvider::staticMetaObject = {
    { &TextViewerContentProvider::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__StringTextViewerContentProvider.data,
      qt_meta_data_omnetpp__qtenv__StringTextViewerContentProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::StringTextViewerContentProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::StringTextViewerContentProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__StringTextViewerContentProvider.stringdata0))
        return static_cast<void*>(const_cast< StringTextViewerContentProvider*>(this));
    return TextViewerContentProvider::qt_metacast(_clname);
}

int omnetpp::qtenv::StringTextViewerContentProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TextViewerContentProvider::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_omnetpp__qtenv__ModuleOutputContentProvider_t {
    QByteArrayData data[6];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__ModuleOutputContentProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__ModuleOutputContentProvider_t qt_meta_stringdata_omnetpp__qtenv__ModuleOutputContentProvider = {
    {
QT_MOC_LITERAL(0, 0, 43), // "omnetpp::qtenv::ModuleOutputC..."
QT_MOC_LITERAL(1, 44, 14), // "onContentAdded"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 16), // "onEntryDiscarded"
QT_MOC_LITERAL(4, 77, 17), // "LogBuffer::Entry*"
QT_MOC_LITERAL(5, 95, 14) // "discardedEntry"

    },
    "omnetpp::qtenv::ModuleOutputContentProvider\0"
    "onContentAdded\0\0onEntryDiscarded\0"
    "LogBuffer::Entry*\0discardedEntry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__ModuleOutputContentProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    1,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void omnetpp::qtenv::ModuleOutputContentProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModuleOutputContentProvider *_t = static_cast<ModuleOutputContentProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onContentAdded(); break;
        case 1: _t->onEntryDiscarded((*reinterpret_cast< LogBuffer::Entry*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject omnetpp::qtenv::ModuleOutputContentProvider::staticMetaObject = {
    { &TextViewerContentProvider::staticMetaObject, qt_meta_stringdata_omnetpp__qtenv__ModuleOutputContentProvider.data,
      qt_meta_data_omnetpp__qtenv__ModuleOutputContentProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *omnetpp::qtenv::ModuleOutputContentProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::ModuleOutputContentProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__ModuleOutputContentProvider.stringdata0))
        return static_cast<void*>(const_cast< ModuleOutputContentProvider*>(this));
    return TextViewerContentProvider::qt_metacast(_clname);
}

int omnetpp::qtenv::ModuleOutputContentProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TextViewerContentProvider::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
