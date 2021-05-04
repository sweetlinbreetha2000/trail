#include "widget.h"
#include "ui_widget.h"
#include<QButtonGroup>
#include<QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QButtonGroup *button=new QButtonGroup(this);
    button->addButton(ui->checkBox);
     button->addButton(ui->checkBox_2);
      button->addButton(ui->checkBox_3);
      button->setExclusive(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    //EXCLUSIVE
    if(ui->checkBox->isChecked())
    {
        qDebug()<<"Windows checkbox is checked";
    }
    else
    {
        qDebug()<<"Windows checkbox is Unchecked";
    }
}

void Widget::on_pushButton_2_clicked()
{
    //NON-EXCLUSIVE
    if(ui->checkBox->isChecked())
    {
        ui->checkBox->setChecked(false);
    }
    else
    {
        ui->checkBox->setChecked(true);
    }
}
