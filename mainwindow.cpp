#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->groupBox->setTitle("Настройки");

    ui->rB_Button_1->setText("Кнопка 1");
    ui->rB_Button_2->setText("Кнопка 2");

    for (int i = 1; i <=10; i++) {

        ui->cB_List->addItem("Элемент - " + QString::number(i));
    }

    ui->prB_Bar->setMinimum(0);
    ui->prB_Bar->setMaximum(10);
    ui->prB_Bar->setValue(0);

    ui->pB_Toggle->setText("Выполнить");
    ui->pB_Toggle->setCheckable(true);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pB_Toggle_clicked() {


    if (ui->prB_Bar->value() == 10) {

        ui->prB_Bar->setValue(0);
    }
    else {

        ui->prB_Bar->setValue(ui->prB_Bar->value() + 1);
    }
}
