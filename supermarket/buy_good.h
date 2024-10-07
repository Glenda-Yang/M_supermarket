#ifndef BUY_GOOD_H
#define BUY_GOOD_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QWidget>
#include <QMessageBox>

namespace Ui {
class buy_good;
}

class buy_good : public QWidget
{
    Q_OBJECT

public:
    explicit buy_good(QWidget *parent = nullptr);
    ~buy_good();

private slots:
    void on_def_clicked();

private:
    Ui::buy_good *ui;
};

#endif // BUY_GOOD_H
