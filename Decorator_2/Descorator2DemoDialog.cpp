#include "CompressionDecorator.h"
#include "Descorator2DemoDialog.h"
#include "EncryptionDecorator.h"
#include "ui_Descorator2DemoDialog.h"

Descorator2DemoDialog::Descorator2DemoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Descorator2DemoDialog)
{
    ui->setupUi(this);
    _dataSource = new FileDataSource("a.txt");
}

Descorator2DemoDialog::~Descorator2DemoDialog()
{
    delete ui;
}

void Descorator2DemoDialog::on_btnWriteNormal_clicked()
{
    _dataSource->writeData(ui->lnData->text());
}


void Descorator2DemoDialog::on_btnReadNormal_clicked()
{
    ui->txtConsole->append(_dataSource->readData());
}


void Descorator2DemoDialog::on_btnWriteC_clicked()
{
    FileDataSource *fs = new FileDataSource("b.txt");
    CompressionDecorator *cs =  new CompressionDecorator(fs);
    cs->writeData(ui->lnData->text());
}


void Descorator2DemoDialog::on_btnReadC_clicked()
{
    FileDataSource *fs = new FileDataSource("b.txt");
    CompressionDecorator *cs =  new CompressionDecorator(fs);

    ui->txtConsole->append(cs->readData());

}


void Descorator2DemoDialog::on_btnWriteCE_clicked()
{
    FileDataSource *fs = new FileDataSource("c.txt");
    CompressionDecorator *cs =  new CompressionDecorator(fs);
    EncryptionDecorator *es =  new EncryptionDecorator(cs);
    es->writeData(ui->lnData->text());

}


void Descorator2DemoDialog::on_btnReadEC_clicked()
{
    FileDataSource *fs = new FileDataSource("c.txt");
    CompressionDecorator *cs =  new CompressionDecorator(fs);
    EncryptionDecorator *es =  new EncryptionDecorator(cs);

    ui->txtConsole->append(es->readData());

}

