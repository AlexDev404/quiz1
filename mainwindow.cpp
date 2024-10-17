#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
QString firstName;
QString lastName;
QString zipCode;
QString city;
QString details;

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

void MainWindow::on_firstName_editingFinished()
{
    firstName = ui->firstName->text();
}


void MainWindow::on_lastName_editingFinished()
{
    lastName = ui->lastName->text();
}


void MainWindow::on_zipCode_editingFinished()
{
    zipCode = ui->zipCode->text();
}


void MainWindow::on_city_editingFinished()
{
    city = ui->city->text();
}

void MainWindow::on_checkBox_toggled(bool checked)
{
    if(checked){
        ui->details->setPlainText(firstName + "\n" + lastName + "\n" + zipCode + "\n" + city);
    } else {
        ui->details->setPlainText("");
    }
}

