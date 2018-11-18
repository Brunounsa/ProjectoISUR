#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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

void MainWindow::on_pushButton_clicked()
{
    QString user = ui->lineEdit_username->text();
    QString pass = ui->lineEdit_password->text();

    if(user == "user" && pass == "pass")
    {
        hide();
        WWindow = new workwindow(this);
        WWindow->show();
    }
    else
    {
        QMessageBox::warning(this,"Login","Incorrect");
    }
}
