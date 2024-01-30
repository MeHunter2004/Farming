#include "gameframe.h"
#include "ui_gameframe.h"
#include "selection.h"
#include "handle.h"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "shop.h"
#include "Animal.h"
#include "QMessageBox"

GameFrame::GameFrame(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::GameFrame)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("e:/programming/FinalProject_QT/database/players.db");
    database.open();
}

GameFrame::~GameFrame()
{
    delete ui;
}



void GameFrame::on_H1_1_pushButton_clicked()
{
    if (ui->H1_1_pushButton->styleSheet() == "background-color: rgb(81, 41, 0);"){

        if (coins >= 3) {
            ui->H1_1_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
            coins -= 3;
            ui->coins_label->setNum(coins);
        } else {
            QMessageBox::warning(this,"","You don't have enugh coins!");
        }

    }
    else if (ui->H1_1_pushButton->styleSheet() == "background-color: rgb(0, 85, 0);"){

        Selection *se = new Selection;
        se->show();

    }else if (ui->H1_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){

        handle *hc = new handle;
        hc->show();

    }else if (ui->H1_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/sheep_f.png);") {

    }else if (ui->H1_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/hen_f2.png);") {

    }else if (ui->H1_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/wheat.png);") {

    }else if (ui->H1_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/corn.png);") {

    }


}

// In page1.cpp
void GameFrame::changePushButtonColor(int index)
{
    QPushButton* button = buttons[index];
    button->setStyleSheet("background-color: red");
}


void GameFrame::on_Load_pushButton_clicked()
{
    QString s = ui->Name_lineEdit->text();
    // Assuming db is a QSqlDatabase object that contains the database connection
    QSqlQuery query; // create a QSqlQuery object with the database connection
    query.exec("SELECT Salery FROM Player WHERE Username = '"+s+"'"); // execute a SQL query with the desired username
    if (query.next()) { // move to the first record in the result set
        int salary = query.value(0).toInt(); // get the Salary field as an int
        // alternatively, use double salary = query.value(0).toDouble(); if the Salary field is a double
        ui->coins_label->setNum(salary); // set the label text to the salary value
        // do something with the label, such as adding it to a layout or a widget
    }
    coins = ui->coins_label->text().toInt();


}



void GameFrame::on_shop_pushButton_clicked()
{
    shop *sh = new shop;
    sh->show();
}


void GameFrame::on_H1_2_pushButton_clicked()
{
    if (ui->H1_2_pushButton->styleSheet() == "background-color: rgb(81, 41, 0);"){

        if (coins >= 3) {
            ui->H1_2_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
            coins -= 3;
            ui->coins_label->setNum(coins);
        } else {
            QMessageBox::warning(this,"","You don't have enugh coins!");
        }

    }
    else if (ui->H1_2_pushButton->styleSheet() == "background-color: rgb(0, 85, 0);"){

        Selection *se = new Selection;
        se->show();

    }else if (ui->H1_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){

        handle *hc = new handle;
        hc->show();

    }else if (ui->H1_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/sheep_f.png);") {



    }else if (ui->H1_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/hen_f2.png);") {



    }else if (ui->H1_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/wheat.png);") {



    }else if (ui->H1_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/corn.png);") {



    }

}


void GameFrame::on_H1_3_pushButton_clicked()
{
    if (ui->H1_3_pushButton->styleSheet() == "background-color: rgb(81, 41, 0);"){

        if (coins >= 3) {
            ui->H1_3_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
            coins -= 3;
            ui->coins_label->setNum(coins);
        } else {
            QMessageBox::warning(this,"","You don't have enugh coins!");
        }

    }
    else if (ui->H1_3_pushButton->styleSheet() == "background-color: rgb(0, 85, 0);"){

        Selection *se = new Selection;
        se->show();

    }else if (ui->H1_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){

        handle *hc = new handle;
        hc->show();

    }else if (ui->H1_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/sheep_f.png);") {

    }else if (ui->H1_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/hen_f2.png);") {

    }else if (ui->H1_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/wheat.png);") {

    }else if (ui->H1_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/corn.png);") {

    }

}


void GameFrame::on_H1_4_pushButton_clicked()
{
    if (ui->H1_4_pushButton->styleSheet() == "background-color: rgb(81, 41, 0);"){

        if (coins >= 3) {
            ui->H1_4_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
            coins -= 3;
            ui->coins_label->setNum(coins);
        } else {
            QMessageBox::warning(this,"","You don't have enugh coins!");
        }

    }
    else if (ui->H1_4_pushButton->styleSheet() == "background-color: rgb(0, 85, 0);"){

        Selection *se = new Selection;
        se->show();

    }else if (ui->H1_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){

        handle *hc = new handle;
        hc->show();

    }else if (ui->H1_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/sheep_f.png);") {

    }else if (ui->H1_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/hen_f2.png);") {

    }else if (ui->H1_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/wheat.png);") {

    }else if (ui->H1_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/corn.png);") {

    }

}


void GameFrame::on_H2_1_pushButton_clicked()
{
    if (ui->H2_1_pushButton->styleSheet() == "background-color: rgb(81, 41, 0);"){

        if (coins >= 3) {
            ui->H2_1_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
            coins -= 3;
            ui->coins_label->setNum(coins);
        } else {
            QMessageBox::warning(this,"","You don't have enugh coins!");
        }

    }
    else if (ui->H2_1_pushButton->styleSheet() == "background-color: rgb(0, 85, 0);"){

        Selection *se = new Selection;
        se->show();

    }else if (ui->H2_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){

        handle *hc = new handle;
        hc->show();

    }else if (ui->H2_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/sheep_f.png);") {

    }else if (ui->H2_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/hen_f2.png);") {

    }else if (ui->H2_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/wheat.png);") {

    }else if (ui->H2_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/corn.png);") {

    }

}


void GameFrame::on_H2_2_pushButton_clicked()
{
    if (ui->H2_2_pushButton->styleSheet() == "background-color: rgb(81, 41, 0);"){

        if (coins >= 3) {
            ui->H2_2_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
            coins -= 3;
            ui->coins_label->setNum(coins);
        } else {
            QMessageBox::warning(this,"","You don't have enugh coins!");
        }

    }
    else if (ui->H2_2_pushButton->styleSheet() == "background-color: rgb(0, 85, 0);"){

        Selection *se = new Selection;
        se->show();

    }else if (ui->H2_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){

        handle *hc = new handle;
        hc->show();

    }else if (ui->H2_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/sheep_f.png);") {

    }else if (ui->H2_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/hen_f2.png);") {

    }else if (ui->H2_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/wheat.png);") {

    }else if (ui->H2_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/corn.png);") {

    }

}


void GameFrame::on_H2_3_pushButton_clicked()
{
    if (ui->H2_3_pushButton->styleSheet() == "background-color: rgb(81, 41, 0);"){

        if (coins >= 3) {
            ui->H2_3_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
            coins -= 3;
            ui->coins_label->setNum(coins);
        } else {
            QMessageBox::warning(this,"","You don't have enugh coins!");
        }

    }
    else if (ui->H2_3_pushButton->styleSheet() == "background-color: rgb(0, 85, 0);"){

        Selection *se = new Selection;
        se->show();

    }else if (ui->H2_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){

        handle *hc = new handle;
        hc->show();

    }else if (ui->H2_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/sheep_f.png);") {

    }else if (ui->H2_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/hen_f2.png);") {

    }else if (ui->H2_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/wheat.png);") {

    }else if (ui->H2_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/corn.png);") {

    }

}


void GameFrame::on_H2_4_pushButton_clicked()
{
    if (ui->H2_4_pushButton->styleSheet() == "background-color: rgb(81, 41, 0);"){

        if (coins >= 3) {
            ui->H2_4_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
            coins -= 3;
            ui->coins_label->setNum(coins);
        } else {
            QMessageBox::warning(this,"","You don't have enugh coins!");
        }

    }
    else if (ui->H2_4_pushButton->styleSheet() == "background-color: rgb(0, 85, 0);"){

        Selection *se = new Selection;
        se->show();

    }else if (ui->H2_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){

        handle *hc = new handle;
        hc->show();

    }else if (ui->H2_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/sheep_f.png);") {

    }else if (ui->H2_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/hen_f2.png);") {

    }else if (ui->H2_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/wheat.png);") {

    }else if (ui->H2_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/corn.png);") {

    }
}


void GameFrame::on_H3_1_pushButton_clicked()
{
    if (ui->H3_1_pushButton->styleSheet() == "background-color: rgb(81, 41, 0);"){

        if (coins >= 3) {
            ui->H3_1_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
            coins -= 3;
            ui->coins_label->setNum(coins);
        } else {
            QMessageBox::warning(this,"","You don't have enugh coins!");
        }

    }
    else if (ui->H3_1_pushButton->styleSheet() == "background-color: rgb(0, 85, 0);"){

        Selection *se = new Selection;
        se->show();

    }else if (ui->H3_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){

        handle *hc = new handle;
        hc->show();

    }else if (ui->H3_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/sheep_f.png);") {

    }else if (ui->H3_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/hen_f2.png);") {

    }else if (ui->H3_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/wheat.png);") {

    }else if (ui->H3_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/corn.png);") {

    }

}


void GameFrame::on_H3_2_pushButton_clicked()
{
    if (ui->H3_2_pushButton->styleSheet() == "background-color: rgb(81, 41, 0);"){

        if (coins >= 3) {
            ui->H3_2_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
            coins -= 3;
            ui->coins_label->setNum(coins);
        } else {
            QMessageBox::warning(this,"","You don't have enugh coins!");
        }

    }
    else if (ui->H3_2_pushButton->styleSheet() == "background-color: rgb(0, 85, 0);"){

        Selection *se = new Selection;
        se->show();

    }else if (ui->H3_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){

        handle *hc = new handle;
        hc->show();

    }else if (ui->H3_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/sheep_f.png);") {

    }else if (ui->H3_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/hen_f2.png);") {

    }else if (ui->H3_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/wheat.png);") {

    }else if (ui->H3_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/corn.png);") {

    }

}


void GameFrame::on_H3_3_pushButton_clicked()
{
    if (ui->H3_3_pushButton->styleSheet() == "background-color: rgb(81, 41, 0);"){

        if (coins >= 3) {
            ui->H3_3_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
            coins -= 3;
            ui->coins_label->setNum(coins);
        } else {
            QMessageBox::warning(this,"","You don't have enugh coins!");
        }

    }
    else if (ui->H3_3_pushButton->styleSheet() == "background-color: rgb(0, 85, 0);"){

        Selection *se = new Selection;
        se->show();

    }else if (ui->H3_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){

        handle *hc = new handle;
        hc->show();

    }else if (ui->H3_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/sheep_f.png);") {

    }else if (ui->H3_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/hen_f2.png);") {

    }else if (ui->H3_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/wheat.png);") {

    }else if (ui->H3_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/corn.png);") {

    }

}


void GameFrame::on_H3_4_pushButton_clicked()
{
    if (ui->H3_4_pushButton->styleSheet() == "background-color: rgb(81, 41, 0);"){

        if (coins >= 3) {
            ui->H3_4_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
            coins -= 3;
            ui->coins_label->setNum(coins);
        } else {
            QMessageBox::warning(this,"","You don't have enugh coins!");
        }

    }
    else if (ui->H3_4_pushButton->styleSheet() == "background-color: rgb(0, 85, 0);"){

        Selection *se = new Selection;
        se->show();

    }else if (ui->H3_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){

        handle *hc = new handle;
        hc->show();

    }else if (ui->H3_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/sheep_f.png);") {

    }else if (ui->H3_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/hen_f2.png);") {

    }else if (ui->H3_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/wheat.png);") {

    }else if (ui->H3_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/corn.png);") {

    }

}


void GameFrame::on_H4_1_pushButton_clicked()
{
    if (ui->H4_1_pushButton->styleSheet() == "background-color: rgb(81, 41, 0);"){

        if (coins >= 3) {
            ui->H4_1_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
            coins -= 3;
            ui->coins_label->setNum(coins);
        } else {
            QMessageBox::warning(this,"","You don't have enugh coins!");
        }

    }
    else if (ui->H4_1_pushButton->styleSheet() == "background-color: rgb(0, 85, 0);"){

        Selection *se = new Selection;
        se->show();

    }else if (ui->H4_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){

        handle *hc = new handle;
        hc->show();

    }else if (ui->H4_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/sheep_f.png);") {

    }else if (ui->H4_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/hen_f2.png);") {

    }else if (ui->H4_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/wheat.png);") {

    }else if (ui->H4_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/corn.png);") {

    }

}


void GameFrame::on_H4_2_pushButton_clicked()
{
    if (ui->H4_2_pushButton->styleSheet() == "background-color: rgb(81, 41, 0);"){

        if (coins >= 3) {
            ui->H4_2_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
            coins -= 3;
            ui->coins_label->setNum(coins);
        } else {
            QMessageBox::warning(this,"","You don't have enugh coins!");
        }

    }
    else if (ui->H4_2_pushButton->styleSheet() == "background-color: rgb(0, 85, 0);"){

        Selection *se = new Selection;
        se->show();

    }else if (ui->H4_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){

        handle *hc = new handle;
        hc->show();

    }else if (ui->H4_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/sheep_f.png);") {

    }else if (ui->H4_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/hen_f2.png);") {

    }else if (ui->H4_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/wheat.png);") {

    }else if (ui->H4_2_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/corn.png);") {

    }

}


void GameFrame::on_H4_3_pushButton_clicked()
{
    if (ui->H4_3_pushButton->styleSheet() == "background-color: rgb(81, 41, 0);"){

        if (coins >= 3) {
            ui->H4_3_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
            coins -= 3;
            ui->coins_label->setNum(coins);
        } else {
            QMessageBox::warning(this,"","You don't have enugh coins!");
        }

    }
    else if (ui->H4_3_pushButton->styleSheet() == "background-color: rgb(0, 85, 0);"){

        Selection *se = new Selection;
        se->show();

    }else if (ui->H4_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){

        handle *hc = new handle;
        hc->show();

    }else if (ui->H4_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/sheep_f.png);") {

    }else if (ui->H4_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/hen_f2.png);") {

    }else if (ui->H4_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/wheat.png);") {

    }else if (ui->H4_3_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/corn.png);") {

    }

}


void GameFrame::on_H4_4_pushButton_clicked()
{
    if (ui->H4_4_pushButton->styleSheet() == "background-color: rgb(81, 41, 0);"){

        if (coins >= 3) {
            ui->H4_4_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
            coins -= 3;
            ui->coins_label->setNum(coins);
        } else {
            QMessageBox::warning(this,"","You don't have enugh coins!");
        }

    }
    else if (ui->H4_4_pushButton->styleSheet() == "background-color: rgb(0, 85, 0);"){

        Selection *se = new Selection;
        se->show();

    }else if (ui->H4_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){

        handle *hc = new handle;
        hc->show();

    }else if (ui->H4_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/sheep_f.png);") {

    }else if (ui->H4_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/hen_f2.png);") {

    }else if (ui->H4_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/wheat.png);") {

    }else if (ui->H4_4_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/corn.png);") {

    }

}




