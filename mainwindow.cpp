#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    crearTabla();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::crearTabla()
{
    QListView *lista = new QListView(this);

    ui->listWidget->addItem("algo");


}
