#include "ibntoolmainwindow.h"
#include "ui_ibntoolmainwindow.h"

IBNToolMainWindow::IBNToolMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::IBNToolMainWindow)
{
    ui->setupUi(this);
}

IBNToolMainWindow::~IBNToolMainWindow()
{
    delete ui;
}


void IBNToolMainWindow::on_pushButton_clicked()
{

}


void IBNToolMainWindow::on_pushButton_batteryIBN_clicked()
{
    batterieIBN = new BatterieIBN(this);
    batterieIBN->show();
}

