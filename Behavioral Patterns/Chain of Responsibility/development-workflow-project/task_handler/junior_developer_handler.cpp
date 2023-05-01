#include "junior_developer_handler.h"

JuniorDeveloperHandler::JuniorDeveloperHandler()
{

}

bool JuniorDeveloperHandler::canHandleTask(Task *task)
{
    return task->getDifficultyLevel() == TaskDifficultyLevel::EASY;
}

void JuniorDeveloperHandler::doHandleTask(Task *task)
{
    emit taskHandlerMessage("Task " + task->getDescription() + " handled by Junior Dev.");
}
