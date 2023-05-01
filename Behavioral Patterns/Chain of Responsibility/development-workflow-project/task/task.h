#ifndef TASK_H
#define TASK_H

#include <QObject>

enum TaskDifficultyLevel
{
    EASY,
    MEDIUM,
    HARD
};


class Task
{
public:
    Task(QString description, TaskDifficultyLevel difficultyLevel);

    QString getDescription();

    TaskDifficultyLevel getDifficultyLevel();

private:

    QString description;
    TaskDifficultyLevel difficultyLevel;

};



#endif // TASK_H
