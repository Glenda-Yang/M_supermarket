#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_logon_clicked();

    void on_signup_clicked();


    void on_exit_clicked();

private:
    Ui::Widget *ui;
    QSqlDatabase db;
};
#endif // WIDGET_H
