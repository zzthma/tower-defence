#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <dialog.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    MainWindow *a;
    Dialog *s=new Dialog;
    this->hide();
    s->show();
}
void MainWindow::paintEvent(QPaintEvent*){
    QPainter painter(this);
    painter.drawPixmap(0,0,QPixmap(":/1.jpg"));
}
