#ifndef SINGLETONDEMODIALOG_H
#define SINGLETONDEMODIALOG_H

#include "Logger.h"
#include "SingletonAnotherDialog.h"

#include <QDialog>

namespace Ui {
class SingletonDemoDialog;
}

class SingletonDemoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SingletonDemoDialog(QWidget *parent = nullptr);
    ~SingletonDemoDialog();

private slots:
    void on_btnAction1_clicked();

    void on_btnDialog2_clicked();

private:
    Ui::SingletonDemoDialog *ui;
    Logger *_logger;
};

#endif // SINGLETONDEMODIALOG_H
