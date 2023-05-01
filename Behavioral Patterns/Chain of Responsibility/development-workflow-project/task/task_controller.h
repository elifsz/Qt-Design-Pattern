#ifndef TASKCONTROLLER_H
#define TASKCONTROLLER_H

#include <QObject>
#include "task.h"
#include "task_handler/task_handler.h"

class TaskController : public QObject
{
    Q_OBJECT
public:
    TaskController();

    void createTask(QString description, TaskDifficultyLevel difficultyLevel);

private:
    TaskHandler *juniorDeveloperHandler;
    TaskHandler *seniorDeveloperHandler;
    TaskHandler *techLeadHandler;

    void createHandlers();

signals:
    void taskHandlerMessage(QString message);
};

#endif // TASKCONTROLLER_H
