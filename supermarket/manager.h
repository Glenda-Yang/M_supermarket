#ifndef MANAGER_H
#define MANAGER_H

#include <QWidget>

namespace Ui {
class manager;
}

class manager : public QWidget
{
    Q_OBJECT

public:
    explicit manager(QWidget *parent = nullptr);
    ~manager();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::manager *ui;
};

#endif // MANAGER_H
