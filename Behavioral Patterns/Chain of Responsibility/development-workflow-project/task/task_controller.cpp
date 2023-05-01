#include "task_controller.h"
#include "task_handler/junior_developer_handler.h"
#include "task_handler/senior_developer_handler.h"
#include "task_handler/tech_lead_handler.h"

TaskController::TaskController()
{
    createHandlers();
}

void TaskController::createTask(QString description, TaskDifficultyLevel difficultyLevel)
{
    Task *task = new Task(description, difficultyLevel);

    juniorDeveloperHandler->handleTask(task);

}

void TaskController::createHandlers()
{
    juniorDeveloperHandler = new JuniorDeveloperHandler();
    seniorDeveloperHandler = new SeniorDeveloperHandler();
    techLeadHandler = new TechLeadHandler();

    juniorDeveloperHandler->setNextHandler(seniorDeveloperHandler);
    seniorDeveloperHandler->setNextHandler(techLeadHandler);

    connect(juniorDeveloperHandler, &TaskHandler::taskHandlerMessage,
            this, &TaskController::taskHandlerMessage);

    connect(seniorDeveloperHandler, &TaskHandler::taskHandlerMessage,
            this, &TaskController::taskHandlerMessage);

    connect(techLeadHandler, &TaskHandler::taskHandlerMessage,
            this, &TaskController::taskHandlerMessage);
}
