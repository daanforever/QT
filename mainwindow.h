#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include "sort.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonBubble_clicked();

private:
    Ui::MainWindow *ui;
    QString str;
    QString result;
    MySort *sort;
    QTime timer;
    int elapsed;

};

#endif // MAINWINDOW_H
