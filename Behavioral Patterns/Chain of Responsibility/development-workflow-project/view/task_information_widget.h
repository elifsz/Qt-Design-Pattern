#ifndef TASKINFORMATIONWIDGET_H
#define TASKINFORMATIONWIDGET_H

#include <QObject>
#include <QWidget>
#include <QtWidgets>

class TaskInformationWidget : public QWidget
{
    Q_OBJECT
public:
    explicit TaskInformationWidget(QWidget *parent = nullptr);

private:
    QTextBrowser *informationBrowser;

public slots:
    void setInformationToBrowser(QString text);

};

#endif // TASKINFORMATIONWIDGET_H
