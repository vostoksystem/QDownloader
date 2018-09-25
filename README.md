# qdownloader
Qdownloader is a service that simplify the download of remote resources (http(s)) locally. Build around 2 classes, it can be used in cpp or qml

* simple, just include the pri into your pro file
* made of only 2 simple classes
* register the service from a single method call
* multiple asynchronous donwload
* qml ready, just register the service, start a download with javascript, listen for connection or use one of the property
* take care of all the connection and download process
* notification ready (only sailfish os as v1.0)

Install
==================

1. Copy the src/qdownloader file to your src project directory.
2. Now edit the pro file to include the pri

Have a look at the sample project

Sample .pro file
------------------
Assuming you use the default name and location, for the project harbour-test_qdownload (sailfishos) :

```pro
TARGET = harbour-test_qdownload

CONFIG += sailfishapp

include(src/qdownloader/qdownloader.pri)

SOURCES += src/harbour-test_qdownload.cpp

DISTFILES += qml/harbour-test_qdownload.qml \
    qml/cover/*.qml \
    qml/pages/*.qml \
    qml/composents/*.qml \
    rpm/harbour-test_qdownload.changes \
    rpm/harbour-test_qdownload.spec \
    rpm/harbour-test_qdownload.yaml \
    harbour-test_qdownload.desktop

SAILFISHAPP_ICONS = 86x86 108x108 128x128 256x256
```
Usage
==================
You can use Qdownloader in Qt or qml
 
From Qml
------------------
Register the service passing a reference to the context, and an optionnal service name like this :

```cpp
QScopedPointer<QGuiApplication> app(SailfishApp::application(argc, argv));
QScopedPointer<QQuickView> view(SailfishApp::createView());

// register the locator into qml with the default service name
QDownloaderService::init(view->rootContext());
```

then in qml, using the default service name :
```javascript
function myDownloadFunction() {
	if(qdownloader.start(sourceurl, targeturl, "my notification message") === false ) {
		// error detected before download (file already exist, r/w error etc...)
        // let's do something      
	}
}

Connections {
	target: qdownloader
	onDownloading: {
		// url : url for the remote resource
		// read : bytes read
		// total : total byte for the file
	}

	onSuccess: {
		// url : url for the remote resource
		// target : url for the local file
	}

	onError: {
		// url : url for the remote resource
		// status : error code -> QNetworkReply::NetworkError
	}
}

```

From Qt
------------------
QDownloaderService is a singleton. Access it with :
```cpp
// register slot / signal to get response
connect(&QDownloaderService::getInstance(), SIGNAL(success(QUrl,QString)), this, SLOT(success(QUrl,QString)));
connect(&QDownloaderService::getInstance(), SIGNAL(error(QUrl,QNetworkReply::NetworkError)), this, SLOT(error(QUrl,QNetworkReply::NetworkError)));

// start a download
QDOWNSERVICE.start( sourceurl, targeturl, "my notification message" );
```

Nota
------------------
whereever your start a download, qml or cpp, all connections will receive callback

For additionnal information check the sample program (Full Sailfish app)
