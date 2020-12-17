#include "tela5.h"
#include "ui_tela5.h"
#include "tela4.h"

tela5::tela5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela5)
{
    ui->setupUi(this);
}

tela5::~tela5()
{
    delete ui;
}

void tela5::on_pushButton_clicked()
{
    close();
    tela4 form4;
    form4.exec();
}

void tela5::on_pushButton_2_clicked()
{
    close();
    tela4 form4;
    form4.exec();
}
