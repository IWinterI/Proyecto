#ifndef REGISTRO_USUARIO_H
#define REGISTRO_USUARIO_H

#include <QDialog>
#include <QList>
#include <QCheckBox>

namespace Ui {
class Registro_Usuario;
}

class Registro_Usuario : public QDialog
{
    Q_OBJECT

public:
    explicit Registro_Usuario(QWidget *parent = nullptr);
    ~Registro_Usuario();


private slots:
    void accept() override;

    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

private:
    Ui::Registro_Usuario *ui;
    QList<QCheckBox*> brandCheckboxes;
};

#endif // REGISTRO_USUARIO_H
