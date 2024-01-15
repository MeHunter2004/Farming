#include "gameframe.h"
#include "ui_gameframe.h"
#include "selection.h"

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
    Selection *s = new Selection;
    s->show();
}

