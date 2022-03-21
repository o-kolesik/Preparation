#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ncharakter.h"

//QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
//QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_actionnov_postava_triggered();

    void on_pushButton_4_clicked();
    void ZCisla(int c);
    void MCisla(int c);
    void PCisla(int c);
    int kos(int i, int min, int max);
    int kosP(int i, int min, int max);
    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_16_clicked();



    void on_spinBox_7_valueChanged(int arg1);

    void on_spinBox_6_valueChanged(int arg1);

    void on_spinBox_8_valueChanged(int arg1);

    void on_spinBox_5_valueChanged(int arg1);

    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_spinBox_4_valueChanged(int arg1);

    void on_actionna_st_triggered();

    void on_actionulo_it_triggered();

public slots:
    void changeS(int a,int b);
    void changeOb(int a,int b);
    void changeOd(int a,int b);
    void changeI(int a,int b);
    void changeCh(int a,int b);
    void changeZiv(int a);
    void changeMag(int a);
    void changeRP(QString a, QString b);
    void saveToFile();
    void loadFromFile();
    void windoListen();
    void listen(int c);

private:
    Ui::MainWindow *ui;



NCharakter* ncharakter;
//StartWindow* startWindow;
};
#endif // MAINWINDOW_H
