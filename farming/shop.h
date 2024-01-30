#ifndef SHOP_H
#define SHOP_H

#include <QWidget>

namespace Ui {
class shop;
}

class shop : public QWidget
{
    Q_OBJECT

public:
    explicit shop(QWidget *parent = nullptr);
    ~shop();

private slots:
    void on_buy_cow_pushButton_clicked();

    void on_buy_lomb_pushButton_clicked();

    void on_buy_hen_pushButton_clicked();

    void on_buy_worker_pushButton_clicked();

    void on_buy_wheat_pushButton_clicked();

    void on_buy_corn_pushButton_clicked();

private:
    Ui::shop *ui;
};

#endif // SHOP_H
