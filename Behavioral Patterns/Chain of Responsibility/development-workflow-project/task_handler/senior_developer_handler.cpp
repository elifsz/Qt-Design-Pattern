#include "senior_developer_handler.h"

SeniorDeveloperHandler::SeniorDeveloperHandler()
{

}

bool SeniorDeveloperHandler::canHandleTask(Task *task)
{
    return task->getDifficultyLevel() == TaskDifficultyLevel::MEDIUM;
}

void SeniorDeveloperHandler::doHandleTask(Task *task)
{
    emit taskHandlerMessage("Task " + task->getDescription() + " handled by Senior Dev.");
}
