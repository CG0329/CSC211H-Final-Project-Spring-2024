#include "gamehome.h"
#include "ui_gamehome.h"
#include "mentalhealthissue.h"
#include "stress.h"
#include "depression.h"
#include "anxiety.h"


gamehome::gamehome(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::gamehome)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::WindowTitleHint | Qt::CustomizeWindowHint);

    Anxiety a;
    Depression d;
    Stress s;
    MentalHealthIssue *issueA = &a;
    MentalHealthIssue *issueD = &d;
    MentalHealthIssue *issueS = &s;

    QString aDesc = issueA->returnDesc();
    QString dDesc = issueD->returnDesc();
    QString sDesc = issueS->returnDesc();
    QString aTreat = issueA->treatment();
    QString dTreat = issueD->treatment();
    QString sTreat = issueS->treatment();

    ui -> label_aDesc->setText(aDesc);
    ui -> label_dDesc->setText(dDesc);
    ui -> label_sDesc->setText(sDesc);
    ui -> label_aTreat->setText(aTreat);
    ui -> label_dTreat->setText(dTreat);
    ui -> label_sTreat->setText(sTreat);
}

gamehome::~gamehome()
{
    delete ui;
}

void gamehome::on_pushButton_2_clicked()
{
    this -> hide();
}

void gamehome::on_pushButton_clicked()
{
    int score = 0;
    Anxiety a;
    Depression d;
    Stress s;
    MentalHealthIssue *issueA = &a;
    MentalHealthIssue *issueD = &d;
    MentalHealthIssue *issueS = &s;

    QString lineADesc = ui->lineEdit_aDesc->text();
    QString lineDDesc = ui->lineEdit_dDesc->text();
    QString lineSDesc = ui->lineEdit_sDesc->text();
    QString lineATreat = ui->lineEdit_aTreat->text();
    QString lineDTreat = ui->lineEdit_dTreat->text();
    QString lineSTreat = ui->lineEdit_sTreat->text();

    if (lineADesc == issueA->returnName()) {
        score++;
    }
    if (lineDDesc == issueD->returnName()) {
        score++;
    }
    if (lineSDesc == issueS->returnName()) {
        score++;
    }
    if (lineATreat == issueA->returnName()) {
        score++;
    }
    if (lineDTreat == issueD->returnName()) {
        score++;
    }
    if (lineSTreat == issueS->returnName()) {
        score++;
    }

    QString qScore = QString::number(score);
    ui -> label_int->setText(qScore);

}

