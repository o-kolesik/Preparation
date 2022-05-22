#include "mainwindow.h"
#include "ncharakter.h"
#include "dice.h"
#include "startwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QCoreApplication>
#include <QObject>
#include <QStringList>
#include <iostream>
#include <cstdlib>
#include <QThread>
#include <QtCore>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);



}
int S,Ob,Od,I,Ch;
int Sb,Obb,Odb,Ib,Chb;
int MZiv,Ziv,MMag,Mag,Pe,Oc;
int UczS1,UczS2,UczS3,UczS4,UczT1,UczT2,UczT3,UczT4;
int MaS1,MaS2,MaS3,MaS4,StS1,StS2,StS3,StS4,VeS1,VeS2,VeS3,VeS4;
int Obc1,Obc2,Obc3,Obc4;
QString Name,RaPo,ZS1,ZS2,ZS3,ZS4,ZT1,ZT2,ZT3,ZT4;
QString kd1,kd2,kd3,kd4;
MainWindow::~MainWindow()
{
    delete ui;
}
int MainWindow::kos(int i, int min, int max){
    int hodnota=0;
    for(int k=1;k<=i;k++){
        hodnota+=(rand() % (max - min+1)+min);
    }
    return hodnota;
}

int MainWindow::kosP(int i, int min, int max){
    int hodnota=0;
    for(int k=1;k<=i;k++){
        hodnota+=(rand() % (max - min+1)+min)*10;
    }
    return hodnota;
}
void MainWindow::ZCisla(int c){
    int hodnota = ui->lineEdit_3->text().toInt();
    hodnota+=c;
    ui->lineEdit_3->setText(QString::number(hodnota));
}
void MainWindow::MCisla(int c){
    int hodnota = ui->lineEdit_6->text().toInt();
    hodnota+=c;
    ui->lineEdit_6->setText(QString::number(hodnota));

}
void MainWindow::PCisla(int c){
    int hodnota = ui->lineEdit_10->text().toInt();
    hodnota+=c;
    ui->lineEdit_10->setText(QString::number(hodnota));
}

void MainWindow::changeS(int a,int b)
{
    S=a;
    Sb=b;
    ui->textEdit_13->setText(QString::number(a));
    ui->textEdit_14->setText(QString::number(b));
}

void MainWindow::changeOb(int a,int b)
{
    Ob=a;
    Obb=a;
    ui->textEdit_15->setText(QString::number(a));
    ui->textEdit_16->setText(QString::number(b));
}

void MainWindow::changeOd(int a,int b)
{    Od=a;
        Odb=b;
    ui->textEdit_17->setText(QString::number(a));
    ui->textEdit_18->setText(QString::number(b));
}

void MainWindow::changeI(int a,int b)
{
    I=a;
    Ib=b;
    ui->textEdit_19->setText(QString::number(a));
    ui->textEdit_20->setText(QString::number(b));
}

void MainWindow::changeCh(int a,int b)
{
    Ch=a;
    Chb=b;
    ui->textEdit_21->setText(QString::number(a));
    ui->textEdit_22->setText(QString::number(b));
}

void MainWindow::changeZiv(int a)
{
    ui->lineEdit->setText(QString::number(a));
ui->lineEdit_2->setText(QString::number(a));
}

void MainWindow::changeMag(int a)
{
    ui->lineEdit_4->setText(QString::number(a));
ui->lineEdit_5->setText(QString::number(a));
}

void MainWindow::changeRP(QString R,QString P)
{
    ui->lineEdit_8->setText(R+", "+P);

}

void MainWindow::listen(int c)
{
    if (c ==1) {
        on_actionnov_postava_triggered();
    }else if (c==2) {
on_actionna_st_triggered();
}
}

void MainWindow::windoListen(){

   // QObject::connect(, SIGNAL(startCall(int)), this, SLOT(listen(int)));
}

void MainWindow::saveToFile()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("Save Address Book"), "",
                                                    tr("Address Book (*.abk);;All Files (*)"));

    if (fileName.isEmpty())
        return;
    else {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly)) {
            QMessageBox::information(this, tr("Unable to open file"),
                                     file.errorString());
            return;
        }

        QDataStream out(&file);
        Name =ui->lineEdit_7->text();
        RaPo =ui->lineEdit_8->text();
        ZS1=ui->lineEdit_11->text();
        ZS2=ui->lineEdit_18->text();
        ZS3=ui->lineEdit_19->text();
        ZS4=ui->lineEdit_20->text();
        ZT1=ui->lineEdit_34->text();
        ZT2=ui->lineEdit_41->text();
        ZT3=ui->lineEdit_37->text();
        ZT4=ui->lineEdit_27->text();

        kd1=ui->lineEdit_35->text();
        kd2=ui->lineEdit_38->text();
        kd3=ui->lineEdit_29->text();
        kd4=ui->lineEdit_30->text();

        MZiv = ui->lineEdit->text().toInt();
        Ziv = ui->lineEdit_2->text().toInt();
        MMag = ui->lineEdit_4->text().toInt();
        Mag = ui->lineEdit_5->text().toInt();
        Pe = ui->lineEdit_9->text().toInt();
        Oc = ui->lineEdit_47->text().toInt();
        UczS1 = ui->spinBox->value();
        UczS2 = ui->spinBox_2->value();
        UczS3 = ui->spinBox_3->value();
        UczS4 = ui->spinBox_4->value();
        UczT1 = ui->spinBox_7->value();
        UczT2 = ui->spinBox_6->value();
        UczT3 = ui->spinBox_8->value();
        UczT4 = ui->spinBox_5->value();

        MaS1=ui->lineEdit_43->text().toInt();
        MaS2=ui->lineEdit_44->text().toInt();
        MaS3=ui->lineEdit_45->text().toInt();
        MaS4=ui->lineEdit_46->text().toInt();

        StS1=ui->lineEdit_13->text().toInt();
        StS2=ui->lineEdit_21->text().toInt();
        StS3=ui->lineEdit_22->text().toInt();
        StS4=ui->lineEdit_23->text().toInt();

        VeS1=ui->lineEdit_14->text().toInt();
        VeS2=ui->lineEdit_24->text().toInt();
        VeS3=ui->lineEdit_25->text().toInt();
        VeS4=ui->lineEdit_26->text().toInt();

        Obc1=ui->lineEdit_28->text().toInt();
        Obc2=ui->lineEdit_39->text().toInt();
        Obc3=ui->lineEdit_31->text().toInt();
        Obc4=ui->lineEdit_42->text().toInt();

        out << S;
        out << Sb;
        out << Ob;
        out << Obb;
        out << Od;
        out << Odb;
        out << I;
        out << Ib;
        out << Ch;
        out << Chb;
        out << Name;
        out <<RaPo;
        out <<MZiv;
        out <<Ziv;
        out <<MMag;
        out <<Mag;
        out <<Pe;
        out <<Oc;
        out <<ZS1;
        out <<ZS2;
        out <<ZS3;
        out <<ZS4;
        out <<ZT1;
        out <<ZT2;
        out <<ZT3;
        out <<ZT4;
        out <<UczS1;
        out <<UczS2;
        out <<UczS3;
        out <<UczS4;
        out <<UczT1;
        out <<UczT2;
        out <<UczT3;
        out <<UczT4;
        out <<MaS1;
        out <<MaS2;
        out <<MaS3;
        out <<MaS4;
        out <<StS1;
        out <<StS2;
        out <<StS3;
        out <<StS4;
        out <<VeS1;
        out <<VeS2;
        out <<VeS3;
        out <<VeS4;
        out <<kd1;
        out <<kd2;
        out <<kd3;
        out <<kd4;
        out <<Obc1;
        out <<Obc2;
        out <<Obc3;
        out <<Obc4;
    }
}




void MainWindow::loadFromFile()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open Address Book"), "",
                                                    tr("Address Book (*.abk);;All Files (*)"));

    if (fileName.isEmpty())
        return;
    else {

        QFile file(fileName);

        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::information(this, tr("Unable to open file"),
                                     file.errorString());
            return;
        }

        QDataStream in(&file);

        in >> S;
        in >> Sb;
        in >> Ob;
        in >> Obb;
        in >> Od;
        in >> Odb;
        in >> I;
        in >> Ib;
        in >> Ch;
        in >> Chb;
        in >>Name;
        in >>RaPo;
        in >>MZiv;
        in >>Ziv;
        in >>MMag;
        in >>Mag;
        in >>Pe;
        in >>Oc;
        in >>ZS1;
        in >>ZS2;
        in >>ZS3;
        in >>ZS4;
        in >>ZT1;
        in >>ZT2;
        in >>ZT3;
        in >>ZT4;
        in >>UczS1;
        in >>UczS2;
        in >>UczS3;
        in >>UczS4;
        in >>UczT1;
        in >>UczT2;
        in >>UczT3;
        in >>UczT4;
        in >>MaS1;
        in >>MaS2;
        in >>MaS3;
        in >>MaS4;
        in >>StS1;
        in >>StS2;
        in >>StS3;
        in >>StS4;
        in >>VeS1;
        in >>VeS2;
        in >>VeS3;
        in >>VeS4;
        in >>kd1;
        in >>kd2;
        in >>kd3;
        in >>kd4;
        in >>Obc1;
        in >>Obc2;
        in >>Obc3;
        in >>Obc4;

        changeS(S,Sb);
        changeOb(Ob,Obb);
        changeOd(Od,Odb);
        changeI(I,Ib);
        changeCh(Ch,Chb);
        ui->lineEdit_7->setText(Name);
        ui->lineEdit_8->setText(RaPo);
        ui->lineEdit_11->setText(ZS1);
        ui->lineEdit_18->setText(ZS2);
        ui->lineEdit_19->setText(ZS3);
        ui->lineEdit_20->setText(ZS4);
        ui->lineEdit_34->setText(ZT1);
        ui->lineEdit_41->setText(ZT2);
        ui->lineEdit_37->setText(ZT3);
        ui->lineEdit_27->setText(ZT4);

        ui->lineEdit_35->setText(kd1);
        ui->lineEdit_38->setText(kd2);
        ui->lineEdit_29->setText(kd3);
        ui->lineEdit_30->setText(kd4);

        ui->spinBox->setValue(UczS1);
        ui->spinBox_2->setValue(UczS2);
        ui->spinBox_3->setValue(UczS3);
        ui->spinBox_4->setValue(UczS4);
        ui->spinBox_7->setValue(UczT1);
        ui->spinBox_6->setValue(UczT2);
        ui->spinBox_8->setValue(UczT3);
        ui->spinBox_5->setValue(UczT4);

        ui->lineEdit_43->setText(QString::number(MaS1));
        ui->lineEdit_44->setText(QString::number(MaS2));
        ui->lineEdit_45->setText(QString::number(MaS3));
        ui->lineEdit_46->setText(QString::number(MaS4));
        ui->lineEdit_13->setText(QString::number(StS1));
        ui->lineEdit_21->setText(QString::number(StS2));
        ui->lineEdit_22->setText(QString::number(StS3));
        ui->lineEdit_23->setText(QString::number(StS4));
        ui->lineEdit_14->setText(QString::number(VeS1));
        ui->lineEdit_24->setText(QString::number(VeS2));
        ui->lineEdit_25->setText(QString::number(VeS3));
        ui->lineEdit_26->setText(QString::number(VeS4));

        ui->lineEdit_28->setText(QString::number(Obc1));
        ui->lineEdit_39->setText(QString::number(Obc2));
        ui->lineEdit_31->setText(QString::number(Obc3));
        ui->lineEdit_42->setText(QString::number(Obc4));

        ui->lineEdit->setText(QString::number(MZiv));
        ui->lineEdit_2->setText(QString::number(Ziv));
        ui->lineEdit_4->setText(QString::number(MMag));
        ui->lineEdit_5->setText(QString::number(Mag));
        ui->lineEdit_9->setText(QString::number(Pe));
        ui->lineEdit_47->setText(QString::number(Oc));
    }



}


void MainWindow::on_actionnov_postava_triggered()
{
    ncharakter= new NCharakter();

/*
    ncharakter.setModal(true);
    ncharakter.exec();*/
    QObject::connect(ncharakter, SIGNAL(SetS(int,int)), this, SLOT(changeS(int,int)));
    QObject::connect(ncharakter, SIGNAL(SetOb(int,int)), this, SLOT(changeOb(int,int)));
    QObject::connect(ncharakter, SIGNAL(SetOd(int,int)), this, SLOT(changeOd(int,int)));
    QObject::connect(ncharakter, SIGNAL(SetI(int,int)), this, SLOT(changeI(int,int)));
    QObject::connect(ncharakter, SIGNAL(SetCh(int,int)), this, SLOT(changeCh(int,int)));
    QObject::connect(ncharakter, SIGNAL(SetZiv(int)), this, SLOT(changeZiv(int)));
    QObject::connect(ncharakter, SIGNAL(SetMag(int)), this, SLOT(changeMag(int)));
    QObject::connect(ncharakter, SIGNAL(SetRP(QString,QString)), this, SLOT(changeRP(QString,QString)));
ncharakter->show();


}


void MainWindow::on_pushButton_4_clicked()
{
    ZCisla(1);
}


void MainWindow::on_pushButton_3_clicked()
{
    ZCisla(10);
}


void MainWindow::on_pushButton_7_clicked()
{
    ZCisla(-1);
}


void MainWindow::on_pushButton_8_clicked()
{
   ZCisla(-10);
}


void MainWindow::on_pushButton_5_clicked()
{
    MCisla(1);
}


void MainWindow::on_pushButton_6_clicked()
{
    MCisla(10);
}


void MainWindow::on_pushButton_9_clicked()
{
    MCisla(-1);
}


void MainWindow::on_pushButton_10_clicked()
{
    MCisla(-10);
}


void MainWindow::on_pushButton_clicked()
{
    int hodnota1 = ui->lineEdit_3->text().toInt();
    int hodnota2 = ui->lineEdit_2->text().toInt();
    int hodnota= hodnota1+hodnota2;
     ui->lineEdit_2->setText(QString::number(hodnota));
    ui->lineEdit_3->setText(QString::number(0));
}


void MainWindow::on_pushButton_2_clicked()
{
    int hodnota1 = ui->lineEdit_6->text().toInt();
    int hodnota2 = ui->lineEdit_5->text().toInt();
    int hodnota= hodnota1+hodnota2;
    ui->lineEdit_5->setText(QString::number(hodnota));
    ui->lineEdit_6->setText(QString::number(0));
}


void MainWindow::on_pushButton_11_clicked()
{
        PCisla(1);
}


void MainWindow::on_pushButton_12_clicked()
{
    PCisla(10);
}


void MainWindow::on_pushButton_14_clicked()
{
    PCisla(-1);
}


void MainWindow::on_pushButton_15_clicked()
{
    PCisla(-10);
}


void MainWindow::on_pushButton_13_clicked()
{
    int hodnota1 = ui->lineEdit_9->text().toInt();
    int hodnota2 = ui->lineEdit_10->text().toInt();
    int hodnota= hodnota1+hodnota2;
    ui->lineEdit_9->setText(QString::number(hodnota));
    ui->lineEdit_10->setText(QString::number(0));
}





void MainWindow::on_pushButton_16_clicked()
{
    int kk4,kk6,kk8,kk10,kkp,kk12,kk20=0;
    int hodmota=0;
    //k4
    int k4= ui->spinBox_9->value();
    kk4=kos(k4,1,4);
    if(k4>0){
        ui->lineEdit_49->setText(QString::number(kk4));
        ui->spinBox_9->setValue(0);
    }else{
        ui->lineEdit_49->setText("");
    }

    //k6
    int k6= ui->spinBox_10->value();
    kk6 = kos(k6,1,6);
    if(k6>0){
        ui->lineEdit_50->setText(QString::number(kk6));
        ui->spinBox_10->setValue(0);
    }else{
        ui->lineEdit_50->setText("");
    }
    //k8
    int k8= ui->spinBox_11->value();
    kk8=kos(k8,1,8);
    if(k8>0){
        ui->lineEdit_51->setText(QString::number(kk8));
        ui->spinBox_11->setValue(0);
    }else{
        ui->lineEdit_51->setText("");
    }
    //k10
    int k10= ui->spinBox_12->value();
    kk10=kos(k10,0,9);
    if(k10>0){
        ui->lineEdit_52->setText(QString::number(kk10));
        ui->spinBox_12->setValue(0);
    }else{
        ui->lineEdit_52->setText("");
    }
    //kp
    int kp= ui->spinBox_13->value();
    kkp=kosP(kp,0,9);
    if(kp>0){
        ui->lineEdit_53->setText(QString::number(kkp));
        ui->spinBox_13->setValue(0);
    }else{
        ui->lineEdit_53->setText("");
    }

    //k12
    int k12= ui->spinBox_14->value();
    kk12=kos(k12,1,12);
    if(k12>0){
        ui->lineEdit_54->setText(QString::number(kk12));
        ui->spinBox_14->setValue(0);
    }else{
        ui->lineEdit_54->setText("");
    }

    //k20
    int k20= ui->spinBox_15->value();
    kk20=kos(k20,1,20);
    if(k20>0){
        ui->lineEdit_55->setText(QString::number(kk20));
        ui->spinBox_15->setValue(0);
    }else{
        ui->lineEdit_55->setText("");
    }

    //pm
    int pm= ui->spinBox_16->value();
    if(pm>0){
        ui->lineEdit_56->setText(QString::number(pm));
        ui->spinBox_16->setValue(0);
    }else{
        ui->lineEdit_56->setText("");
    }
    hodmota = kk4+kk6+kk8+kk10+kkp+kk12+kk20+pm;
    ui->lineEdit_48->setText(QString::number(hodmota));
}





void MainWindow::on_spinBox_7_valueChanged(int arg1)
{

    ui->lineEdit_40->setText(QString::number(arg1+S));
}


void MainWindow::on_spinBox_6_valueChanged(int arg1)
{
    ui->lineEdit_32->setText(QString::number(arg1+S));
}


void MainWindow::on_spinBox_8_valueChanged(int arg1)
{
    ui->lineEdit_33->setText(QString::number(arg1+S));
}


void MainWindow::on_spinBox_5_valueChanged(int arg1)
{
   ui->lineEdit_36->setText(QString::number(arg1+S));
}


void MainWindow::on_spinBox_valueChanged(int arg1)
{
 ui->lineEdit_12->setText(QString::number(arg1+Ob));
}


void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    ui->lineEdit_16->setText(QString::number(arg1+Ob));
}


void MainWindow::on_spinBox_3_valueChanged(int arg1)
{
    ui->lineEdit_15->setText(QString::number(arg1+Ob));
}


void MainWindow::on_spinBox_4_valueChanged(int arg1)
{
    ui->lineEdit_17->setText(QString::number(arg1+Ob));
}


void MainWindow::on_actionna_st_triggered()
{
    //load
    loadFromFile();
}


void MainWindow::on_actionulo_it_triggered()
{
    //save
    saveToFile();
}


void MainWindow::on_pushButton_dice_clicked()
{
   dice= new Dice();
   dice->show();
}

