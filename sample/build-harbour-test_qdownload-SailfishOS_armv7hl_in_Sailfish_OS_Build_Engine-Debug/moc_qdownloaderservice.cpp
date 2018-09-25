/****************************************************************************
** Meta object code from reading C++ file 'qdownloaderservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../harbour-test_qdownload/src/qdownloader/qdownloaderservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdownloaderservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDownloaderService_t {
    QByteArrayData data[24];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDownloaderService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDownloaderService_t qt_meta_stringdata_QDownloaderService = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QDownloaderService"
QT_MOC_LITERAL(1, 19, 11), // "downloading"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "url"
QT_MOC_LITERAL(4, 36, 4), // "read"
QT_MOC_LITERAL(5, 41, 5), // "total"
QT_MOC_LITERAL(6, 47, 7), // "success"
QT_MOC_LITERAL(7, 55, 6), // "target"
QT_MOC_LITERAL(8, 62, 5), // "error"
QT_MOC_LITERAL(9, 68, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(10, 96, 6), // "status"
QT_MOC_LITERAL(11, 103, 8), // "finished"
QT_MOC_LITERAL(12, 112, 14), // "pendingChanged"
QT_MOC_LITERAL(13, 127, 28), // "emitSignalOnRootErrorChanged"
QT_MOC_LITERAL(14, 156, 15), // "downloadingImpl"
QT_MOC_LITERAL(15, 172, 11), // "successImpl"
QT_MOC_LITERAL(16, 184, 9), // "errorImpl"
QT_MOC_LITERAL(17, 194, 5), // "start"
QT_MOC_LITERAL(18, 200, 6), // "source"
QT_MOC_LITERAL(19, 207, 7), // "message"
QT_MOC_LITERAL(20, 215, 10), // "getPending"
QT_MOC_LITERAL(21, 226, 9), // "isPending"
QT_MOC_LITERAL(22, 236, 7), // "pending"
QT_MOC_LITERAL(23, 244, 17) // "signalOnRootError"

    },
    "QDownloaderService\0downloading\0\0url\0"
    "read\0total\0success\0target\0error\0"
    "QNetworkReply::NetworkError\0status\0"
    "finished\0pendingChanged\0"
    "emitSignalOnRootErrorChanged\0"
    "downloadingImpl\0successImpl\0errorImpl\0"
    "start\0source\0message\0getPending\0"
    "isPending\0pending\0signalOnRootError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDownloaderService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       2,  132, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   79,    2, 0x06 /* Public */,
       6,    2,   86,    2, 0x06 /* Public */,
       8,    2,   91,    2, 0x06 /* Public */,
      11,    0,   96,    2, 0x06 /* Public */,
      12,    0,   97,    2, 0x06 /* Public */,
      13,    0,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    3,   99,    2, 0x08 /* Private */,
      15,    2,  106,    2, 0x08 /* Private */,
      16,    2,  111,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      17,    3,  116,    2, 0x02 /* Public */,
      17,    2,  123,    2, 0x22 /* Public | MethodCloned */,
      20,    0,  128,    2, 0x02 /* Public */,
      21,    1,  129,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::LongLong, QMetaType::LongLong,    3,    4,    5,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,    3,    7,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 9,    3,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::LongLong, QMetaType::LongLong,    3,    4,    5,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,    3,    7,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 9,    3,   10,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString,   18,    7,   19,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   18,    7,
    QMetaType::UShort,
    QMetaType::Bool, QMetaType::QString,   18,

 // properties: name, type, flags
      22, QMetaType::UShort, 0x00495001,
      23, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       4,
       5,

       0        // eod
};

void QDownloaderService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDownloaderService *_t = static_cast<QDownloaderService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloading((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 1: _t->success((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->error((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2]))); break;
        case 3: _t->finished(); break;
        case 4: _t->pendingChanged(); break;
        case 5: _t->emitSignalOnRootErrorChanged(); break;
        case 6: _t->downloadingImpl((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 7: _t->successImpl((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->errorImpl((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2]))); break;
        case 9: { bool _r = _t->start((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->start((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { quint16 _r = _t->getPending();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isPending((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDownloaderService::*_t)(QUrl const & , qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDownloaderService::downloading)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDownloaderService::*_t)(QUrl const & , QString const & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDownloaderService::success)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDownloaderService::*_t)(QUrl const & , QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDownloaderService::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDownloaderService::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDownloaderService::finished)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QDownloaderService::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDownloaderService::pendingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QDownloaderService::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDownloaderService::emitSignalOnRootErrorChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDownloaderService *_t = static_cast<QDownloaderService *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint16*>(_v) = _t->getPending(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getEmitSignalOnRootError(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDownloaderService *_t = static_cast<QDownloaderService *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setEmitSignalOnRootError(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDownloaderService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDownloaderService.data,
      qt_meta_data_QDownloaderService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDownloaderService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDownloaderService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDownloaderService.stringdata0))
        return static_cast<void*>(const_cast< QDownloaderService*>(this));
    return QObject::qt_metacast(_clname);
}

int QDownloaderService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDownloaderService::downloading(QUrl const & _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDownloaderService::success(QUrl const & _t1, QString const & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDownloaderService::error(QUrl const & _t1, QNetworkReply::NetworkError _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDownloaderService::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QDownloaderService::pendingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QDownloaderService::emitSignalOnRootErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
