#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "eppcontroller.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    EPPController eppController;

private:
    Ui::MainWindow *ui;
    string entered_pin;

public slots:
    void addDigit(string& entered_pin,const string& digit);
};


#endif // MAINWINDOW_H
