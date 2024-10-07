#include "signup.h"
#include "manager.h"
#include "ui_signup.h"

int Value;

signup::signup(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);

    QString Sql = "SELECT id FROM supermarket.user ORDER BY id DESC LIMIT 1;";
    QSqlQuery query;

    if (query.exec(Sql)) {
        if (query.next()) {
            Value = query.value(0).toInt() + 1;
            ui->label_id->setText(QString::number(Value));
        }
        else {
            QMessageBox::information(this, "提示", "没有记录");
        }
    }
    else {
        QMessageBox::information(this, "提示", "查找最后一列失败");
    }
}

signup::~signup()
{
    delete ui;
}

void signup::on_def_clicked()
{

    QString password = ui -> lineEdit_password ->text();

    bool ok;
    int pw = password.toInt(&ok);

    QString insertSql = QString("INSERT INTO supermarket.user (id, password) VALUES ('%1','%2');").arg(Value).arg(pw);
    QSqlQuery insertQuery;
    if (insertQuery.exec(insertSql)) {
        QMessageBox::information(this, "提示", "注册成功");
        manager *w = new manager;
        w->show();
    }
    else {
        QMessageBox::information(this, "提示", "注册失败");
    }
}


