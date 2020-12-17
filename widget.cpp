#include "widget.h"
#include "ui_widget.h"
#include <QPixmap>

static  QSqlDatabase bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label_3->setPixmap(QPixmap("C:/Users/rodrigo/Documents/proyecto1 (2)/proyecto1.2/abstract2.png").scaled(500,800,Qt::KeepAspectRatio));
    bancoDeDados.setDatabaseName("C:/Users/rodrigo/Documents/proyecto1 (2)/proyecto1.2/banco.db");

    if(!bancoDeDados.open()){
        ui->label_4->setText("Não foi possível abrir o banco de dados");
    }else{
        ui->label_4->setText("Banco de dados iniciado com sucesso");
    }


}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QString username=ui->txt_username->text();
    QString senha=ui->txt_senha->text();



    if(!bancoDeDados.isOpen()){
        qDebug()<<"Banco de dados executando";
        return;
    }

    QSqlQuery query;
    if(query.exec("select * from usuarios where username='"+username+"' and senha='"+senha+"' ")){
        int cont=0;
        while (query.next()){
            cont++;
        }
        if(cont>0){
            this->close();
            tela4 form4;
            form4.setModal(true);
            form4.exec();
        }else{
            ui->label_4->setText("ERRO no Login");
            QString css="background-color:#f55;";
            ui->label_4->setStyleSheet(css);
            ui->txt_username->clear();
            ui->txt_senha->clear();
            ui->txt_username->setFocus();
        }
    }
}

void Widget::on_label_linkActivated(const QString &link)
{

}

void Widget::on_pushButton_customContextMenuRequested(const QPoint &pos)
{

}

void Widget::on_pushButton_2_clicked()
{
    close();
    tela2 form2;
    form2.exec();
}
