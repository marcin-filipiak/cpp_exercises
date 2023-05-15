#include "mainwindow.h"
#include "ui_mainwindow.h"

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

//progress bar
void MainWindow::on_pushButton_clicked()
{
    ui->progressBar->setValue(50);
}

//dodawanie na LCD
void MainWindow::on_pushButton_2_clicked()
{
    int x = ui->lineEditx->text().toInt();
    int y = ui->lineEdity->text().toInt();

    QString w = QString::number(x+y);
    ui->lcdNumber->display(w);
}

//witaj
void MainWindow::on_pushButton_3_clicked()
{
    QString imie = ui->lineEdit_imie->text();
    ui->label_witaj->setText("Witaj "+imie);
}

//checkbox
void MainWindow::on_pushButton_4_clicked()
{
    if (ui->checkBox->checkState()){
        ui->label_akceptacja->setText("Dziekuje");
    }
    else {
        ui->label_akceptacja->setText("musisz zaakceptowac");
    }
}
//radio
void MainWindow::on_pushButton_5_clicked()
{
    if (ui->radioButton_tak->isChecked()){
        ui->label_decyzja->setText("tak");
    }
    else {

        ui->label_decyzja->setText("nie");
    }
}
