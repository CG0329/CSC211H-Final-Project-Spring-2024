#ifndef GAMEHOME_H
#define GAMEHOME_H

#include <QDialog>

namespace Ui {
class gamehome;
}

class gamehome : public QDialog
{
    Q_OBJECT

public:
    explicit gamehome(QWidget *parent = nullptr);
    ~gamehome();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::gamehome *ui;
};

#endif // GAMEHOME_H
