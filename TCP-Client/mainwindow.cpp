#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Giris_clicked()
{

 QString KullaniciAdi = ui -> lineEdit -> text ();
 QString Parola = ui ->lineEdit_2 -> text();

 if (KullaniciAdi == "tolunayelibol" && Parola == "123456")
 {
     QMessageBox:: information(this, "Giris","Hosgeldiniz");
     hide();
     dialog = new Dialog(this);
     dialog -> show();

 }
else
 {

       QMessageBox:: information(this, "Giris","Kullanici Adi veya Parola Hatali");
 }

}
