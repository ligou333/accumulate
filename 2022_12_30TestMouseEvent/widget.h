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

    //������¼�
    void mousePressEvent(QMouseEvent *event);
    //����ɿ��¼�
    void mouseReleaseEvent(QMouseEvent* event);
    //����ƶ��¼�
    void mouseMoveEvent(QMouseEvent* event);
    //���������
    void enterEvent(QEvent* event);
    //����뿪����
    void leaveEvent(QEvent* event);
private:
    Ui::Widget *ui;

    bool mMoving;
    QPoint mLastMousePosition;
};

#endif // WIDGET_H
