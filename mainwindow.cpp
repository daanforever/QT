#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sort.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonBubble_clicked()
{
    timer.start();
    str = ui->lineEdit->text();             // get text from lineEdit
    sort = new MySort(str);                 // create new object sort
    result = sort->bubble();                // call sort method bubble
    ui->lineEdit_result->setText(result);   // set result in lineEdit_result.text
    elapsed = timer.elapsed();
    ui->lineEdit_bubble->setText(QString::number(elapsed) + " ms");
}




