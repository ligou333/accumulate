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

    //���̰����¼�
    void keyPressEvent(QKeyEvent *event);
    //�����뿪�¼�
    void keyReleaseEvent(QKeyEvent* event);
    //���̰����¼�
    //���̰����¼�
    //���̰����¼�
    //���̰����¼�

private:
    Ui::QTEstKeyEventClass ui;
};
