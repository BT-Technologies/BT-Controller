#ifndef DLG_NCON_H
#define DLG_NCON_H

#include <QWidget>

namespace Ui {
class dlg_ncon;
}

class dlg_ncon : public QWidget
{
    Q_OBJECT

public:
    explicit dlg_ncon(QWidget *parent = 0);
    ~dlg_ncon();

private slots:
    void on_pushButton_2_clicked();

    void on_btn_passgenerate_clicked();

    void on_txt_phone_textChanged(const QString &arg1);

private:
    Ui::dlg_ncon *ui;
};

#endif // DLG_NCON_H
