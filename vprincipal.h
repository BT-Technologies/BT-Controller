#ifndef VPRINCIPAL_H
#define VPRINCIPAL_H

#include <QMainWindow>

namespace Ui {
class Vprincipal;
}

class Vprincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit Vprincipal(QWidget *parent = 0);
    ~Vprincipal();

private slots:
    void on_btn_play_clicked();

    void on_actionSalir_triggered();

private:
    Ui::Vprincipal *ui;
};

#endif // VPRINCIPAL_H
