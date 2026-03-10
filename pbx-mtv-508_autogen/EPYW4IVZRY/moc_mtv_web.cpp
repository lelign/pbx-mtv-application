/****************************************************************************
** Meta object code from reading C++ file 'mtv_web.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mtv-web/mtv_web.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtv_web.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Mtv_web_t {
    QByteArrayData data[30];
    char stringdata0[410];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mtv_web_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mtv_web_t qt_meta_stringdata_Mtv_web = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Mtv_web"
QT_MOC_LITERAL(1, 8, 18), // "signal_reconfigure"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 19), // "slot_web_new_client"
QT_MOC_LITERAL(4, 48, 11), // "QWebSocket*"
QT_MOC_LITERAL(5, 60, 7), // "pClient"
QT_MOC_LITERAL(6, 68, 16), // "slot_web_message"
QT_MOC_LITERAL(7, 85, 3), // "obj"
QT_MOC_LITERAL(8, 89, 15), // "slot_new_format"
QT_MOC_LITERAL(9, 105, 19), // "slot_hardware_state"
QT_MOC_LITERAL(10, 125, 11), // "str_power_W"
QT_MOC_LITERAL(11, 137, 17), // "str_temperature_C"
QT_MOC_LITERAL(12, 155, 14), // "slot_fan_state"
QT_MOC_LITERAL(13, 170, 7), // "fanIsOk"
QT_MOC_LITERAL(14, 178, 21), // "slot_set_cascade_data"
QT_MOC_LITERAL(15, 200, 5), // "index"
QT_MOC_LITERAL(16, 206, 29), // "slot_cascade_server_readyRead"
QT_MOC_LITERAL(17, 236, 3), // "arr"
QT_MOC_LITERAL(18, 240, 30), // "slot_cascade_update_sdi_format"
QT_MOC_LITERAL(19, 271, 31), // "slot_cascade_slave_data_receive"
QT_MOC_LITERAL(20, 303, 13), // "cascade_index"
QT_MOC_LITERAL(21, 317, 4), // "data"
QT_MOC_LITERAL(22, 322, 16), // "slot_tls_message"
QT_MOC_LITERAL(23, 339, 4), // "addr"
QT_MOC_LITERAL(24, 344, 3), // "tls"
QT_MOC_LITERAL(25, 348, 3), // "txt"
QT_MOC_LITERAL(26, 352, 24), // "slot_TLS_TimeCounterCtrl"
QT_MOC_LITERAL(27, 377, 5), // "tally"
QT_MOC_LITERAL(28, 383, 14), // "slot_setPreset"
QT_MOC_LITERAL(29, 398, 11) // "presetIndex"

    },
    "Mtv_web\0signal_reconfigure\0\0"
    "slot_web_new_client\0QWebSocket*\0pClient\0"
    "slot_web_message\0obj\0slot_new_format\0"
    "slot_hardware_state\0str_power_W\0"
    "str_temperature_C\0slot_fan_state\0"
    "fanIsOk\0slot_set_cascade_data\0index\0"
    "slot_cascade_server_readyRead\0arr\0"
    "slot_cascade_update_sdi_format\0"
    "slot_cascade_slave_data_receive\0"
    "cascade_index\0data\0slot_tls_message\0"
    "addr\0tls\0txt\0slot_TLS_TimeCounterCtrl\0"
    "tally\0slot_setPreset\0presetIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mtv_web[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   80,    2, 0x0a /* Public */,
       6,    2,   83,    2, 0x0a /* Public */,
       8,    0,   88,    2, 0x0a /* Public */,
       9,    2,   89,    2, 0x0a /* Public */,
      12,    1,   94,    2, 0x0a /* Public */,
      14,    1,   97,    2, 0x0a /* Public */,
      16,    1,  100,    2, 0x0a /* Public */,
      18,    0,  103,    2, 0x0a /* Public */,
      19,    2,  104,    2, 0x0a /* Public */,
      22,    3,  109,    2, 0x0a /* Public */,
      26,    3,  116,    2, 0x0a /* Public */,
      28,    1,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QJsonObject,    5,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::QByteArray,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,   20,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   23,   24,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   23,   27,   25,
    QMetaType::Void, QMetaType::Int,   29,

       0        // eod
};

void Mtv_web::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Mtv_web *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_reconfigure(); break;
        case 1: _t->slot_web_new_client((*reinterpret_cast< QWebSocket*(*)>(_a[1]))); break;
        case 2: _t->slot_web_message((*reinterpret_cast< QWebSocket*(*)>(_a[1])),(*reinterpret_cast< QJsonObject(*)>(_a[2]))); break;
        case 3: _t->slot_new_format(); break;
        case 4: _t->slot_hardware_state((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->slot_fan_state((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slot_set_cascade_data((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slot_cascade_server_readyRead((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 8: _t->slot_cascade_update_sdi_format(); break;
        case 9: _t->slot_cascade_slave_data_receive((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 10: _t->slot_tls_message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 11: _t->slot_TLS_TimeCounterCtrl((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 12: _t->slot_setPreset((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Mtv_web::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mtv_web::signal_reconfigure)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Mtv_web::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Mtv_web.data,
    qt_meta_data_Mtv_web,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mtv_web::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mtv_web::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mtv_web.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mtv_web::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Mtv_web::signal_reconfigure()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
