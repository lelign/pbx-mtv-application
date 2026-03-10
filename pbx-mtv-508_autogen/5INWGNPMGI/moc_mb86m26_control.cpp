/****************************************************************************
** Meta object code from reading C++ file 'mb86m26_control.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../m26/mb86m26_control.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mb86m26_control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mb86m26_control_t {
    QByteArrayData data[11];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mb86m26_control_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mb86m26_control_t qt_meta_stringdata_mb86m26_control = {
    {
QT_MOC_LITERAL(0, 0, 15), // "mb86m26_control"
QT_MOC_LITERAL(1, 16, 10), // "data_ready"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "uint8_t*"
QT_MOC_LITERAL(4, 37, 4), // "data"
QT_MOC_LITERAL(5, 42, 3), // "len"
QT_MOC_LITERAL(6, 46, 7), // "restart"
QT_MOC_LITERAL(7, 54, 7), // "hotplug"
QT_MOC_LITERAL(8, 62, 9), // "interrupt"
QT_MOC_LITERAL(9, 72, 18), // "mb_restart_request"
QT_MOC_LITERAL(10, 91, 13) // "state_timeout"

    },
    "mb86m26_control\0data_ready\0\0uint8_t*\0"
    "data\0len\0restart\0hotplug\0interrupt\0"
    "mb_restart_request\0state_timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mb86m26_control[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   50,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mb86m26_control::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mb86m26_control *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->data_ready((*reinterpret_cast< uint8_t*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->restart(); break;
        case 2: _t->hotplug(); break;
        case 3: _t->interrupt(); break;
        case 4: _t->mb_restart_request(); break;
        case 5: _t->state_timeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mb86m26_control::*)(uint8_t * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mb86m26_control::data_ready)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (mb86m26_control::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mb86m26_control::restart)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mb86m26_control::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mb86m26_control.data,
    qt_meta_data_mb86m26_control,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mb86m26_control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mb86m26_control::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mb86m26_control.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mb86m26_control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void mb86m26_control::data_ready(uint8_t * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mb86m26_control::restart()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
