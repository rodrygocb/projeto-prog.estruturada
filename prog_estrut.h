#ifndef PROG_ESTRUT_H
#define PROG_ESTRUT_H

#include <QDialog>

namespace Ui {
class prog_estrut;
}

class prog_estrut : public QDialog
{
    Q_OBJECT

public:
    explicit prog_estrut(QWidget *parent = nullptr);
    ~prog_estrut();

private slots:
    void on_pushButton_clicked();

private:
    Ui::prog_estrut *ui;
};

#endif // PROG_ESTRUT_H
