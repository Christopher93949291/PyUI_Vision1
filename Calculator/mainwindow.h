#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

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
    void on_btn_1_clicked();
    void on_btn_2_clicked();

private:
    Ui::MainWindow *ui;
    QPushButton *btn_2;
    QPushButton *btn_1;
};
#endif // MAINWINDOW_H
