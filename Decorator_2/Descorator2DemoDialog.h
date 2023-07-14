#ifndef DESCORATOR2DEMODIALOG_H
#define DESCORATOR2DEMODIALOG_H

#include "FileDataSource.h"

#include <QDialog>

namespace Ui {
class Descorator2DemoDialog;
}

class Descorator2DemoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit Descorator2DemoDialog(QWidget *parent = nullptr);
    ~Descorator2DemoDialog();

private slots:
    void on_btnWriteNormal_clicked();

    void on_btnReadNormal_clicked();

    void on_btnWriteC_clicked();

    void on_btnReadC_clicked();

    void on_btnWriteCE_clicked();

    void on_btnReadEC_clicked();

private:
    Ui::Descorator2DemoDialog *ui;
    FileDataSource *_dataSource;

};

#endif // DESCORATOR2DEMODIALOG_H
