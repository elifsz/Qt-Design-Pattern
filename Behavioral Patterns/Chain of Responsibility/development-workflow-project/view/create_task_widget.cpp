#include "create_task_widget.h"

CreateTaskWidget::CreateTaskWidget(QWidget *parent)
    :QWidget(parent)
{
    QGridLayout *layout = new QGridLayout;

    taskDescriptionEdit = new QLineEdit();

    QStringList difficultyLevels;
    difficultyLevels << "Easy" << "Medium" << "Hard";
    taskDifficultyLevelComboBox = new QComboBox();
    taskDifficultyLevelComboBox->addItems(difficultyLevels);

    createTaskButton = new QPushButton("Create Task");
    connect(createTaskButton, &QPushButton::clicked,
            this, &CreateTaskWidget::onCreateTaskButtonClicked);

    layout->addWidget(taskDescriptionEdit, 0, 0);
    layout->addWidget(taskDifficultyLevelComboBox, 0, 1);
    layout->addWidget(createTaskButton,1, 1, Qt::AlignRight);

    setLayout(layout);

    taskController = new TaskController();
    connect(taskController, &TaskController::taskHandlerMessage,
            this, &CreateTaskWidget::handleTask);
}

void CreateTaskWidget::onCreateTaskButtonClicked()
{
    if(taskDescriptionEdit->text().isEmpty()) {
        emit handleTask("Task cannot created, description is empty");
    } else {
        taskController->createTask(taskDescriptionEdit->text(),
                                   static_cast<TaskDifficultyLevel>(taskDifficultyLevelComboBox->currentIndex()));
    }
}
