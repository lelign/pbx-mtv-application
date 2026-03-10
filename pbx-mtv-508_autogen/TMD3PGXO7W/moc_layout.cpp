/****************************************************************************
** Meta object code from reading C++ file 'layout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../layout/layout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Layout_t {
    QByteArrayData data[42];
    char stringdata0[649];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Layout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Layout_t qt_meta_stringdata_Layout = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Layout"
QT_MOC_LITERAL(1, 7, 11), // "signal_solo"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "solo_mode_t"
QT_MOC_LITERAL(4, 32, 9), // "solo_mode"
QT_MOC_LITERAL(5, 42, 13), // "signal_preset"
QT_MOC_LITERAL(6, 56, 13), // "preset_number"
QT_MOC_LITERAL(7, 70, 27), // "signal_common_alarm_changed"
QT_MOC_LITERAL(8, 98, 12), // "common_alarm"
QT_MOC_LITERAL(9, 111, 31), // "signal_cascade_device_connected"
QT_MOC_LITERAL(10, 143, 5), // "index"
QT_MOC_LITERAL(11, 149, 34), // "signal_cascade_device_data_re..."
QT_MOC_LITERAL(12, 184, 4), // "data"
QT_MOC_LITERAL(13, 189, 31), // "signal_cascade_server_readyRead"
QT_MOC_LITERAL(14, 221, 3), // "arr"
QT_MOC_LITERAL(15, 225, 15), // "slot_new_format"
QT_MOC_LITERAL(16, 241, 9), // "slot_qpps"
QT_MOC_LITERAL(17, 251, 17), // "slot_update_alarm"
QT_MOC_LITERAL(18, 269, 16), // "slot_update_op47"
QT_MOC_LITERAL(19, 286, 14), // "slot_gpio_solo"
QT_MOC_LITERAL(20, 301, 12), // "input_number"
QT_MOC_LITERAL(21, 314, 16), // "slot_gpio_preset"
QT_MOC_LITERAL(22, 331, 26), // "slot_cascade_gpio_set_solo"
QT_MOC_LITERAL(23, 358, 23), // "slot_solo_mode_desebled"
QT_MOC_LITERAL(24, 382, 14), // "slot_op47_data"
QT_MOC_LITERAL(25, 397, 7), // "channel"
QT_MOC_LITERAL(26, 405, 11), // "slot_splice"
QT_MOC_LITERAL(27, 417, 7), // "text_in"
QT_MOC_LITERAL(28, 425, 8), // "text_out"
QT_MOC_LITERAL(29, 434, 21), // "slot_master_connected"
QT_MOC_LITERAL(30, 456, 11), // "QTcpSocket*"
QT_MOC_LITERAL(31, 468, 7), // "pSocket"
QT_MOC_LITERAL(32, 476, 2), // "ip"
QT_MOC_LITERAL(33, 479, 17), // "slot_Disconnected"
QT_MOC_LITERAL(34, 497, 25), // "slot_tcp_server_readyRead"
QT_MOC_LITERAL(35, 523, 29), // "slot_cascade_device_connected"
QT_MOC_LITERAL(36, 553, 32), // "slot_cascade_device_data_receive"
QT_MOC_LITERAL(37, 586, 10), // "slot_TALLY"
QT_MOC_LITERAL(38, 597, 5), // "input"
QT_MOC_LITERAL(39, 603, 5), // "state"
QT_MOC_LITERAL(40, 609, 22), // "slot_draw_time_counter"
QT_MOC_LITERAL(41, 632, 16) // "time_counter_str"

    },
    "Layout\0signal_solo\0\0solo_mode_t\0"
    "solo_mode\0signal_preset\0preset_number\0"
    "signal_common_alarm_changed\0common_alarm\0"
    "signal_cascade_device_connected\0index\0"
    "signal_cascade_device_data_receive\0"
    "data\0signal_cascade_server_readyRead\0"
    "arr\0slot_new_format\0slot_qpps\0"
    "slot_update_alarm\0slot_update_op47\0"
    "slot_gpio_solo\0input_number\0"
    "slot_gpio_preset\0slot_cascade_gpio_set_solo\0"
    "slot_solo_mode_desebled\0slot_op47_data\0"
    "channel\0slot_splice\0text_in\0text_out\0"
    "slot_master_connected\0QTcpSocket*\0"
    "pSocket\0ip\0slot_Disconnected\0"
    "slot_tcp_server_readyRead\0"
    "slot_cascade_device_connected\0"
    "slot_cascade_device_data_receive\0"
    "slot_TALLY\0input\0state\0slot_draw_time_counter\0"
    "time_counter_str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Layout[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,
       5,    1,  132,    2, 0x06 /* Public */,
       7,    1,  135,    2, 0x06 /* Public */,
       9,    1,  138,    2, 0x06 /* Public */,
      11,    2,  141,    2, 0x06 /* Public */,
      13,    1,  146,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  149,    2, 0x0a /* Public */,
      16,    0,  150,    2, 0x0a /* Public */,
      17,    0,  151,    2, 0x0a /* Public */,
      18,    0,  152,    2, 0x0a /* Public */,
      19,    1,  153,    2, 0x0a /* Public */,
      21,    1,  156,    2, 0x0a /* Public */,
      22,    1,  159,    2, 0x0a /* Public */,
      23,    0,  162,    2, 0x0a /* Public */,
      24,    2,  163,    2, 0x0a /* Public */,
      26,    3,  168,    2, 0x0a /* Public */,
      29,    2,  175,    2, 0x0a /* Public */,
      33,    1,  180,    2, 0x0a /* Public */,
      34,    2,  183,    2, 0x0a /* Public */,
      35,    1,  188,    2, 0x0a /* Public */,
      36,    2,  191,    2, 0x0a /* Public */,
      37,    2,  196,    2, 0x0a /* Public */,
      40,    1,  201,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,   10,   12,
    QMetaType::Void, QMetaType::QByteArray,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,   25,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   10,   27,   28,
    QMetaType::Void, 0x80000000 | 30, QMetaType::QString,   31,   32,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 30, QMetaType::QByteArray,   31,   12,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,   10,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   38,   39,
    QMetaType::Void, QMetaType::QString,   41,

       0        // eod
};

void Layout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Layout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_solo((*reinterpret_cast< solo_mode_t(*)>(_a[1]))); break;
        case 1: _t->signal_preset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->signal_common_alarm_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->signal_cascade_device_connected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->signal_cascade_device_data_receive((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 5: _t->signal_cascade_server_readyRead((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->slot_new_format(); break;
        case 7: _t->slot_qpps(); break;
        case 8: _t->slot_update_alarm(); break;
        case 9: _t->slot_update_op47(); break;
        case 10: _t->slot_gpio_solo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->slot_gpio_preset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->slot_cascade_gpio_set_solo((*reinterpret_cast< solo_mode_t(*)>(_a[1]))); break;
        case 13: _t->slot_solo_mode_desebled(); break;
        case 14: _t->slot_op47_data((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 15: _t->slot_splice((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 16: _t->slot_master_connected((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 17: _t->slot_Disconnected((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 18: _t->slot_tcp_server_readyRead((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 19: _t->slot_cascade_device_connected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->slot_cascade_device_data_receive((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 21: _t->slot_TALLY((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->slot_draw_time_counter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Layout::*)(solo_mode_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Layout::signal_solo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Layout::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Layout::signal_preset)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Layout::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Layout::signal_common_alarm_changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Layout::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Layout::signal_cascade_device_connected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Layout::*)(int , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Layout::signal_cascade_device_data_receive)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Layout::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Layout::signal_cascade_server_readyRead)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Layout::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Layout.data,
    qt_meta_data_Layout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Layout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Layout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Layout.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Layout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void Layout::signal_solo(solo_mode_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Layout::signal_preset(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Layout::signal_common_alarm_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Layout::signal_cascade_device_connected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Layout::signal_cascade_device_data_receive(int _t1, QByteArray _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Layout::signal_cascade_server_readyRead(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
