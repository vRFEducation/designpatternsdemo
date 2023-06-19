#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <Singleton/SingletonDemoDialog.h>

#include <FactoryMethod1/FactoryMethodClient.h>

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

