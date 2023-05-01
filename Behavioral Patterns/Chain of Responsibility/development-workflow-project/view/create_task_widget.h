#ifndef CREATETASKWIDGET_H
#define CREATETASKWIDGET_H

#include <QObject>
#include <QtWidgets>
#include <QWidget>
#include "task/task_controller.h"

class CreateTaskWidget : public QWidget
{
    Q_OBJECT
public:
    CreateTaskWidget(QWidget *parent);

private:
    QLineEdit *taskDescriptionEdit;
    QComboBox *taskDifficultyLevelComboBox;
    QPushButton *createTaskButton;

    TaskController *taskController;

public slots:
    void onCreateTaskButtonClicked();

signals:
    void handleTask(QString message);
};

#endif // CREATETASKWIDGET_H
