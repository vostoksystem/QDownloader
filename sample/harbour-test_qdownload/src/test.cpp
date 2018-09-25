#include "test.h"
#include <QFile>
#include <QDebug>
#include "qdownloader/qdownloaderservice.h"

/**
 * @brief Test::Test
 * @param parent
 */
Test::Test(QObject *parent) : QObject(parent) {

    connect(&QDownloaderService::getInstance(), SIGNAL(success(QUrl,QString)),
            this, SLOT(success(QUrl,QString)));
    connect(&QDownloaderService::getInstance(), SIGNAL(error(QUrl,QNetworkReply::NetworkError)),
            this, SLOT(error(QUrl,QNetworkReply::NetworkError)));
}

/**
 * @brief Test::startCppTest
 */
void Test::startCppTest() {
    QFile gogologo("/tmp/gogologo.jpg");

    // if file is present, test will (silent) fail
    gogologo.remove();

    // this code should success, a new file will be available on /tmp
    QDOWNSERVICE.start(
                "https://www.google.fr/images/branding/googlelogo/1x/googlelogo_color_272x92dp.png",
                gogologo.fileName());

    // this code will fail
    QDOWNSERVICE.start(
                "https://www.thisgoestonowhere.xxx/blabla",
                "/tmp/blabla.jpg");


// there an SslHandshakeFailedError from let's encryt certificate to be solved
//        QDOWNSERVICE.start(
//                    "https://www.vostoksystem.eu/sites/default/files/gva-sliderlayer-upload/IMG_8205-1920x720e-inl3jr.jpg",
//                    "/tmp/aaa.jpg");

}

/**
 * @brief success
 * @param url
 * @param target
 */
void Test::success(QUrl const & url,QString const &target ) {
    qDebug() << "QDownloader : from cpp, success : " << url;
}

/**
 * @brief error
 * @param url
 * @param status
 */
void Test::error(QUrl const & url, QNetworkReply::NetworkError status ) {
    qDebug() << "QDownloadee : from cpp, ERROR : " << url;
}
