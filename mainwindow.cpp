#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRect>
#include <QtWidgets>
#include <QDateTime>
#include <QApplication>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriverCreator>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include "vprincipal.h"
#include "ui_vprincipal.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDate createdDate=QDate::currentDate();
      QString DateString;
      DateString=createdDate.toString("yyyy");
    this->setWindowTitle("BT-Controller| [Session Start] -Ver."+DateString);
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width()- this->width()) / 2;
    int y = (screenGeometry.height()- this->height()) / 2;
    this->move(x, y);
    this->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_toolButton_clicked()
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

void MainWindow::on_pushButton_clicked()
{
    QString Nombre =ui->txt_user->text();
    QString Clave  =ui->txt_password->text();
    if(Nombre == NULL || Nombre == " ")
        {
            ui->statusBar->setStatusTip("Por Favor, escribe el USUARIO");

        }
    if(Clave == NULL || Clave == " ")
        {
             ui->statusBar->setStatusTip("Por favor, escribe la CLAVE");

        }
    if( Nombre.size() <= 4)
        {
             ui->statusBar->setStatusTip("Recuerda que son mas de 4 caracteres");
        }
    else
        {
        QSqlQuery query;
        query.prepare("SELECT * FROM usuarios WHERE (n_usuario=? AND p_usuario=?) ");
        query.addBindValue(Nombre);
        query.addBindValue(Clave);
        query.exec();
        while (query.next()) {
                QString usuario = query.value(0).toString();
                ui->statusBar->setStatusTip(usuario);
                if(usuario.size() != 0  )
                {
                    qDebug() << usuario << ": User Registered";
                   this->hide();
                    ui->statusBar->setStatusTip("PASS");
                    Vprincipal *vpr = new Vprincipal();
                    vpr->show();
                    query.clear();
                }
               else
                {
                    ui->statusBar->setStatusTip("4 or more chars");
                    QMessageBox msgElogin;
                    msgElogin.setText("");
                    msgElogin.exec();
                }
           }
    }
}

void MainWindow::on_txt_password_returnPressed()
{
    on_pushButton_clicked();
}
