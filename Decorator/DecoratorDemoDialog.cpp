#include "DecoratorDemoDialog.h"
#include "FacebookDecorator.h"
#include "Notifier.h"
#include "SMSDecorator.h"
#include "SlackDecorator.h"
#include "ui_DecoratorDemoDialog.h"

DecoratorDemoDialog::DecoratorDemoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DecoratorDemoDialog)
{
    ui->setupUi(this);
}

DecoratorDemoDialog::~DecoratorDemoDialog()
{
    delete ui;
}

void DecoratorDemoDialog::on_btnN_clicked()
{
    Notifier *notif = new Notifier();
    ui->txtConsole->append(notif->sendMessage("MSG N"));
}


void DecoratorDemoDialog::on_btnNS_clicked()
{
    Notifier *notif = new Notifier();
    auto *sms = new SMSDecorator(notif);
    ui->txtConsole->append(sms->sendMessage("MSG NS"));

}


void DecoratorDemoDialog::on_btnNF_clicked()
{
    Notifier *notif = new Notifier();
    auto *facebook = new FacebookDecorator(notif);
    ui->txtConsole->append(facebook->sendMessage("MSG NF"));
}


void DecoratorDemoDialog::on_btnNSF_clicked()
{
    Notifier *notif = new Notifier();
    auto *sms = new SMSDecorator(notif);
    auto *facebook = new FacebookDecorator(sms);
    ui->txtConsole->append(facebook->sendMessage("MSG NSF"));
}


void DecoratorDemoDialog::on_btnNSFSL_clicked()
{
    Notifier *notif = new Notifier();
    auto *sms = new SMSDecorator(notif);
    auto *facebook = new FacebookDecorator(sms);
    auto *slack = new SlackDecorator(facebook);

    ui->txtConsole->append(slack->sendMessage("MSG NSFSL"));
}

