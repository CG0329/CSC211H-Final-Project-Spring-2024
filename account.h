#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QFile>
#include <QTextStream>
using namespace std;

class account {
private:
    QString username;
    QString password;
public:
    account(QString, QString);
    bool signup();
    bool login();
};
#endif // ACCOUNT_H
