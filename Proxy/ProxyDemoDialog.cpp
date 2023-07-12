#include "ProxyDemoDialog.h"
#include "ui_ProxyDemoDialog.h"


ProxyDemoDialog::ProxyDemoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProxyDemoDialog)
{
    ui->setupUi(this);
    serivce = new ProxyInternet();

}

ProxyDemoDialog::~ProxyDemoDialog()
{
    delete ui;
}

void ProxyDemoDialog::on_btnDirectCall_clicked()
{
    Internet *serivce = new RealInternet();
    ui->txtConsole->append(serivce->connectTo(ui->lnUrl->text()));

}


void ProxyDemoDialog::on_btnProxyCall_clicked()
{
    ui->txtConsole->append(serivce->connectTo(ui->lnUrl->text()));
}

