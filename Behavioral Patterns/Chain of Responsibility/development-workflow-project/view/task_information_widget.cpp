#include "task_information_widget.h"

TaskInformationWidget::TaskInformationWidget(QWidget *parent) : QWidget(parent)
{
    QGridLayout *layout = new QGridLayout;

    informationBrowser = new QTextBrowser();
    informationBrowser->setReadOnly(false);

    layout->addWidget(informationBrowser);
    setLayout(layout);
}

void TaskInformationWidget::setInformationToBrowser(QString text)
{
    informationBrowser->append(text);
}
