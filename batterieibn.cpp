#include "batterieibn.h"
#include "ui_batterieibn.h"

BatterieIBN::BatterieIBN(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BatterieIBN)
{
    ui->setupUi(this);
}

BatterieIBN::~BatterieIBN()
{
    delete ui;
}

void BatterieIBN::on_pushButton_clicked()
{

}

