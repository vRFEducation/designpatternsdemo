#ifndef FACADEDEMODIALOG_H
#define FACADEDEMODIALOG_H

#include <QDialog>

namespace Ui {
class FacadeDemoDialog;
}

class FacadeDemoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FacadeDemoDialog(QWidget *parent = nullptr);
    ~FacadeDemoDialog();


private slots:
    void on_btnTurnOn_clicked();

private:
    Ui::FacadeDemoDialog *ui;
};

#endif // FACADEDEMODIALOG_H
