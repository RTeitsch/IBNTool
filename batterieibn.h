#ifndef BATTERIEIBN_H
#define BATTERIEIBN_H

#include <QDialog>

namespace Ui {
class BatterieIBN;
}

class BatterieIBN : public QDialog
{
    Q_OBJECT

public:
    explicit BatterieIBN(QWidget *parent = nullptr);
    ~BatterieIBN();

private slots:
    void on_pushButton_clicked();

private:
    Ui::BatterieIBN *ui;
};

#endif // BATTERIEIBN_H
