#ifndef GAME_ANXIETY_H
#define GAME_ANXIETY_H

#include <QDialog>

namespace Ui {
class game_anxiety;
}

class game_anxiety : public QDialog
{
    Q_OBJECT

public:
    explicit game_anxiety(QWidget *parent = nullptr);
    ~game_anxiety();

private slots:

    void on_pushButton_name_clicked();

    void on_pushButton_desc_clicked();

    void on_pushButton_treat_clicked();

private:
    Ui::game_anxiety *ui;
};

#endif // GAME_ANXIETY_H
