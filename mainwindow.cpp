#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <Singleton/SingletonDemoDialog.h>

#include <FactoryMethod1/FactoryMethodClient.h>

#include <FactoryMethod2/FactoryMethod2Client.h>

#include <AbstractFactory/AbstractFactioryDemoDialog.h>
#include <Adapter1/Adapter1DemoDialog.h>
#include <Builder1/Builder1DemoDialog.h>
#include <Builder2/Builder2DemoDialog.h>
#include <Composite/CompositDemoDialog.h>
#include <Decorator/DecoratorDemoDialog.h>
#include <Decorator_2/Descorator2DemoDialog.h>
#include <Proxy/ProxyDemoDialog.h>

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


void MainWindow::on_btnBuilder2_clicked()
{
    Builder2DemoDialog dlg;
    dlg.exec();

}


void MainWindow::on_btnComposite_clicked()
{
    CompositDemoDialog dlg;
    dlg.exec();

}


void MainWindow::on_btnAdapter1_clicked()
{
    Adapter1DemoDialog dlg;
    dlg.exec();
}


void MainWindow::on_btnProxy_clicked()
{
    ProxyDemoDialog dlg;
    dlg.exec();
}


void MainWindow::on_btnDecorator_clicked()
{
    DecoratorDemoDialog dlg;
    dlg.exec();
}


void MainWindow::on_btnDecorator_2_clicked()
{
    Descorator2DemoDialog dlg;
    dlg.exec();

}

