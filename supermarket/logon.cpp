#include "logon.h"
#include "manager.h"
#include "ui_logon.h"

Logon::Logon(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Logon)
{
    ui->setupUi(this);

}

Logon::~Logon()
{
    delete ui;
}



void Logon::on_def_clicked()
{

    QString id = ui->lineEdit_id->text();
    QString password = ui->lineEdit_password->text();



    QString sql = QString("select *from supermarket.user where id = '%1' and password = '%2';").arg(id).arg(password);
    QSqlQuery query;
    query.exec(sql);
    if (query.next()){
        QMessageBox::information(this, "提示", "登录成功");
        manager *w = new manager;
        w->show();
    }
    else {
        QMessageBox::warning(this, "提示", "登陆失败");
    }
}

