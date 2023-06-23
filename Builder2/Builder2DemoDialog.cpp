#include "Builder2DemoDialog.h"
#include "IglooHouseBuilder.h"
#include "TipiHouseBuilder.h"
#include "ui_Builder2DemoDialog.h"

Builder2DemoDialog::Builder2DemoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Builder2DemoDialog)
{
    ui->setupUi(this);
}

Builder2DemoDialog::~Builder2DemoDialog()
{
    delete ui;
}

void Builder2DemoDialog::on_btnIglooHouse_clicked()
{
    _engineer = new  CivilEngineer(new IglooHouseBuilder());
    auto house = _engineer->constructHouse();
    qDebug() << house->describe();
}


void Builder2DemoDialog::on_btnTipiHouse_clicked()
{
    _engineer = new  CivilEngineer(new TipiHouseBuilder());
    auto house = _engineer->constructHouse();
    qDebug() << house->describe();
}

