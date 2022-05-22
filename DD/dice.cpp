#include "dice.h"
#include "ui_dice.h"
#include <QPushButton>
#include <QComboBox>
QHash<QPushButton*, QHBoxLayout*> mButtonToLayoutMap;
Dice::Dice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dice)
{

    ui->setupUi(this);
    ui->textEdit->setText(QString(String));

}

Dice::~Dice()
{
    delete ui;
}

QString NDice;
int Dice::kos(QString dice, int i, int min, int max)
{

    String+="kostkou "+dice+" bylo hozeno "+QString::number(i)+"\n" + "padlo: ";
    int hodnota=0;
    int hod=0;
    for(int k=1;k<=i;k++){
        hod=(rand() % (max - min+1)+min);
        hodnota+=hod;
        String+=QString::number(hod)+", ";
    }
     String+="\nvysledek: "+QString::number(hodnota)+"\n\n";
    return hodnota;
}


void Dice::on_pushButton_clicked()
{
    //onAddWidget();
}






void Dice::on_pushButton_Delete_clicked()
{

String="";
 ui->textEdit->setText(QString(String));
}


void Dice::on_pushButton_win_clicked()
{
    int kk4=0,kk6=0,kk8=0,kk10=0,kk100=0,kk12=0,kk20=0;
    int hodmota=0;
    //k4
    int k4 = ui->spinBox_d4->value();
    if(k4>0){
            kk4=kos("d4",k4,1,4);
        ui->textEdit->setText(QString(String));
        ui->spinBox_d4->setValue(0);
    }else{
    }

    //k6
    int k6 = ui->spinBox_d6->value();
    if(k6>0){
        kk6=kos("d6",k6,1,6);
        ui->textEdit->setText(QString(String));
        ui->spinBox_d6->setValue(0);
    }else{
    }

    //k8
    int k8 = ui->spinBox_d8->value();
    if(k8>0){
        kk8=kos("d8",k8,1,8);
        ui->textEdit->setText(QString(String));
        ui->spinBox_d8->setValue(0);
    }else{
    }

    //k10
    int k10 = ui->spinBox_d10->value();
    if(k10>0){
        kk10=kos("d10",k10,1,10);
        ui->textEdit->setText(QString(String));
        ui->spinBox_d10->setValue(0);
    }else{
    }

    //k100
    int k100 = ui->spinBox_d100->value();
    if(k100>0){
        kk100=kos("d100",k100,1,100);
        ui->textEdit->setText(QString(String));
        ui->spinBox_d100->setValue(0);
    }else{
    }

    //k12
    int k12 = ui->spinBox_d12->value();
    if(k12>0){
        kk12=kos("d12",k12,1,12);
        ui->textEdit->setText(QString(String));
        ui->spinBox_d12->setValue(0);
    }else{
    }


    //k20
    int k20 = ui->spinBox_d20->value();
    if(k20>0){
        kk20=kos("d20",k20,1,20);
        ui->textEdit->setText(QString(String));
        ui->spinBox_d20->setValue(0);
    }else{
    }

    int pm = ui->spinBox_pm->value();
    if(pm!=0){
        String+="modifikátor = "+QString::number(pm);
        ui->textEdit->setText(QString(String));
        ui->spinBox_pm->setValue(0);
    }else{
    }

     hodmota = kk4+kk6+kk8+kk10+kk100+kk12+kk20+pm;
     if (hodmota!=0) {
     String+= "\n celkem padlo: " + QString::number(hodmota);
     String+= "\n------------------------------------------------\n";
      ui->textEdit->setText(QString(String));
     }

}



