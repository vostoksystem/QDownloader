#include "dummyfs.h"
#include <QFile>

/**
 * @brief dummyFs::dummyFs
 * @param parent
 */
dummyFs::dummyFs(QObject *parent) : QObject(parent) {

}

/**
 * @brief dummyFs::getInstance
 * @return
 */
dummyFs& dummyFs::getInstance() {
    static dummyFs instance;
    return instance;
}

/**
 * @brief dummyFs::init
 * @param context
 * @param name
 */
void dummyFs::init(QQmlContext *context, const QString name) {
    context->setContextProperty(name, &dummyFs::getInstance());
}

/**
  * @brief dummyFs::remove
  * @param uri
  */
void dummyFs::remove(QString const &uri) {

    QFile f(uri);
    f.remove();
}
