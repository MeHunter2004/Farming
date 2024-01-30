#include "selection.h"
#include "ui_selection.h"
#include "Animal.h"
#include "QMessageBox"

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
    if (ui->cow_Number_label->text().toInt() > 0) {
        cowCount--;
        // QPushButton* button = qobject_cast<QPushButton*>(sender());
        // int index = buttons.indexOf(button);
        // emit cow_pushButtonClicked(index);
        // ui->cow_Number_label->setNum(cowCount);
        this->hide();
    } else {
        QMessageBox::warning(this,"Oh No","We don't have a cow sir."
                                            "<li>"
                                            "You should first buy one from shop."
                                            "<li>");
    }


}


void Selection::on_lomb_pushButton_clicked()
{
    if (ui->lomb_Number_label->text().toInt() > 0) {
        lombCount--;
        // QPushButton* button = qobject_cast<QPushButton*>(sender());
        // int index = buttons.indexOf(button);
        // emit cow_pushButtonClicked(index);
        // ui->lomb_Number_label->setNum(cowCount);
        this->hide();
    } else {
        QMessageBox::warning(this,"Oh No","We don't have a lomb sir."
                                            "<li>"
                                            "You should first buy one from shop."
                                            "<li>");
    }

}


void Selection::on_hen_pushButton_clicked()
{
    if (ui->hen_Number_label->text().toInt() > 0) {
        henCount--;
        // QPushButton* button = qobject_cast<QPushButton*>(sender());
        // int index = buttons.indexOf(button);
        // emit cow_pushButtonClicked(index);
        // ui->lomb_Number_label->setNum(cowCount);
        this->hide();
    } else {
        QMessageBox::warning(this,"Oh No","We don't have a hen sir."
                                            "<li>"
                                            "You should first buy one from shop."
                                            "<li>");
    }
}


void Selection::on_wheat_pushButton_clicked()
{
    if (ui->wheat_Number_label->text().toInt() > 0) {
        wheatCount--;
        // QPushButton* button = qobject_cast<QPushButton*>(sender());
        // int index = buttons.indexOf(button);
        // emit cow_pushButtonClicked(index);
        // ui->lomb_Number_label->setNum(cowCount);
        this->hide();
    } else {
        QMessageBox::warning(this,"Oh No","We don't have a wheat sir."
                                            "<li>"
                                            "You should first buy one from shop."
                                            "<li>");
    }
}


void Selection::on_corn_pushButton_clicked()
{
    if (ui->corn_Number_label->text().toInt() > 0) {
        cornCount--;
        // QPushButton* button = qobject_cast<QPushButton*>(sender());
        // int index = buttons.indexOf(button);
        // emit cow_pushButtonClicked(index);
        // ui->lomb_Number_label->setNum(cowCount);
        this->hide();
    } else {
        QMessageBox::warning(this,"Oh No","We don't have a corn sir."
                                            "<li>"
                                            "You should first buy one from shop."
                                            "<li>");
    }
}

