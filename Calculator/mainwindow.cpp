#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    btn_1 = new QPushButton(this);
    btn_1->move(200,100);
    btn_1->resize(120,50);
    connect(this->btn_1,SIGNAL(clicked()), this , SLOT(on_btn_1_clicked()));
    btn_1->setText("3");

    btn_2 = new QPushButton(this);
    btn_2->move(100,100);
    btn_2->resize(120,50);
    connect(this->btn_2,SIGNAL(clicked()), this , SLOT(on_btn_2_clicked()));
    btn_2->setText("lov");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_1_clicked(){
    this->btn_1->setText("1");
}

void MainWindow::on_btn_2_clicked(){
    this->btn_2->setText("love");
}
