#include "prog_estrut.h"
#include "ui_prog_estrut.h"

prog_estrut::prog_estrut(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::prog_estrut)
{
    ui->setupUi(this);
}

prog_estrut::~prog_estrut()
{
    delete ui;
}

void prog_estrut::on_pushButton_clicked()
{
    close();
}
