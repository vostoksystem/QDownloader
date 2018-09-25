#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QNetworkReply>

class Test : public QObject {
    Q_OBJECT

public:
    explicit Test(QObject *parent = 0);

    void startCppTest();

public slots:

    void success(QUrl const & url,QString const &target );

    void error(QUrl const & url, QNetworkReply::NetworkError status );

};

#endif // TEST_H
