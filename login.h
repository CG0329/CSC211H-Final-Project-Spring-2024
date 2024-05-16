#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "secdialog.h"
#include "signup.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_signup_clicked();

private:
    Ui::Login *ui;
    SecDialog *secdialog;
    signup *sign;
};

#endif // LOGIN_H
