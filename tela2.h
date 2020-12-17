#ifndef TELA2_H
#define TELA2_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

namespace Ui {
class tela2;
}

class tela2 : public QDialog
{
    Q_OBJECT

public:
    explicit tela2(QWidget *parent = nullptr);
    ~tela2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::tela2 *ui;
};

#endif // TELA2_H
