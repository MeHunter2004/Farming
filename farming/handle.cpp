#include "handle.h"
#include "ui_handle.h"
#include "Animal.h"
handle::handle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::handle)
{
    ui->setupUi(this);

    ui->workers_number_label->setNum(workerCount);
}

handle::~handle()
{
    delete ui;
}

void handle::on_worker_pushButton_clicked()
{
    workerCount--;
}

