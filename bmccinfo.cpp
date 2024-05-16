#include "bmccinfo.h"
#include "ui_bmccinfo.h"

bmccinfo::bmccinfo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::bmccinfo)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::WindowTitleHint | Qt::CustomizeWindowHint);

    ui->label_counsel->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->label_counsel->setOpenExternalLinks(true);
    ui->label_counsel->setTextFormat(Qt::RichText);
    ui->label_counsel->setText("<a href=\"https://www.bmcc.cuny.edu/student-affairs/counseling/\"> BMCC Counseling Center </a>");

    ui->label_health->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->label_health->setOpenExternalLinks(true);
    ui->label_health->setTextFormat(Qt::RichText);
    ui->label_health->setText("<a href=\"https://www.bmcc.cuny.edu/resilience-health-and-wellness/\"> BMCC Resilience, Health and Wellness </a>");
}

bmccinfo::~bmccinfo()
{
    delete ui;
}

void bmccinfo::on_pushButton_close_clicked()
{
    this ->hide();
}

