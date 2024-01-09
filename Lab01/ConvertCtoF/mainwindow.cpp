// mainwindow.cpp
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), prim(20) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_convertButton_clicked() {
    // Example slot connected to a button click
    prim.convertCtoF();
    ui->textEdit->setText(QString::fromStdString(prim.toString()));
}
