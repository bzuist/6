#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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
    QMessageBox::critical(this, "Ошибка", "Произошла потеря данных");
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::warning(this, "Предупреждение", "Может произойти потеря данных");
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(this, "Информация", "BTS — южнокорейский бой-бэнд, сформированный в 2013 году компанией Big Hit Entertainment. Коллектив состоит из семи участников: RM, Джина, Шуги, Джей-Хоупа, Чимина, Ви и Чонгука.");
}

