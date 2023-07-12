#ifndef PROXYDEMODIALOG_H
#define PROXYDEMODIALOG_H

#include <QDialog>
#include <Proxy/Internet.h>
#include <Proxy/ProxyInternet.h>
#include <Proxy/RealInternet.h>


namespace Ui {
class ProxyDemoDialog;
}

class ProxyDemoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProxyDemoDialog(QWidget *parent = nullptr);
    ~ProxyDemoDialog();

private slots:
    void on_btnDirectCall_clicked();

    void on_btnProxyCall_clicked();

private:
    Ui::ProxyDemoDialog *ui;
    Internet *serivce;
};

#endif // PROXYDEMODIALOG_H
