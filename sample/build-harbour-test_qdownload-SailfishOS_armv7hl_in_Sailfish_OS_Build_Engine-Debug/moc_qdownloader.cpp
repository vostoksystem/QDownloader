/****************************************************************************
** Meta object code from reading C++ file 'qdownloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../harbour-test_qdownload/src/qdownloader/qdownloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdownloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDownloader_t {
    QByteArrayData data[19];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDownloader_t qt_meta_stringdata_QDownloader = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QDownloader"
QT_MOC_LITERAL(1, 12, 11), // "downloading"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "url"
QT_MOC_LITERAL(4, 29, 4), // "read"
QT_MOC_LITERAL(5, 34, 5), // "total"
QT_MOC_LITERAL(6, 40, 7), // "success"
QT_MOC_LITERAL(7, 48, 6), // "target"
QT_MOC_LITERAL(8, 55, 5), // "error"
QT_MOC_LITERAL(9, 61, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(10, 89, 6), // "status"
QT_MOC_LITERAL(11, 96, 18), // "onDownloadProgress"
QT_MOC_LITERAL(12, 115, 9), // "bytesRead"
QT_MOC_LITERAL(13, 125, 10), // "bytesTotal"
QT_MOC_LITERAL(14, 136, 10), // "onFinished"
QT_MOC_LITERAL(15, 147, 14), // "QNetworkReply*"
QT_MOC_LITERAL(16, 162, 5), // "reply"
QT_MOC_LITERAL(17, 168, 11), // "onReadyRead"
QT_MOC_LITERAL(18, 180, 15) // "onReplyFinished"

    },
    "QDownloader\0downloading\0\0url\0read\0"
    "total\0success\0target\0error\0"
    "QNetworkReply::NetworkError\0status\0"
    "onDownloadProgress\0bytesRead\0bytesTotal\0"
    "onFinished\0QNetworkReply*\0reply\0"
    "onReadyRead\0onReplyFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDownloader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x06 /* Public */,
       6,    2,   56,    2, 0x06 /* Public */,
       8,    2,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    2,   66,    2, 0x08 /* Private */,
      14,    1,   71,    2, 0x08 /* Private */,
      17,    0,   74,    2, 0x08 /* Private */,
      18,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::LongLong, QMetaType::LongLong,    3,    4,    5,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,    3,    7,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 9,    3,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDownloader *_t = static_cast<QDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloading((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 1: _t->success((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->error((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2]))); break;
        case 3: _t->onDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->onFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->onReadyRead(); break;
        case 6: _t->onReplyFinished(); break;
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
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDownloader::*_t)(QUrl const & , qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDownloader::downloading)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDownloader::*_t)(QUrl const & , QString const & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDownloader::success)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDownloader::*_t)(QUrl const & , QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDownloader::error)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QDownloader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDownloader.data,
      qt_meta_data_QDownloader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDownloader.stringdata0))
        return static_cast<void*>(const_cast< QDownloader*>(this));
    return QObject::qt_metacast(_clname);
}

int QDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QDownloader::downloading(QUrl const & _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDownloader::success(QUrl const & _t1, QString const & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDownloader::error(QUrl const & _t1, QNetworkReply::NetworkError _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
