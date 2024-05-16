#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "account.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
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

void MainWindow::on_pushButton_signup_clicked()
{
    sign = new signup(this);
    sign ->show();
}

