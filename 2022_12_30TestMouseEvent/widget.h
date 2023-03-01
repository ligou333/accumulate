#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QMouseEvent>
#include <qpoint.h>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    //鼠标点击事件
    void mousePressEvent(QMouseEvent *event);
    //鼠标松开事件
    void mouseReleaseEvent(QMouseEvent* event);
    //鼠标移动事件
    void mouseMoveEvent(QMouseEvent* event);
    //鼠标进入界面
    void enterEvent(QEvent* event);
    //鼠标离开界面
    void leaveEvent(QEvent* event);
private:
    Ui::Widget *ui;

    bool mMoving;
    QPoint mLastMousePosition;
};

#endif // WIDGET_H
