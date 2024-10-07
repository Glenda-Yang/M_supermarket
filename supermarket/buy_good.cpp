#include "buy_good.h"
#include "ui_buy_good.h"
#include "QDebug"

buy_good::buy_good(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::buy_good)
{
    ui->setupUi(this);
}

buy_good::~buy_good()
{
    delete ui;
}

void buy_good::on_def_clicked()
{
    QString name = ui->lineEdit_name->text();
    QString n = ui->lineEdit_2->text();

    bool ok;
    int num = n.toInt(&ok);//num是买了多少个

    QString sql1 = QString("select * from supermarket.good where good_name = \"%1\";").arg(name);

    QString sql2 = QString("select * from supermarket.good where good_name = \"%1\" and good_num>=%2;").arg(name).arg(num);
    QSqlQuery query1,query2;

    query1.exec(sql1);

    if (query1.next()){
        query2.exec(sql2);
        if(query2.next()){
            QSqlQuery query3,query4,query5;
            //先更改数据库库存
            QString sql4 = QString("SELECT  good_num FROM supermarket.good where good_name=\"%1\";").arg(name);
            query4.exec(sql4);
            if(!query4.next()){
                QMessageBox::information(this, "提示", "库存获取失败");
            }

            int good_num = query4.value(0).toInt();//现在库存
            good_num = good_num - num;//更新库存数量

            QString sql3 = QString("update supermarket.good set good_num = %1 where good_name = \"%2\";").arg(good_num).arg(name);
            query3.exec(sql3);

            //跳转到下一个页面，支付多少钱
            QString sql5 = QString("SELECT  good_price FROM supermarket.good where good_name=\"%2\";").arg(name);
            query5.exec(sql5);
            if(!query5.next()){
                QMessageBox::information(this, "提示", "价格获取失败");
            }
            int pri = query5.value(0).toInt(&ok);
            pri = pri * num;
            QMessageBox msgBox;
            msgBox.setWindowTitle("支付结果");
            msgBox.setText(QString("请支付: %1元").arg(pri));
            msgBox.exec();

        }
        else{
            QMessageBox::information(this, "提示", "抱歉，商品数目不够");
        }
    }
    else {
        QMessageBox::information(this, "提示", "抱歉，暂时没有该商品");
    }
}

