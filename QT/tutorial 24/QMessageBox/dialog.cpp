#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    //info
    QMessageBox::information(this,"title","text");
}

void Dialog::on_pushButton_2_clicked()
{
    //question

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"title","iti plac cainii?",QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::Yes)
    {
        QMessageBox::information(this,"title","iti plac cainii");

    }
    else
    {
        QMessageBox::information(this,"title","nu iti plac cainii");

    }

}

void Dialog::on_pushButton_3_clicked()
{

    //warning
    QMessageBox::warning(this,"title","text");

}

void Dialog::on_pushButton_4_clicked()
{
    //custom
    QMessageBox::question(this,"My Title","My text",QMessageBox::YesToAll | QMessageBox::Yes | QMessageBox::No | QMessageBox::NoAll);
}
