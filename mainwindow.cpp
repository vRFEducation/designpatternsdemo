#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <Singleton/SingletonDemoDialog.h>

#include <FactoryMethod1/FactoryMethodClient.h>

#include <FactoryMethod2/FactoryMethod2Client.h>

#include <AbstractFactory/AbstractFactioryDemoDialog.h>
#include <Builder1/Builder1DemoDialog.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnSingleton_clicked()
{
    SingletonDemoDialog dlg;
    dlg.exec();

}


void MainWindow::on_btnFactoryMethod1_clicked()
{
    FactoryMethodClient client;
}


void MainWindow::on_btnFactoryMethod2_clicked()
{
    FactoryMethod2Client client;
}


void MainWindow::on_btnAbstractFactory_clicked()
{
    AbstractFactioryDemoDialog dlg;
    dlg.exec();
}


void MainWindow::on_btnBuilder_clicked()
{
    Builder1DemoDialog dlg;
    dlg.exec();

}

