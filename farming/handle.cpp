#include "handle.h"
#include "ui_handle.h"

handle::handle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::handle)
{
    ui->setupUi(this);
}

handle::~handle()
{
    delete ui;
}
