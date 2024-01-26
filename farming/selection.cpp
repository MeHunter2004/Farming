#include "selection.h"
#include "ui_selection.h"
#include <Animal.h>
Selection::Selection(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Selection)
{
    ui->setupUi(this);
}

Selection::~Selection()
{
    delete ui;
}



void Selection::on_cow_pushButton_clicked()
{
    // Cow* cow = new Cow();
    // cow->update();
    // while (cow->productionTime > 0)
    // QPushButton* button = qobject_cast<QPushButton*>(sender());
    // int index = buttons.indexOf(button);
    // emit cow_pushButtonClicked(index);

}

