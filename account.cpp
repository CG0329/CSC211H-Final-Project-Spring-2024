#include "account.h"
#include <QFile>
#include <QMessageBox>

using namespace std;

account::account(QString u, QString p) {
    username = u;
    password = p;
}

bool account::login() {
    QFile uFile("C:/Users/CG032/Documents/QT/projecttest/usernames.txt");
    QFile pFile("C:/Users/CG032/Documents/QT/projecttest/passwords.txt");
    QString tempU, tempP;
    bool isAnAccount = false;

    if (!uFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "error", "Cannot open file");
    }
    QTextStream inU(&uFile);

    if (!pFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "error", "Cannot open file");
    }
    QTextStream inP(&pFile);

    for (tempU = inU.readLine(),tempP = inP.readLine();
        !tempU.isNull();
        tempU = inU.readLine(),tempP = inP.readLine())
    {
        if (tempU == username && tempP == password) {
            isAnAccount = true;
            break;
        }
        else {
            isAnAccount = false;
        }
    }
    uFile.close();
    pFile.close();
    return isAnAccount;
}

bool account::signup() {
    bool isThere = false;
    QFile uFile("C:/Users/CG032/Documents/QT/projecttest/usernames.txt");
    QFile pFile("C:/Users/CG032/Documents/QT/projecttest/passwords.txt");
    QString tempU, tempP;

    if (!uFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "error", "Cannot open file");
    }
    QTextStream inU(&uFile);

    if (!pFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(nullptr, "error", "Cannot open file");
    }
    QTextStream inP(&pFile);

    for (tempU = inU.readLine(),tempP = inP.readLine();
         !tempU.isNull();
         tempU = inU.readLine(),tempP = inP.readLine())
    {
        if (tempU == username) {
            isThere = true;
            break;
        }
    }
    uFile.close();
    pFile.close();

    if (isThere == false) {
        if (!uFile.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)) {
            QMessageBox::warning(nullptr, "error", "Cannot open file");
        }
        QTextStream inU(&uFile);

        if (!pFile.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)) {
            QMessageBox::warning(nullptr, "error", "Cannot open file");
        }
        QTextStream inP(&pFile);
        inU << username << "\n";
        inP << password << "\n";
        uFile.close();
        pFile.close();
    }
    return isThere;
}


















