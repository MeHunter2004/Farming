#include "shop.h"
#include "ui_shop.h"
#include <Animal.h>

shop::shop(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::shop)
{
    ui->setupUi(this);
}

shop::~shop()
{
    delete ui;
}

void shop::on_buy_cow_pushButton_clicked()
{
    Cow *cow = new Cow;
}


void shop::on_buy_lomb_pushButton_clicked()
{
    Lomb *lomb = new Lomb;
}


void shop::on_buy_hen_pushButton_clicked()
{
    Chicken *hen = new Chicken;
}


void shop::on_buy_worker_pushButton_clicked()
{
    workerCount++;
}


void shop::on_buy_wheat_pushButton_clicked()
{
    Wheat *wheat = new Wheat;
}


void shop::on_buy_corn_pushButton_clicked()
{
    Corn *corn = new Corn;
}

