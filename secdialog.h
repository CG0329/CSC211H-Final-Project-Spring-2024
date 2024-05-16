#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>
#include "bmccinfo.h"
#include "publicinfo.h"
#include "gamehome.h"

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::SecDialog *ui;
    bmccinfo *bmcc;
    publicinfo *pub;
    gamehome *game;
};

#endif // SECDIALOG_H
