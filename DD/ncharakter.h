#ifndef NCHARAKTER_H
#define NCHARAKTER_H

#include <QDialog>


namespace Ui {
class NCharakter;
}

class NCharakter : public QDialog
{
    Q_OBJECT

public:
    explicit NCharakter(QWidget *parent = nullptr);
    ~NCharakter();



signals:
void SetS(int i,int o);
void SetOb(int i,int o);
void SetOd(int i,int o);
void SetI(int i,int o);
void SetCh(int i,int o);
void SetZiv(int i);
void SetMag(int i);
void SetRP(QString i, QString o);

private slots:


    void on_comboBox_2_currentTextChanged(const QString &arg1);



    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();
void on_buttonBox_accepted();


private:
    Ui::NCharakter *ui;

};

#endif // NCHARAKTER_H
