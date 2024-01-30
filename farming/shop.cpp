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

