#include "startwindow.h"
#include "mainwindow.h"
#include "ui_startwindow.h"

StartWindow::StartWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartWindow)
{
    ui->setupUi(this);
}

StartWindow::~StartWindow()
{
    delete ui;
}

void StartWindow::on_pushButton_clicked()
{
    //nová postava
    mainwindow = new MainWindow();
    mainwindow->show();
    mainwindow->listen(1);
   // emit StartCall(1);
   //this->close();
}


void StartWindow::on_pushButton_2_clicked()
{
    //načíst postavu
    mainwindow = new MainWindow();
    mainwindow->show();
    mainwindow->listen(2);
//this->close();
}

