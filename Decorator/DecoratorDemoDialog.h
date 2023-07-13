#ifndef DECORATORDEMODIALOG_H
#define DECORATORDEMODIALOG_H

#include <QDialog>

namespace Ui {
class DecoratorDemoDialog;
}

class DecoratorDemoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DecoratorDemoDialog(QWidget *parent = nullptr);
    ~DecoratorDemoDialog();

private slots:
    void on_btnN_clicked();

    void on_btnNS_clicked();

    void on_btnNF_clicked();

    void on_btnNSF_clicked();

    void on_btnNSFSL_clicked();

private:
    Ui::DecoratorDemoDialog *ui;
};

#endif // DECORATORDEMODIALOG_H
