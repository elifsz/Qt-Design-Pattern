#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "view/create_task_widget.h"
#include "view/task_information_widget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    CreateTaskWidget *createTaskWidget;
    TaskInformationWidget *taskInformationWidget;
};
#endif // MAINWINDOW_H
