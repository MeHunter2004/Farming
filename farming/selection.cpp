#include "selection.h"
#include "ui_selection.h"
#include "Animal.h"
Selection::Selection(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Selection)
{
    ui->setupUi(this);
    ui->corn_Number_label->setNum(cornCount);
    ui->cow_Number_label->setNum(cowCount);
    ui->hen_Number_label->setNum(henCount);
    ui->lomb_Number_label->setNum(lombCount);
    ui->wheat_Number_label->setNum(wheatCount);
}

Selection::~Selection()
{
    delete ui;
}



void Selection::on_cow_pushButton_clicked()
{
    // QPushButton* button = qobject_cast<QPushButton*>(sender());
    // int index = buttons.indexOf(button);
    // emit cow_pushButtonClicked(index);

}


void Selection::on_lomb_pushButton_clicked()
{

}

