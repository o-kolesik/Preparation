#include "ncharakter.h"
#include "mainwindow.h"
#include "startwindow.h"
#include "ui_ncharakter.h"
#include <QStringList>
#include <QComboBox>
#include <cstdlib>
#include <QThread>
#include <QtCore>
#include <QCoreApplication>
#include <QProcess>
#include <iostream>
#include "mainwindow.h"
NCharakter::NCharakter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NCharakter)
{
    ui->setupUi(this);

}

NCharakter::~NCharakter()
{
    delete ui;
}



int Smin,Obmin,Odmin,Imin,Chmin;
int Smax,Obmax,Odmax,Imax,Chmax;
int So,Obo,Odo,Io,Cho;
int SF,ObF,OdF,IF,ChF;
int val,pov;
int ziv,mag;
QString R,P,RP;
int Postih(int k){
    int r;
    if(k<=1){return -5;}
    else if((k>=2) && (k<=3)){r= -4;}
    else if((k>=4) && (k<=5)){r= -3;}
    else if((k>=6) && (k<=7)){r= -2;}
    else if((k>=8) && (k<=9)){r= -1;}
    else if((k>=10) && (k<=12)){r= 0;}
    else if((k>=13) && (k<=14)){r= 1;}
    else if((k>=15) && (k<=16)){r= 2;}
    else if((k>=17) && (k<=18)){r= 3;}
    else if((k>=19) && (k<=20)){r= 4;}
    else{r= 5;}
    return r;
}
void NCharakter::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    val = ui->comboBox_2->currentIndex();
    QString R =ui->comboBox_2->currentText();
    if(val==0){
        Smin=3;
        Smax=8;
        So=-5;

        Obmin=11;
        Obmax=16;
        Obo=2;

        Odmin=8;
        Odmax=13;
        Odo=0;

        Imin=10;
        Imax=15;
        Io=-2;

        Chmin=8;
        Chmax=18;
        Cho=3;
    }else if (val==1) {

        Smin=5;
        Smax=10;
        So=-3;

        Obmin=10;
        Obmax=15;
        Obo=+1;

        Odmin=10;
        Odmax=15;
        Odo=+1;

        Imin=9;
        Imax=14;
        Io=-2;

        Chmin=7;
        Chmax=12;
        Cho=0;
    }else if (val==2) {

        Smin=7;
        Smax=12;
        So=1;

        Obmin=7;
        Obmax=12;
        Obo=-2;

        Odmin=12;
        Odmax=17;
        Odo=3;

        Imin=8;
        Imax=13;
        Io=-3;

        Chmin=7;
        Chmax=12;
        Cho=-2;
    }else if (val==3) {

        Smin=6;
        Smax=11;
        So=0;

        Obmin=10;
        Obmax=15;
        Obo=1;

        Odmin=6;
        Odmax=11;
        Odo=-4;

        Imin=12;
        Imax=17;
        Io=2;

        Chmin=8;
        Chmax=18;
        Cho=2;
    }else if (val==4) {

        Smin=6;
        Smax=16;
        So=0;

        Obmin=9;
        Obmax=14;
        Obo=0;

        Odmin=9;
        Odmax=14;
        Odo=0;

        Imin=10;
        Imax=15;
        Io=0;

        Chmin=2;
        Chmax=17;
        Cho=0;
    }else if (val==5) {

        Smin=10;
        Smax=15;
        So=1;

        Obmin=8;
        Obmax=13;
        Obo=-1;

        Odmin=11;
        Odmax=16;
        Odo=1;

        Imin=6;
        Imax=11;
        Io=0;

        Chmin=1;
        Chmax=16;
        Cho=-2;
    }else if (val==6) {

        Smin=11;
        Smax=16;
        So=3;

        Obmin=5;
        Obmax=10;
        Obo=-4;

        Odmin=13;
        Odmax=18;
        Odo=3;

        Imin=2;
        Imax=7;
        Io=-6;

        Chmin=1;
        Chmax=11;
        Cho=-5;
    }

    ui->label_10->setText(QString::number(Smin)+" - "+ QString::number(Smax));
    ui->label_11->setText(QString::number(So));

    ui->label_7->setText(QString::number(Obmin)+" - "+ QString::number(Obmax));
    ui->label_8->setText(QString::number(Obo));

    ui->label_16->setText(QString::number(Odmin)+" - "+ QString::number(Odmax));
    ui->label_17->setText(QString::number(Odo));

    ui->label_13->setText(QString::number(Imin)+" - "+ QString::number(Imax));
    ui->label_14->setText(QString::number(Io));

    ui->label_19->setText(QString::number(Chmin)+" - "+ QString::number(Chmax));
    ui->label_20->setText(QString::number(Cho));

}





void NCharakter::on_comboBox_currentTextChanged(const QString &arg1)
{
    pov = ui->comboBox->currentIndex();
    QString P =ui->comboBox->currentText();
    if(pov==0){

        ui->label_10->setText(QString::number(13)+" - "+ QString::number(18));

        ui->label_7->setText(QString::number(Obmin)+" - "+ QString::number(Obmax));

        ui->label_16->setText(QString::number(13)+" - "+ QString::number(18));

        ui->label_13->setText(QString::number(Imin)+" - "+ QString::number(Imax));

        ui->label_19->setText(QString::number(Chmin)+" - "+ QString::number(Chmax));

    }else if (pov==1) {

        ui->label_10->setText(QString::number(11)+" - "+ QString::number(16));

        ui->label_7->setText(QString::number(Obmin)+" - "+ QString::number(Obmax));

        ui->label_16->setText(QString::number(Odmin)+" - "+ QString::number(Odmax));

        ui->label_13->setText(QString::number(12)+" - "+ QString::number(17));

        ui->label_19->setText(QString::number(Chmin)+" - "+ QString::number(Chmax));

    }else if (pov==2) {

        ui->label_10->setText(QString::number(Smin)+" - "+ QString::number(Smax));

        ui->label_7->setText(QString::number(13)+" - "+ QString::number(16));

        ui->label_16->setText(QString::number(12)+" - "+ QString::number(17));

        ui->label_13->setText(QString::number(Imin)+" - "+ QString::number(Imax));

        ui->label_19->setText(QString::number(Chmin)+" - "+ QString::number(Chmax));


    }else if (pov==3) {

        ui->label_10->setText(QString::number(Smin)+" - "+ QString::number(Smax));

        ui->label_7->setText(QString::number(Obmin)+" - "+ QString::number(Obmax));

        ui->label_16->setText(QString::number(Odmin)+" - "+ QString::number(Odmax));

        ui->label_13->setText(QString::number(14)+" - "+ QString::number(19));

        ui->label_19->setText(QString::number(13)+" - "+ QString::number(18));


    }else if (pov==4) {

        ui->label_10->setText(QString::number(Smin)+" - "+ QString::number(Smax));

        ui->label_7->setText(QString::number(14)+" - "+ QString::number(19));

        ui->label_16->setText(QString::number(Odmin)+" - "+ QString::number(Odmax));

        ui->label_13->setText(QString::number(Imin)+" - "+ QString::number(Imax));

        ui->label_19->setText(QString::number(12)+" - "+ QString::number(17));


    }

}


void NCharakter::on_pushButton_clicked()
{

  //  SF,ObF,OdF,IF,ChF - finální hodnota
   // So,Obo,Odo,Io,Cho - oprava
    SF = (rand() % (Smax - Smin+1)+Smin)+So;
  ObF = (rand() % (Obmax - Obmin+1)+Obmin)+Obo;
    OdF = (rand() % (Odmax - Odmin+1)+Odmin)+Odo;
  IF = (rand() % (Imax - Imin+1)+Imin)+Io;
    ChF = (rand() % (Chmax - Chmin+1)+Chmin)+Cho;

  if(pov==0){
      //válečník
        SF = (rand() % (18 - 13+1)+13)+So;
      OdF = (rand() % (18 - 13+1)+13)+Odo;
        ziv=10+Postih(OdF);
        mag=0;
  }else if(pov==1){
      //hraničář
      SF = (rand() % (16 - 11+1)+13)+So;
      IF = (rand() % (17 - 12+1)+12)+Io;
      ziv=8+Postih(OdF);
      mag=0;
  }else if(pov==2){
      //alchymista
      ObF = (rand() % (18 - 13+1)+13)+Obo;
      OdF = (rand() % (17 - 12+1)+12)+Odo;
      ziv=7+Postih(OdF);
      if(ObF>=8 && ObF<=11){mag=7;}
      else if (ObF>=12 && ObF<=16){mag=8;}
      else if (ObF>=17 && ObF<=20){mag=9;}
  }else if(pov==3){
      //kouzelník
      IF = (rand() % (19 - 14+1)+14)+Io;
      ChF = (rand() % (18 - 13+1)+13)+Cho;
      ziv=6+Postih(OdF);
      if(IF>=8 && IF<=11){mag=7;}
      else if (IF>=12 && IF<=16){mag=8;}
      else if (IF>=17 && IF<=20){mag=9;}
  }else if(pov==4){
      //zloděj
      ObF = (rand() % (19 - 14+1)+14)+Obo;
      ChF = (rand() % (17 - 12+1)+12)+Cho;
      ziv=6+Postih(OdF);
  }

    ui->label_22->setNum(SF);
    ui->label_25->setNum(ObF);
    ui->label_34->setNum(OdF);
    ui->label_31->setNum(IF);
    ui->label_37->setNum(ChF);
    ui->label_39->setNum(ziv);
    ui->label_41->setNum(mag);


}


void NCharakter::on_buttonBox_accepted()
{
//ok tlačítko
 //   MainWindow mainwindow;
  //  mainwindow.show();
    emit SetS(SF,Postih(SF));
    emit SetOb(ObF,Postih(ObF));
    emit SetOd(OdF,Postih(OdF));
    emit SetI(IF,Postih(IF));
    emit SetCh(ChF,Postih(ChF));
    emit SetZiv(ziv);
    emit SetMag(mag);
    emit SetRP(ui->comboBox_2->currentText(),ui->comboBox->currentText());
}

