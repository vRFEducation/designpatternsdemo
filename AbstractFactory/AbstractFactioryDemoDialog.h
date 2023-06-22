#ifndef ABSTRACTFACTIORYDEMODIALOG_H
#define ABSTRACTFACTIORYDEMODIALOG_H

#include "ShapeFactory.h"

#include <QDialog>

namespace Ui {
class AbstractFactioryDemoDialog;
}

class AbstractFactioryDemoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AbstractFactioryDemoDialog(QWidget *parent = nullptr);
    ~AbstractFactioryDemoDialog();

private slots:
    void on_btnRoundedShape_clicked();

    void on_btnNormalShape_clicked();

private:
    Ui::AbstractFactioryDemoDialog *ui;
    ShapeFactory *_shapeFactory;

    void drawShapes();
};

#endif // ABSTRACTFACTIORYDEMODIALOG_H
