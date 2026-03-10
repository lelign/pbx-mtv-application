/****************************************************************************
** Meta object code from reading C++ file 'websocketserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../web_socket_server/websocketserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'websocketserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WebSocketServer_t {
    QByteArrayData data[16];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebSocketServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebSocketServer_t qt_meta_stringdata_WebSocketServer = {
    {
QT_MOC_LITERAL(0, 0, 15), // "WebSocketServer"
QT_MOC_LITERAL(1, 16, 6), // "closed"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 21), // "signal_web_new_client"
QT_MOC_LITERAL(4, 46, 11), // "QWebSocket*"
QT_MOC_LITERAL(5, 58, 7), // "pSocket"
QT_MOC_LITERAL(6, 66, 18), // "signal_web_message"
QT_MOC_LITERAL(7, 85, 3), // "val"
QT_MOC_LITERAL(8, 89, 15), // "onNewConnection"
QT_MOC_LITERAL(9, 105, 13), // "parse_message"
QT_MOC_LITERAL(10, 119, 7), // "pClient"
QT_MOC_LITERAL(11, 127, 4), // "data"
QT_MOC_LITERAL(12, 132, 18), // "processTextMessage"
QT_MOC_LITERAL(13, 151, 7), // "message"
QT_MOC_LITERAL(14, 159, 18), // "socketDisconnected"
QT_MOC_LITERAL(15, 178, 9) // "get_alive"

    },
    "WebSocketServer\0closed\0\0signal_web_new_client\0"
    "QWebSocket*\0pSocket\0signal_web_message\0"
    "val\0onNewConnection\0parse_message\0"
    "pClient\0data\0processTextMessage\0message\0"
    "socketDisconnected\0get_alive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebSocketServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       6,    2,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   63,    2, 0x08 /* Private */,
       9,    2,   64,    2, 0x08 /* Private */,
      12,    1,   69,    2, 0x08 /* Private */,
      14,    0,   72,    2, 0x08 /* Private */,
      15,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QJsonObject,    5,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::QByteArray,

       0        // eod
};

void WebSocketServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WebSocketServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->signal_web_new_client((*reinterpret_cast< QWebSocket*(*)>(_a[1]))); break;
        case 2: _t->signal_web_message((*reinterpret_cast< QWebSocket*(*)>(_a[1])),(*reinterpret_cast< QJsonObject(*)>(_a[2]))); break;
        case 3: _t->onNewConnection(); break;
        case 4: _t->parse_message((*reinterpret_cast< QWebSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->processTextMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->socketDisconnected(); break;
        case 7: { QByteArray _r = _t->get_alive();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WebSocketServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebSocketServer::closed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WebSocketServer::*)(QWebSocket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebSocketServer::signal_web_new_client)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WebSocketServer::*)(QWebSocket * , QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebSocketServer::signal_web_message)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WebSocketServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WebSocketServer.data,
    qt_meta_data_WebSocketServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WebSocketServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebSocketServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WebSocketServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WebSocketServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WebSocketServer::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WebSocketServer::signal_web_new_client(QWebSocket * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WebSocketServer::signal_web_message(QWebSocket * _t1, QJsonObject _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
