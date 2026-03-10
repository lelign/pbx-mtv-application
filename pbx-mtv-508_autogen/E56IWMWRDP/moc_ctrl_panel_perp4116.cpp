/****************************************************************************
** Meta object code from reading C++ file 'ctrl_panel_perp4116.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ctrl_panel_PERP4116/ctrl_panel_perp4116.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctrl_panel_perp4116.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Ctrl_panel_PERP4116_t {
    QByteArrayData data[15];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ctrl_panel_PERP4116_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ctrl_panel_PERP4116_t qt_meta_stringdata_Ctrl_panel_PERP4116 = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Ctrl_panel_PERP4116"
QT_MOC_LITERAL(1, 20, 18), // "signal_btn_pressed"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 4), // "port"
QT_MOC_LITERAL(4, 45, 6), // "BtnNum"
QT_MOC_LITERAL(5, 52, 19), // "signal_btn_released"
QT_MOC_LITERAL(6, 72, 16), // "slot_parse_frame"
QT_MOC_LITERAL(7, 89, 4), // "type"
QT_MOC_LITERAL(8, 94, 5), // "state"
QT_MOC_LITERAL(9, 100, 15), // "slot_new_client"
QT_MOC_LITERAL(10, 116, 11), // "QTcpSocket*"
QT_MOC_LITERAL(11, 128, 7), // "pSocket"
QT_MOC_LITERAL(12, 136, 14), // "slot_readyRead"
QT_MOC_LITERAL(13, 151, 4), // "data"
QT_MOC_LITERAL(14, 156, 18) // "slot_pDisconnected"

    },
    "Ctrl_panel_PERP4116\0signal_btn_pressed\0"
    "\0port\0BtnNum\0signal_btn_released\0"
    "slot_parse_frame\0type\0state\0slot_new_client\0"
    "QTcpSocket*\0pSocket\0slot_readyRead\0"
    "data\0slot_pDisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ctrl_panel_PERP4116[] = {

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
       5,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,   54,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,
      12,    2,   64,    2, 0x08 /* Private */,
      14,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    4,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QByteArray,   11,   13,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void Ctrl_panel_PERP4116::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Ctrl_panel_PERP4116 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_btn_pressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->signal_btn_released((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->slot_parse_frame((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->slot_new_client((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 4: _t->slot_readyRead((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 5: _t->slot_pDisconnected((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 5:
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
            using _t = void (Ctrl_panel_PERP4116::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ctrl_panel_PERP4116::signal_btn_pressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Ctrl_panel_PERP4116::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ctrl_panel_PERP4116::signal_btn_released)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Ctrl_panel_PERP4116::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Ctrl_panel_PERP4116.data,
    qt_meta_data_Ctrl_panel_PERP4116,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Ctrl_panel_PERP4116::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ctrl_panel_PERP4116::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ctrl_panel_PERP4116.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Ctrl_panel_PERP4116::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Ctrl_panel_PERP4116::signal_btn_pressed(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Ctrl_panel_PERP4116::signal_btn_released(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
