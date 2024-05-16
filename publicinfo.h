#ifndef PUBLICINFO_H
#define PUBLICINFO_H

#include <QDialog>

namespace Ui {
class publicinfo;
}

class publicinfo : public QDialog
{
    Q_OBJECT

public:
    explicit publicinfo(QWidget *parent = nullptr);
    ~publicinfo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::publicinfo *ui;
};

#endif // PUBLICINFO_H
