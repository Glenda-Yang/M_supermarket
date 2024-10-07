#include "widget.h"

#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QtSql>
#include <QApplication>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



    Widget w;
    w.show();


    return a.exec();
}


/*
    //打印Qt支持的数据库驱动
    qDebug() << QSqlDatabase::drivers();


    db.close();
  */
