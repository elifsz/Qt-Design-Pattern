QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    view/create_task_widget.cpp \
    main.cpp \
    mainwindow.cpp \
    task/task_controller.cpp \
    task_handler/task_handler.cpp \
    task/task.cpp \
    task_handler/junior_developer_handler.cpp \
    task_handler/senior_developer_handler.cpp \
    view/task_information_widget.cpp \
    task_handler/tech_lead_handler.cpp \

HEADERS += \
    view/create_task_widget.h \
    mainwindow.h \
    task/task_controller.h \
    task_handler/task_handler.h \
    task/task.h \
    task_handler/junior_developer_handler.h \
    task_handler/senior_developer_handler.h \
    view/task_information_widget.h \
    task_handler/tech_lead_handler.h \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
