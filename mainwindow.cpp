#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMessageBox::warning(0,"hahaha","sadsad");
}

MainWindow::~MainWindow()
{
    delete ui;
}
