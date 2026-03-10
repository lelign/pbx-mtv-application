/****************************************************************************
** Meta object code from reading C++ file 'hardware_diagnostics.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../hardware_diagnostics/hardware_diagnostics.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hardware_diagnostics.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Hardware_diagnostics_t {
    QByteArrayData data[9];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Hardware_diagnostics_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Hardware_diagnostics_t qt_meta_stringdata_Hardware_diagnostics = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Hardware_diagnostics"
QT_MOC_LITERAL(1, 21, 23), // "signal_over_temperature"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "signal_power_W"
QT_MOC_LITERAL(4, 61, 16), // "signal_fan_state"
QT_MOC_LITERAL(5, 78, 21), // "signal_hardware_state"
QT_MOC_LITERAL(6, 100, 11), // "str_power_W"
QT_MOC_LITERAL(7, 112, 17), // "str_temperature_C"
QT_MOC_LITERAL(8, 130, 22) // "slot_timer_info_update"

    },
    "Hardware_diagnostics\0signal_over_temperature\0"
    "\0signal_power_W\0signal_fan_state\0"
    "signal_hardware_state\0str_power_W\0"
    "str_temperature_C\0slot_timer_info_update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Hardware_diagnostics[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    1,   42,    2, 0x06 /* Public */,
       4,    1,   45,    2, 0x06 /* Public */,
       5,    2,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Hardware_diagnostics::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Hardware_diagnostics *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_over_temperature((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->signal_power_W((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->signal_fan_state((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->signal_hardware_state((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->slot_timer_info_update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Hardware_diagnostics::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Hardware_diagnostics::signal_over_temperature)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Hardware_diagnostics::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Hardware_diagnostics::signal_power_W)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Hardware_diagnostics::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Hardware_diagnostics::signal_fan_state)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Hardware_diagnostics::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Hardware_diagnostics::signal_hardware_state)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Hardware_diagnostics::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Hardware_diagnostics.data,
    qt_meta_data_Hardware_diagnostics,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Hardware_diagnostics::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Hardware_diagnostics::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Hardware_diagnostics.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Hardware_diagnostics::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Hardware_diagnostics::signal_over_temperature(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Hardware_diagnostics::signal_power_W(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Hardware_diagnostics::signal_fan_state(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Hardware_diagnostics::signal_hardware_state(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
