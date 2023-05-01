#include "task.h"

Task::Task(QString description, TaskDifficultyLevel difficultyLevel)
{
    this->description = description;
    this->difficultyLevel = difficultyLevel;
}

QString Task::getDescription()
{
    return description;
}

TaskDifficultyLevel Task::getDifficultyLevel()
{
    return difficultyLevel;
}
