#include "secdialog.h"
#include "ui_secdialog.h"

SecDialog::SecDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_pushButton_2_clicked()
{
    bmcc = new bmccinfo();
    bmcc -> show();
}


void SecDialog::on_pushButton_3_clicked()
{
    pub = new publicinfo();
    pub -> show();
}


void SecDialog::on_pushButton_clicked()
{
    game = new gamehome();
    game -> show();
}

