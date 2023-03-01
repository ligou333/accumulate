#include "widget.h"
#include "ui_widget.h"
#include <QMouseEvent>
#include <QKeyEvent>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置鼠标跟踪（用户不需要按下按键）
    this->setMouseTracking(true);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        qDebug()<<"鼠标左键按下";
        mMoving = true;
        mLastMousePosition = event->globalPos();
    }
    if(event->button() == Qt::RightButton)
    {
        qDebug()<<"鼠标右键按下";
    }
}

void Widget::mouseReleaseEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton)
    {
        qDebug() << "鼠标左键释放了";
        mMoving = true;
    }
    if (event->button() == Qt::RightButton)
    {
        qDebug() << "鼠标右键释放了";
    }
}

void Widget::mouseMoveEvent(QMouseEvent* event)
{
  /*  if (event->buttons().testFlag(Qt::LeftButton) && mMoving)
    {
        this->move(this->pos() + (event->globalPos() - mLastMousePosition));
        mLastMousePosition = event->globalPos();
    }*/

  //  qDebug() << "x = "<<event->x()<< "y = " << event->y();
}

void Widget::enterEvent(QEvent* event)
{
    qDebug() << "鼠标进入界面";
}

void Widget::leaveEvent(QEvent* event)
{
    qDebug() << "鼠标离开界面";
}
