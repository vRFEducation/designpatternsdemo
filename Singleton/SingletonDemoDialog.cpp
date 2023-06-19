#include "SingletonDemoDialog.h"
#include "ui_SingletonDemoDialog.h"

SingletonDemoDialog::SingletonDemoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SingletonDemoDialog)
{
    ui->setupUi(this);
    _logger = Logger::instance();
}

SingletonDemoDialog::~SingletonDemoDialog()
{
    delete ui;
}

void SingletonDemoDialog::on_btnAction1_clicked()
{
    ui->lstConsole->addItem("Action 1 Clicked...");
    _logger->log("Action 1");

}


void SingletonDemoDialog::on_btnDialog2_clicked()
{
    SingletonAnotherDialog _dlg;
    _dlg.exec();
    ui->lstConsole->addItem("Dialog 2 Closed...");
    _logger->log("Dialog Closed");

}

