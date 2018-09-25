TARGET = harbour-test_qdownload

CONFIG += sailfishapp

include(src/qdownloader/qdownloader.pri)

HEADERS += \
    src/test.h \
    src/dummyfs.h

SOURCES += src/harbour-test_qdownload.cpp \
    src/test.cpp \
    src/dummyfs.cpp

DISTFILES += qml/harbour-test_qdownload.qml \
    qml/cover/*.qml \
    qml/pages/*.qml \
    rpm/harbour-test_qdownload.changes \
    rpm/harbour-test_qdownload.spec \
    rpm/harbour-test_qdownload.yaml \
    harbour-test_qdownload.desktop

SAILFISHAPP_ICONS = 86x86 108x108 128x128 256x256

