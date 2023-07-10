#include "Adapter1DemoDialog.h"
#include "StockAdapter.h"
#include "StockInformation.h"
#include "ui_Adapter1DemoDialog.h"

Adapter1DemoDialog::Adapter1DemoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adapter1DemoDialog)
{
    ui->setupUi(this);
}

Adapter1DemoDialog::~Adapter1DemoDialog()
{
    delete ui;
}

void Adapter1DemoDialog::on_btnDirectCall_clicked()
{
    StockInformation *target = new StockInformation();
    ui->txtConsole->setText(target->getInformation("STK01"));
}


void Adapter1DemoDialog::on_btnAdapterCall_clicked()
{
    StockInformation *target = new StockAdapter();
    ui->txtConsole->setText(target->getInformation("STK01"));
}

