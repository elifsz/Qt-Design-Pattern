#ifndef TASKHANDLER_H
#define TASKHANDLER_H

#include "task/task.h"
#include <QObject>

class TaskHandler : public QObject
{
    Q_OBJECT
public:
    TaskHandler();

    void setNextHandler(TaskHandler *nextHandler);

    virtual bool canHandleTask(Task *task) = 0;
    virtual void doHandleTask(Task *task) = 0;

    void handleTask(Task *task);

private:
    TaskHandler *nextHandler;

signals:
    void taskHandlerMessage(QString message);
};

#endif // TASKHANDLER_H

