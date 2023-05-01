#ifndef SENIORDEVELOPERHANDLER_H
#define SENIORDEVELOPERHANDLER_H

#include "task_handler.h"

class SeniorDeveloperHandler : public TaskHandler
{
public:
    SeniorDeveloperHandler();

    // TaskHandler interface
public:
    virtual bool canHandleTask(Task *task) override;
    virtual void doHandleTask(Task *task) override;
};

#endif // SENIORDEVELOPERHANDLER_H
