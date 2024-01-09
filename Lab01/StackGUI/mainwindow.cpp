// mainwindow.cpp
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), array(new Array_Stack(5)) {
    ui->setupUi(this);

    // Connect signals and slots
    connect(ui->pushButton, SIGNAL(clicked(true)), this,SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_2, SIGNAL(clicked(true)), this,SLOT(on_pushButton_2_clicked()));
}

MainWindow::~MainWindow() {
    // Delete the stack when the window is destroyed
    delete array;
    delete ui;
}

void MainWindow::on_pushButton_clicked() {
    qDebug() << "Push button clicked!";
    QString inputText = ui->lineEdit->text();

    // Convert the text to an integer
    bool conversionOk;
    int inputValue = inputText.toInt(&conversionOk);
    if (conversionOk) {
        if (array->isfull()) {
           QMessageBox::information(this, "Full Stack", "Elemente FULL.");
        } else {
            array->push(inputValue);
            ui->listWidget->addItem(inputText);
        }
    }
}

void MainWindow::on_pushButton_2_clicked() {
    qDebug() << "Pop button clicked!";
    if (array->isempty()) {
       QMessageBox::information(this, "Empty Stack", "Nu exista elemente in stack.");
    } else {
        ui->listWidget->takeItem(ui->listWidget->count() - 1);
        array->pop();
    }
}
