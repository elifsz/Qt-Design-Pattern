#ifndef TECHLEADHANDLER_H
#define TECHLEADHANDLER_H

#include "task_handler.h"

class TechLeadHandler : public TaskHandler
{
public:
    TechLeadHandler();

    // TaskHandler interface
public:
    virtual bool canHandleTask(Task *task) override;
    virtual void doHandleTask(Task *task) override;
};

#endif // TECHLEADHANDLER_H
