#include "dlg_ncon.h"
#include "ui_dlg_ncon.h"
#include <QTime>
#include <QTextStream>
#include <QString>

dlg_ncon::dlg_ncon(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dlg_ncon)
{
    ui->setupUi(this);
}

dlg_ncon::~dlg_ncon()
{
    delete ui;
}

void dlg_ncon::on_pushButton_2_clicked()
{
    this->hide();
}

QString randomnumber()
{
//in this Function we have generate a random number (o connection password) ..
    QTime ct = QTime::currentTime();
   QString ct2= ct.toString("hhmmss");
   int ct3 = ct2.toInt();
   int randomValue = qrand() % ct3;
   QString returnvalue;
   returnvalue  = QString::number(randomValue,8);
   if(returnvalue.length() < 5 && returnvalue.length() > 3)
   {
       returnvalue.append("0");
   }
   returnvalue = returnvalue.left(5);
   return returnvalue;

}

void dlg_ncon::on_btn_passgenerate_clicked()
{
    ui->txt_password->setText(randomnumber());
}

void dlg_ncon::on_txt_phone_textChanged(const QString &txt_cell1)
{
  //txt_cell1 =  ui->txt_phone->text();
}
