#include "tech_lead_handler.h"

TechLeadHandler::TechLeadHandler()
{

}

bool TechLeadHandler::canHandleTask(Task *task)
{
    return task->getDifficultyLevel() == TaskDifficultyLevel::HARD;
}

void TechLeadHandler::doHandleTask(Task *task)
{
    emit taskHandlerMessage("Task " + task->getDescription() + " handled by Tech Lead");
}
