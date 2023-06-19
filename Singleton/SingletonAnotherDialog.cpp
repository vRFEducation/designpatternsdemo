#include "SingletonAnotherDialog.h"
#include "ui_SingletonAnotherDialog.h"

SingletonAnotherDialog::SingletonAnotherDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SingletonAnotherDialog)
{
    ui->setupUi(this);
    _logger = Logger::instance();
}

SingletonAnotherDialog::~SingletonAnotherDialog()
{
    delete ui;
}

void SingletonAnotherDialog::on_btnAction2_clicked()
{
    qDebug() << "Action 2 Clicked...";
    _logger->log("Action 2");
}

