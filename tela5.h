#ifndef TELA5_H
#define TELA5_H

#include <QDialog>

namespace Ui {
class tela5;
}

class tela5 : public QDialog
{
    Q_OBJECT

public:
    explicit tela5(QWidget *parent = nullptr);
    ~tela5();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::tela5 *ui;
};

#endif // TELA5_H
