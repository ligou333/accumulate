#include "EventFilterStudy.h"

EventFilterStudy::EventFilterStudy(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    ui.pushButton->installEventFilter(this);
    ui.pushButton_2->installEventFilter(this);
}

EventFilterStudy::~EventFilterStudy()
{}

bool EventFilterStudy::eventFilter(QObject * watched, QEvent * event)
{
    QPalette palette(this->palette());
    if (watched == ui.pushButton)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            QMouseEvent* mouseevent = (QMouseEvent*)event;
            if(mouseevent->button() == Qt::LeftButton)
            {
                palette.setColor(QPalette::Background, Qt::red);
            }
            if (mouseevent->button() == Qt::RightButton)
            {
                palette.setColor(QPalette::Background, Qt::green);
            }
           
        }
        if (event->type() == QEvent::MouseButtonRelease)
        {
            palette.setColor(QPalette::Background, Qt::white);
        }
        if (event->type() == QEvent::KeyPress)
        {
            QKeyEvent* keyevent = (QKeyEvent*)event;
            if (keyevent->key() == Qt::Key_A)
            {
                if (!keyevent->isAutoRepeat())
                {
                    palette.setColor(QPalette::Background, Qt::red);
                }           
            }
        }
    }

    if (watched == ui.pushButton_2)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            QMouseEvent* mouseevent = (QMouseEvent*)event;
            if (mouseevent->button() == Qt::LeftButton)
            {
                palette.setColor(QPalette::Background, Qt::red);
            }
            if (mouseevent->button() == Qt::RightButton)
            {
                palette.setColor(QPalette::Background, Qt::green);
            }

        }
        if (event->type() == QEvent::MouseButtonRelease)
        {
            palette.setColor(QPalette::Background, Qt::white);
        }
        if (event->type() == QEvent::KeyPress)
        {
            QKeyEvent* keyevent = (QKeyEvent*)event;
            if (keyevent->key() == Qt::Key_B)
            {
                if (!keyevent->isAutoRepeat())
                {
                    palette.setColor(QPalette::Background, Qt::yellow);
                }
            }
        }
        if (event->type() == QEvent::KeyRelease)
        {
            QKeyEvent* keyevent = (QKeyEvent*)event;
            if (keyevent->key() == Qt::Key_B)
            {
                if (!keyevent->isAutoRepeat())
                {
                    palette.setColor(QPalette::Background, Qt::black);
                }
            }
        }
    }
    this->setPalette(palette);
    return QWidget::eventFilter(watched,event);
   // return true;
}
