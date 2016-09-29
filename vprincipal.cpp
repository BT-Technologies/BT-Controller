#include "vprincipal.h"
#include "ui_vprincipal.h"
#include <QtNetwork/QHostInfo>
#include <QRect>
#include <QtWidgets>
#include <QDateTime>
#include <QApplication>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriverCreator>
#include <QtSql/QSqlQuery>
#include <QDebug>
//includes of UIs (for clicks. LoL )
#include "dlg_ncon.h"
#include "ui_dlg_ncon.h"

Vprincipal::Vprincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Vprincipal)
{
    ui->setupUi(this);
    QDate createdDate=QDate::currentDate();
      QString DateString;
      DateString=createdDate.toString("yyyy");
    this->setWindowTitle(tr("BT-Controller |[Main Window] -Ver.")+DateString);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width()- this->width()) / 2;
    int y = (screenGeometry.height()- this->height()) / 2;
    this->move(x, y);
    this->show();
}

Vprincipal::~Vprincipal()
{
    delete ui;
}


void Vprincipal::on_btn_play_clicked()
{
    dlg_ncon *ncon = new dlg_ncon();
    ncon->show();
}

void Vprincipal::on_actionSalir_triggered()
{
    QMessageBox::StandardButton reply;
     reply = QMessageBox::question(this, tr("Question"),tr("Really want to quit? "),
                                   QMessageBox::Yes|QMessageBox::No);
     if (reply == QMessageBox::Yes) {
       qDebug() << "Bye Bye!!! .... ";
       this->close();
     } else {
       qDebug() << "Seguimos Aqui! ";
     }
}
