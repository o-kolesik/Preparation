#ifndef DICE_H
#define DICE_H

#include <QDialog>
#include <QtWidgets>
#include <QMainWindow>


namespace Ui {
class Dice;
}

class Dice : public QDialog
{
    Q_OBJECT




public:
    explicit Dice(QWidget *parent = nullptr);
    ~Dice();

QString String;




private slots:
    void on_pushButton_clicked();


    void on_pushButton_Delete_clicked();

    void on_pushButton_win_clicked();


    int kos(QString dice,int i, int min, int max);


private:
    Ui::Dice *ui;
};

#endif // DICE_H
