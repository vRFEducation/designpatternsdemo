#ifndef COMPOSITDEMODIALOG_H
#define COMPOSITDEMODIALOG_H

#include <QDialog>

namespace Ui {
class CompositDemoDialog;
}

class CompositDemoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CompositDemoDialog(QWidget *parent = nullptr);
    ~CompositDemoDialog();

private slots:
    void on_btnGetPrice_clicked();

private:
    Ui::CompositDemoDialog *ui;
};

#endif // COMPOSITDEMODIALOG_H
