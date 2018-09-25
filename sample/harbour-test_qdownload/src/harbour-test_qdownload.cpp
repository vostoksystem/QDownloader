#ifdef QT_QML_DEBUG
#include <QtQuick>
#endif

#include <sailfishapp.h>
#include <QCoreApplication>
#include <QDebug>
#include "qdownloader/qdownloaderservice.h"
#include "test.h"
#include "dummyfs.h"

int main(int argc, char *argv[]) {
#ifdef LIBSAILFISHAPP_SAILFISHAPP_H
    qDebug() << "--> on sailfish";
#else
    qDebug() << "--> no sailor";
#endif

    QScopedPointer<QGuiApplication> app(SailfishApp::application(argc, argv));
    QScopedPointer<QQuickView> view(SailfishApp::createView());

    // start and register the service
    QDownloaderService::init(view->rootContext());

    // the dummy service for the test only
    dummyFs::init(view->rootContext());

    // cpp test
    Test test;
    test.startCppTest();

    // this create the qml view
    view->setSource(SailfishApp::pathTo("qml/harbour-test_qdownload.qml"));
    view->show();

    return app->exec();

}
