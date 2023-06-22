#include "AbstractFactioryDemoDialog.h"
#include "FactoryProducer.h"
#include "ui_AbstractFactioryDemoDialog.h"

AbstractFactioryDemoDialog::AbstractFactioryDemoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AbstractFactioryDemoDialog)
{
    ui->setupUi(this);
    _shapeFactory = nullptr;
}

AbstractFactioryDemoDialog::~AbstractFactioryDemoDialog()
{
    delete ui;
}

void AbstractFactioryDemoDialog::on_btnRoundedShape_clicked()
{
    _shapeFactory = FactoryProducer::getFactory(true);
    drawShapes();
}


void AbstractFactioryDemoDialog::on_btnNormalShape_clicked()
{
    _shapeFactory = FactoryProducer::getFactory(false);
    drawShapes();
}

void AbstractFactioryDemoDialog::drawShapes()
{
    if (_shapeFactory != nullptr) {
        _shapeFactory->getRectangle()->draw();
        _shapeFactory->getSquare()->draw();
        _shapeFactory->getTriangle()->draw();
    }

}

