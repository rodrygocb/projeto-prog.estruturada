#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString css="background-color:#f55;";
    ui->label_1->setStyleSheet(css);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->label_2->setPixmap(QPixmap("../atividade_extra_qt/img.jpeg").scaled(500,700,Qt::KeepAspectRatio));
}


void MainWindow::on_pushButton_3_clicked()
{
   connect(ui->pushButton_3, SIGNAL(clicked()),this,SLOT(close()));
}


void MainWindow::on_label_2_linkActivated(const QString &link)
{

}
