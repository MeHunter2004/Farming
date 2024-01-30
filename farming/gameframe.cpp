#include "gameframe.h"
#include "ui_gameframe.h"
#include "selection.h"
#include "handle.h"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "shop.h"

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
        ui->H1_1_pushButton->setStyleSheet("background-color: rgb(0, 85, 0);");
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
    ui->Name_lineEdit->text();

}



void GameFrame::on_shop_pushButton_clicked()
{
    shop *sh = new shop;
    sh->show();
}

