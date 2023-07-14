#include "FacadeDemoDialog.h"
#include "SystemFacade.h"
#include "ui_FacadeDemoDialog.h"

FacadeDemoDialog::FacadeDemoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FacadeDemoDialog)
{
    ui->setupUi(this);
}

FacadeDemoDialog::~FacadeDemoDialog()
{
    delete ui;
}

void FacadeDemoDialog::on_btnTurnOn_clicked()
{
    SystemFacade system;
    auto isTurnedOn = system.turnOn();
    if (isTurnedOn) {
        ui->txtConsole->setText("System Turned On");
    } else {
        ui->txtConsole->setText("Something went wrong");
    }
}

