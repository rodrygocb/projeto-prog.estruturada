#include "tela4.h"
#include "ui_tela4.h"
#include "tela5.h"
#include "widget.h"
#include "prog_estrut.h"
#include <QtGui>
#include <QImage>
#include <QtCore>
#include "estrut_dados.h"

tela4::tela4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela4)
{
    ui->setupUi(this);

}

tela4::~tela4()
{
    delete ui;
}

void tela4::on_pushButton_clicked()
{
    close();
    tela5 form5;
    form5.exec();
}

void tela4::on_pushButton_2_clicked()
{
    close();
}

void tela4::on_pushButton_3_clicked()
{
    prog_estrut formprog;
    formprog.exec();

}

void tela4::on_progressBar_valueChanged(int value)
{

}

void tela4::on_pushButton_5_clicked()
{

    //ui->progressBar->setValue(300);
   //ui->progressBar->value(50);
   // on_progressBar_valueChanged(40);

}

void tela4::on_pushButton_4_clicked()
{
    estrut_dados formestrut;
    formestrut.exec();
}
