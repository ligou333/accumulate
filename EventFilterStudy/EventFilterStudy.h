#pragma once

#include <QtWidgets/QWidget>
#include <QMouseEvent>
#include <QEvent>
#include "ui_EventFilterStudy.h"

class EventFilterStudy : public QWidget
{
    Q_OBJECT

public:
    EventFilterStudy(QWidget *parent = nullptr);
    ~EventFilterStudy();

    bool eventFilter(QObject* watched, QEvent* event);

private:
    Ui::EventFilterStudyClass ui;
};
