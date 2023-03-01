#pragma once

#include <QtWidgets/QWidget>
#include "ui_QTEstKeyEvent.h"

#include <QKeyEvent>
#include <QPalette>
#include <qdebug.h>

class QTEstKeyEvent : public QWidget
{
    Q_OBJECT

public:
    QTEstKeyEvent(QWidget *parent = nullptr);
    ~QTEstKeyEvent();

    //键盘按下事件
    void keyPressEvent(QKeyEvent *event);
    //键盘离开事件
    void keyReleaseEvent(QKeyEvent* event);
    //键盘按下事件
    //键盘按下事件
    //键盘按下事件
    //键盘按下事件

private:
    Ui::QTEstKeyEventClass ui;
};
