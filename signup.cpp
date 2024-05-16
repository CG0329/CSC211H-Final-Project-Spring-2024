#include "signup.h"
#include "ui_signup.h"
#include <QMessageBox>
#include "account.h"

signup::signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}

void signup::on_pushButton_signup_clicked()
{
    {
        QString username = ui->lineEdit_username->text();
        QString password = ui->lineEdit_password->text();
        QString confirmPass = ui->lineEdit_confirmPassword->text();

        account user(username, password);
        if (password == confirmPass) {
            if (!user.signup()) {
                QMessageBox::information(this, "Sign up", "Successfully created an account.");
                close();
            }
            else {
                QMessageBox::warning(this, "Sign up", "Username already in use.");
            }
        }
        else {
            QMessageBox::warning(this, "Sign up", "Please make sure passwords match.");
        }

    }
}
