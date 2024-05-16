#ifndef BMCCINFO_H
#define BMCCINFO_H

#include <QDialog>

namespace Ui {
class bmccinfo;
}

class bmccinfo : public QDialog
{
    Q_OBJECT

public:
    explicit bmccinfo(QWidget *parent = nullptr);
    ~bmccinfo();

private slots:

    void on_pushButton_close_clicked();

private:
    Ui::bmccinfo *ui;
};

#endif // BMCCINFO_H
