#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void onchkbx_clicked();

    void on_chkbx_1_clicked();

    void on_chkbx_2_clicked();

    void on_chkbx_3_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
