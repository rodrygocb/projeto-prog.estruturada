#include "tela2.h"
#include "ui_tela2.h"
#include "tela4.h"
#include <QMessageBox>

tela2::tela2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela2)
{
    ui->setupUi(this);

}

tela2::~tela2()
{
    delete ui;
}

void tela2::on_pushButton_clicked()
{

}

void tela2::on_pushButton_2_clicked()
{
close();
}

void tela2::on_pushButton_4_clicked()
{
    QString nome=ui->txt_nome->text();
    QString email=ui->txt_email->text();
    QString senha=ui->txt_senha->text();
    QString horario_inicial=ui->hora_inicio->text();
    QString horario_final=ui->hora_fim->text();

    QSqlQuery query;
    query.prepare("insert into usuarios (nome,username,senha,horario_inicial,horario_final) values"
                  "('"+nome+"','"+email+"','"+senha+"','"+horario_inicial+"','"+horario_final+"')");

    if(!query.exec()){
        QMessageBox::information(this,"","Cadastro realizado com sucesso");
        close();
        tela4 form4;
        form4.exec();
    }else{
        qDebug()<<"Erro ao cadastrar!";
    }


}

void tela2::on_pushButton_3_clicked()
{
    close();
}
