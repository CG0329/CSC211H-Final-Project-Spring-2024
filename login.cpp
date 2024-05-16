#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include "account.h"

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    account user(username, password);

    if (user.login()) {
        QMessageBox::information(this, "Login", "Successfully logged in.");
        hide();
        secdialog = new SecDialog(this);
        secdialog -> show();
    }
    else {
        QMessageBox::warning(this, "Login", "Username or password is incorrect.");
    }
}


void Login::on_pushButton_signup_clicked()
{
    hide();
    sign = new signup(this);
    sign ->show();
}

