#ifndef BUILDER1DEMODIALOG_H
#define BUILDER1DEMODIALOG_H

#include "MealBuilder.h"

#include <QDialog>

namespace Ui {
class Builder1DemoDialog;
}

class Builder1DemoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit Builder1DemoDialog(QWidget *parent = nullptr);
    ~Builder1DemoDialog();

private slots:
    void on_btnVegMeal_clicked();

    void on_btnNonVegMeal_clicked();

private:
    Ui::Builder1DemoDialog *ui;

    MealBuilder _builder;
};

#endif // BUILDER1DEMODIALOG_H
