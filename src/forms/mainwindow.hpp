#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QString>
#include <QFileDialog>

#include "src/Executor/executor.hpp"

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
    void on_pushButton_urlSearch_clicked();

    void on_pushButton_Cut_clicked();

    void on_pushButton_browse_clicked();

    void on_checkBox_FromStart_stateChanged(int arg1);

    void on_checkBox_TillEnd_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_HPP
