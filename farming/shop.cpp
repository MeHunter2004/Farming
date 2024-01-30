#include "shop.h"
#include "ui_shop.h"
#include <Animal.h>
#include "QMessageBox"

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
    if (coins >= 7) {
        Cow *cow = new Cow;
        coins -= 7;
    } else {
        QMessageBox::warning(this,"","Not enugh coins!");
    }
}


void shop::on_buy_lomb_pushButton_clicked()
{
    if (coins >= 5) {
        Lomb *lomb = new Lomb;
        coins -= 5;
    } else {
        QMessageBox::warning(this,"","Not enugh coins!");
    }
}


void shop::on_buy_hen_pushButton_clicked()
{
    if (coins >= 3) {
        Chicken *hen = new Chicken;
        coins -= 3;
    } else {
        QMessageBox::warning(this,"","Not enugh coins!");
    }
}


void shop::on_buy_worker_pushButton_clicked()
{
    if (coins >= 5) {
        workerCount++;
        coins -= 5;
    } else {
        QMessageBox::warning(this,"","Not enugh coins!");
    }
}


void shop::on_buy_wheat_pushButton_clicked()
{
    if (coins >= 2) {
        Wheat *wheat = new Wheat;
        coins -= 2;
    } else {
        QMessageBox::warning(this,"","Not enugh coins!");
    }
}


void shop::on_buy_corn_pushButton_clicked()
{
    if (coins >= 2) {
        Corn *corn = new Corn;
        coins -= 2;
    } else {
        QMessageBox::warning(this,"","Not enugh coins!");
    }
}

