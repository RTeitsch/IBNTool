#ifndef IBNTOOLMAINWINDOW_H
#define IBNTOOLMAINWINDOW_H

#include <QMainWindow>
#include "batterieibn.h"

QT_BEGIN_NAMESPACE
namespace Ui { class IBNToolMainWindow; }
QT_END_NAMESPACE

class IBNToolMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    IBNToolMainWindow(QWidget *parent = nullptr);
    ~IBNToolMainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_batteryIBN_clicked();

private:
    Ui::IBNToolMainWindow *ui;
    BatterieIBN *batterieIBN;
};
#endif // IBNTOOLMAINWINDOW_H
