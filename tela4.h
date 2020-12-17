#ifndef TELA4_H
#define TELA4_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class tela4;
}

class tela4 : public QDialog
{
    Q_OBJECT

public:
    explicit tela4(QWidget *parent = nullptr);
    ~tela4();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_progressBar_valueChanged(int value);

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::tela4 *ui;
};

#endif // TELA4_H
