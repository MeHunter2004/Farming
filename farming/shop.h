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

private:
    Ui::shop *ui;
};

#endif // SHOP_H
