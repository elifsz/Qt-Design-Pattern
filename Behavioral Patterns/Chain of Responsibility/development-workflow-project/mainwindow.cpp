#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    createTaskWidget = new CreateTaskWidget(parent);
    taskInformationWidget = new TaskInformationWidget(parent);

    QWidget* centralWidget = new QWidget(this);
    QGridLayout* layout = new QGridLayout(centralWidget);
    layout->addWidget(createTaskWidget);
    layout->addWidget(taskInformationWidget);

    connect(createTaskWidget, &CreateTaskWidget::handleTask,
            taskInformationWidget, &TaskInformationWidget::setInformationToBrowser);

    setCentralWidget(centralWidget);
}

MainWindow::~MainWindow()
{
}

