#include "good_add.h"
#include "ui_good_add.h"

good_add::good_add(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::good_add)
{
    ui->setupUi(this);
}

good_add::~good_add()
{
    delete ui;
}

void good_add::on_def_clicked()
{
    QString name = ui->lineEdit_name->text();
    QString n = ui->lineEdit_num->text();
    QString p = ui->lineEdit_price->text();
    bool ok;
    int num = n.toInt(&ok);
    QString sql_name = QString("select * from supermarket.good where good_name = \"%1\";").arg(name);
    QSqlQuery query_name;
    query_name.exec(sql_name);

    if(query_name.next()){
        QString sql_num = QString("select good_num from supermarket.good where good_name = \"%1\";").arg(name);
        QSqlQuery query_num;
        query_num.exec(sql_num);
        query_num.next();
        int s_num = query_num.value(0).toInt();

        num = num + s_num;

        QString sql_updata =
            QString("update supermarket.good set good_num = %1 where good_name = \"%2\";").arg(num).arg(name);
        QSqlQuery query_updata;
        query_updata.exec(sql_updata);
        QMessageBox::information(this, "提示", "商品库存增加成功");
    }
    else{
        QString sql_add = QString("insert into supermarket.good values('%1','%2','%3');").arg(name).arg(n).arg(p);
        QSqlQuery query_add;
        query_add.exec(sql_add);
        QMessageBox::information(this, "提示", "商品上架成功");
    }


}

