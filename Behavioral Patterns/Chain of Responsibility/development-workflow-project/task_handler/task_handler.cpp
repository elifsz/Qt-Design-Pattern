#include "task_handler.h"

TaskHandler::TaskHandler()
{

}

void TaskHandler::setNextHandler(TaskHandler *nextHandler)
{
    this->nextHandler = nextHandler;
}

void TaskHandler::handleTask(Task *task)
{
    if(this->canHandleTask(task)) {
        this->doHandleTask(task);
    }else if(this->nextHandler != nullptr) {
        this->nextHandler->handleTask(task);
    }else {
        emit taskHandlerMessage("No handler found for task: " + task->getDescription());
    }
}
