#ifndef DUMMYFS_H
#define DUMMYFS_H

/**
  * the only purpose of this service is to provide a dummy fs interface for the sample
  * e.i. delete de downloaded file
  *
  **/

#include <QObject>
#include <QQmlContext>

#define QDUMMYFS_QML_NAME "qdummyfs"

class dummyFs : public QObject {
    Q_OBJECT

public:

    static  dummyFs& getInstance();
    static void init(QQmlContext *context, const QString name = QDUMMYFS_QML_NAME);

    Q_INVOKABLE void remove(QString const &uri);

private :
    explicit dummyFs(QObject *parent = 0);

signals:

public slots:
};

#endif // DUMMYFS_H
