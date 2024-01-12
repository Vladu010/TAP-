#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtGui>


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->progressBar->setValue(ui->horizontalSlider->value());

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
}

Dialog::~Dialog()
{
    delete ui;
}

