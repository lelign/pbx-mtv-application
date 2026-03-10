/****************************************************************************
** Meta object code from reading C++ file 'pbx-mtv-508.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../pbx-mtv-508.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pbx-mtv-508.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PbxMtv508_t {
    QByteArrayData data[23];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PbxMtv508_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PbxMtv508_t qt_meta_stringdata_PbxMtv508 = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PbxMtv508"
QT_MOC_LITERAL(1, 10, 30), // "slot_reset_to_factory_settings"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 21), // "slot_over_temperature"
QT_MOC_LITERAL(4, 64, 3), // "str"
QT_MOC_LITERAL(5, 68, 14), // "slot_fan_state"
QT_MOC_LITERAL(6, 83, 9), // "fan_state"
QT_MOC_LITERAL(7, 93, 18), // "slot_scte_104_data"
QT_MOC_LITERAL(8, 112, 7), // "channel"
QT_MOC_LITERAL(9, 120, 4), // "data"
QT_MOC_LITERAL(10, 125, 14), // "slot_op47_data"
QT_MOC_LITERAL(11, 140, 14), // "slot_op42_data"
QT_MOC_LITERAL(12, 155, 24), // "slot_too_many_open_files"
QT_MOC_LITERAL(13, 180, 16), // "slot_scte_104_in"
QT_MOC_LITERAL(14, 197, 17), // "slot_scte_104_out"
QT_MOC_LITERAL(15, 215, 20), // "indexed_string_event"
QT_MOC_LITERAL(16, 236, 7), // "uint8_t"
QT_MOC_LITERAL(17, 244, 3), // "idx"
QT_MOC_LITERAL(18, 248, 8), // "uint16_t"
QT_MOC_LITERAL(19, 257, 3), // "val"
QT_MOC_LITERAL(20, 261, 20), // "slot_web_reconfigure"
QT_MOC_LITERAL(21, 282, 13), // "slot_txt_page"
QT_MOC_LITERAL(22, 296, 4) // "page"

    },
    "PbxMtv508\0slot_reset_to_factory_settings\0"
    "\0slot_over_temperature\0str\0slot_fan_state\0"
    "fan_state\0slot_scte_104_data\0channel\0"
    "data\0slot_op47_data\0slot_op42_data\0"
    "slot_too_many_open_files\0slot_scte_104_in\0"
    "slot_scte_104_out\0indexed_string_event\0"
    "uint8_t\0idx\0uint16_t\0val\0slot_web_reconfigure\0"
    "slot_txt_page\0page"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PbxMtv508[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    1,   75,    2, 0x0a /* Public */,
       5,    1,   78,    2, 0x0a /* Public */,
       7,    2,   81,    2, 0x0a /* Public */,
      10,    2,   86,    2, 0x0a /* Public */,
      11,    2,   91,    2, 0x0a /* Public */,
      12,    1,   96,    2, 0x0a /* Public */,
      13,    1,   99,    2, 0x0a /* Public */,
      14,    1,  102,    2, 0x0a /* Public */,
      15,    2,  105,    2, 0x0a /* Public */,
      20,    0,  110,    2, 0x0a /* Public */,
      21,    1,  111,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,    8,    9,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 18,   17,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,

       0        // eod
};

void PbxMtv508::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PbxMtv508 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_reset_to_factory_settings(); break;
        case 1: _t->slot_over_temperature((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->slot_fan_state((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slot_scte_104_data((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 4: _t->slot_op47_data((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 5: _t->slot_op42_data((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 6: _t->slot_too_many_open_files((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->slot_scte_104_in((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slot_scte_104_out((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->indexed_string_event((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 10: _t->slot_web_reconfigure(); break;
        case 11: _t->slot_txt_page((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PbxMtv508::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PbxMtv508.data,
    qt_meta_data_PbxMtv508,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PbxMtv508::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PbxMtv508::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PbxMtv508.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PbxMtv508::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
