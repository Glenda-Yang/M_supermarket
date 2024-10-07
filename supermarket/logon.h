#ifndef LOGON_H
#define LOGON_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QWidget>
#include <QMessageBox>

namespace Ui {
class Logon;
}

class Logon : public QWidget
{
    Q_OBJECT

public:
    explicit Logon(QWidget *parent = nullptr);
    ~Logon();

private slots:
    void on_def_clicked();

private:
    Ui::Logon *ui;
};

#endif // LOGON_H
