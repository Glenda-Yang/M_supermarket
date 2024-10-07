#include "manager.h"
#include "buy_good.h"
#include "good_add.h"
#include "ui_manager.h"

manager::manager(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::manager)
{
    ui->setupUi(this);
}

manager::~manager()
{
    delete ui;
}

void manager::on_pushButton_clicked()
{
    buy_good *w = new buy_good;
    w->show();

}


void manager::on_pushButton_3_clicked()
{
    good_add *w = new good_add ;
    w->show();
}

