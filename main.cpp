#include "mainwindow.h"
#include <QCoreApplication>
#include <QApplication>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriverCreator>
#include <QtSql/QSqlQuery>
#include <QDebug>
bool createConnection();



bool createConnection(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("btcontroller");
    db.setUserName("root");
    db.setPassword("devel");
    if (!db.open()) {
        qDebug() << "Error 1518: No hay servidores SQL funcionando";
        return false;
    }
    return true;
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    if (!createConnection()){

        qDebug() << "Error 1519: No se puede crear la conexion, reintente mas tarde!";
        return 1;
 }
    else
    {

        qDebug() << "Conectado!";

     }
    MainWindow w;
    w.setFixedSize(w.size());
    w.show();
    return a.exec();

}
