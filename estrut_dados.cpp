#include "estrut_dados.h"
#include "ui_estrut_dados.h"

estrut_dados::estrut_dados(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::estrut_dados)
{
    ui->setupUi(this);
}

estrut_dados::~estrut_dados()
{
    delete ui;
}
