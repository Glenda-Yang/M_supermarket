#ifndef GOOD_ADD_H
#define GOOD_ADD_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QWidget>
#include <QMessageBox>

namespace Ui {
class good_add;
}

class good_add : public QWidget
{
    Q_OBJECT

public:
    explicit good_add(QWidget *parent = nullptr);
    ~good_add();

private slots:
    void on_def_clicked();

private:
    Ui::good_add *ui;
};

#endif // GOOD_ADD_H
