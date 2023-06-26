#include "Box.h"
#include "CompositDemoDialog.h"
#include "ProductLeaf.h"
#include "ui_CompositDemoDialog.h"

CompositDemoDialog::CompositDemoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CompositDemoDialog)
{
    ui->setupUi(this);
}

CompositDemoDialog::~CompositDemoDialog()
{
    delete ui;
}

void CompositDemoDialog::on_btnGetPrice_clicked()
{
    Component *mainBox = new Box();
    Component *box1 = new Box();
    Component *box2 = new Box();
    Component *p1 = new ProductLeaf(10);

    mainBox->add(box1);
    mainBox->add(box2);
    mainBox->add(p1);

    Component *p2 = new ProductLeaf(20);
    box1->add(p2);

    Component *box2_1 = new Box();
    Component *box2_2 = new Box();
    box2->add(box2_1);
    box2->add(box2_2);

    Component *p3 = new ProductLeaf(30);
    Component *p4 = new ProductLeaf(40);
    Component *p5 = new ProductLeaf(50);

    box2_1->add(p3);
    box2_1->add(p4);
    box2_2->add(p5);

    qDebug() << mainBox->price();






}

