#ifndef JUNIORDEVELOPERHANDLER_H
#define JUNIORDEVELOPERHANDLER_H

#include "task_handler.h"

class JuniorDeveloperHandler : public TaskHandler
{
public:
    JuniorDeveloperHandler();

    // TaskHandler interface
public:
    virtual bool canHandleTask(Task *task) override;
    virtual void doHandleTask(Task *task) override;
};

#endif // JUNIORDEVELOPERHANDLER_H
