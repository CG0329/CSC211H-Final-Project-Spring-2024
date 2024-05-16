#include "publicinfo.h"
#include "ui_publicinfo.h"

publicinfo::publicinfo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::publicinfo)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::WindowTitleHint | Qt::CustomizeWindowHint);

    ui->label_nyc->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->label_nyc->setOpenExternalLinks(true);
    ui->label_nyc->setTextFormat(Qt::RichText);
    ui->label_nyc->setText("<a href=\"https://www.nyc.gov/site/doh/health/health-topics/mental-health.page\"> nyc.gov </a>");
}

publicinfo::~publicinfo()
{
    delete ui;
}

void publicinfo::on_pushButton_clicked()
{
    this -> hide();
}

