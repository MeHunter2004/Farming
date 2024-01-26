#include "gameframe.h"
#include "ui_gameframe.h"
#include "selection.h"
#include "handle.h"

GameFrame::GameFrame(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::GameFrame)
{
    ui->setupUi(this);
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
        Selection *s = new Selection;
        s->show();
    }else if (ui->H1_1_pushButton->styleSheet() == "image: url(:/new/prefix1/images12/cow_f.png);"){
        handle *hc = new handle;
        hc->show();
    }


}

// In page1.cpp
void GameFrame::changePushButtonColor(int index)
{
    QPushButton* button = buttons[index];
    button->setStyleSheet("background-color: red");
}

