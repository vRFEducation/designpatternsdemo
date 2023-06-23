#include "Builder1DemoDialog.h"
#include "ui_Builder1DemoDialog.h"

Builder1DemoDialog::Builder1DemoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Builder1DemoDialog)
{
    ui->setupUi(this);
}

Builder1DemoDialog::~Builder1DemoDialog()
{
    delete ui;
}

void Builder1DemoDialog::on_btnVegMeal_clicked()
{
    auto meal = _builder.prepareVegMeal();
    meal->showItems();
}


void Builder1DemoDialog::on_btnNonVegMeal_clicked()
{
    auto meal = _builder.prepareNonVegMeal();
    meal->showItems();
}

