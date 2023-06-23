#ifndef BUILDER2DEMODIALOG_H
#define BUILDER2DEMODIALOG_H

#include "CivilEngineer.h"

#include <QDialog>

namespace Ui {
class Builder2DemoDialog;
}

class Builder2DemoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit Builder2DemoDialog(QWidget *parent = nullptr);
    ~Builder2DemoDialog();

private slots:
    void on_btnIglooHouse_clicked();

    void on_btnTipiHouse_clicked();

private:
    Ui::Builder2DemoDialog *ui;
    CivilEngineer *_engineer;
};

#endif // BUILDER2DEMODIALOG_H
