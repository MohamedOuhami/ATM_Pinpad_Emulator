#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "eppcontroller.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    // Instantiate a new EPPController

    QPushButton* buttons[10] = {
        ui->button0, ui->button1, ui->button2, ui->button3, ui->button4,ui->button5,
        ui->button6, ui->button7, ui->button8,ui->button9
};

    for (int i = 0; i < 10; ++i){
    // Connect each number in the PIN pad to add its value to the pin
    connect(
        buttons[i],
        &QPushButton::clicked,
        this,
        [this,i](){
            this->addDigit(entered_pin,to_string(i));
            ui->dataResponse->setText("Pressed " + QString::number(i) + " on the PIN Pad. Now, the plain PIN is " + QString::fromStdString(entered_pin));
        }
        );
    }

    connect(
        ui->button00,
        &QPushButton::clicked,
        this,
        [this](){
            this->addDigit(entered_pin,"00");
            ui->dataResponse->setText("Pressed 00 on the PIN Pad. Now, the plain PIN is " + QString::fromStdString(entered_pin));
        }
        );


    connect(
        ui->buttonEnter,
        &QPushButton::clicked,
        this,
        [this](){
            string finalResult = eppController.constructPIN(entered_pin);
            ui->dataResponse->setText(QString::fromStdString(finalResult));
        });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addDigit(string& entered_pin,const string& digit){

    entered_pin += digit;
}
