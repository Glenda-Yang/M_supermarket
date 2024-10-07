#include "widget.h"
#include "ui_widget.h"
#include "logon.h"
#include "signup.h"
#include "QAbstractButton"

Widget::Widget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("supermarket");
    db.setUserName("root");
    db.setPassword("123456");
    db.open();
    /*
     bool ok = db.open();
     //判断数据库是否连接成功
     if (ok){
        QMessageBox::information(this, "infor", "success");
    }
    else {
        QMessageBox::warning(this, "infor", "open failed");
    }
*/


}

Widget::~Widget()
{
    delete ui;
}
//跳转到登录界面
void Widget::on_logon_clicked()
{
    Logon *w = new Logon;
    w ->show();

}
//跳转到注册页面
void Widget::on_signup_clicked()
{
    signup *w= new signup;
    w->show();
}




void Widget::on_exit_clicked()
{
    db.close();
}

