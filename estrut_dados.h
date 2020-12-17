#ifndef ESTRUT_DADOS_H
#define ESTRUT_DADOS_H

#include <QDialog>

namespace Ui {
class estrut_dados;
}

class estrut_dados : public QDialog
{
    Q_OBJECT

public:
    explicit estrut_dados(QWidget *parent = nullptr);
    ~estrut_dados();

private:
    Ui::estrut_dados *ui;
};

#endif // ESTRUT_DADOS_H
