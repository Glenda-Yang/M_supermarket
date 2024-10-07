#ifndef SIGNUP_H
#define SIGNUP_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QWidget>
#include <QMessageBox>
#include <QLabel>
#include <QString>

namespace Ui {
class signup;
}

class signup : public QWidget
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();

private slots:
    void on_def_clicked();

private:
    Ui::signup *ui;
};

#endif // SIGNUP_H
