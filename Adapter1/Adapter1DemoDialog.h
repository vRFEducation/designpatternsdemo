#ifndef ADAPTER1DEMODIALOG_H
#define ADAPTER1DEMODIALOG_H

#include <QDialog>

namespace Ui {
class Adapter1DemoDialog;
}

class Adapter1DemoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit Adapter1DemoDialog(QWidget *parent = nullptr);
    ~Adapter1DemoDialog();

private slots:
    void on_btnDirectCall_clicked();

    void on_btnAdapterCall_clicked();

private:
    Ui::Adapter1DemoDialog *ui;
};

#endif // ADAPTER1DEMODIALOG_H
