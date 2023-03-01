#include "QTEstKeyEvent.h"

QTEstKeyEvent::QTEstKeyEvent(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
   // setFocusPolicy(Qt::StrongFocus);
    setFocusPolicy(Qt::ClickFocus);
}

QTEstKeyEvent::~QTEstKeyEvent()
{}

void QTEstKeyEvent::keyPressEvent(QKeyEvent * event)
{
    //是否按下ctrl  特殊按键 alt shift ctrl等
    if (event->modifiers() == Qt::ControlModifier)
    {
        //是否按下c  普通按键
        if(event->key() == Qt::Key_C)
        {
            qDebug() << "按下c健";
            this->setFixedSize(1000, 1000);
        }
    }
    else
        QWidget::keyPressEvent(event);   //保存默认事件

    QPalette palette(this->palette());
    QPalette palette2(this->palette());
    //是否按下a  普通按键
    if (event->key() == Qt::Key_A)
    {
        if (!event->isAutoRepeat())
        {
            qDebug() << "按下a健";
            palette.setColor(QPalette::Background, Qt::red);
            palette2.setColor(QPalette::Background, Qt::white);
            ui.label->setText("红");
            
        }
      
    }
    if (event->key() == Qt::Key_B)
    {
        if (!event->isAutoRepeat())
        {
            palette.setColor(QPalette::Background, Qt::yellow);  
        }
    }
    if (event->key() == Qt::Key_C)
    {
        if (!event->isAutoRepeat())
        {
            palette.setColor(QPalette::Background, Qt::green);
        }
    }
    this->setPalette(palette);
    ui.label->setPalette(palette2);
}

void QTEstKeyEvent::keyReleaseEvent(QKeyEvent* event)
{
    QPalette palette(this->palette());
    //是否按下m  普通按键
    if (event->key() == Qt::Key_A)
    {
        if (!event->isAutoRepeat())
        {          
            palette.setColor(QPalette::Background, Qt::white);        
        }      
    }
    if (event->key() == Qt::Key_B)
    {
        if (!event->isAutoRepeat())
        {
            palette.setColor(QPalette::Background, Qt::white);
        }
    }
    if (event->key() == Qt::Key_C)
    {
        if (!event->isAutoRepeat())
        {
            palette.setColor(QPalette::Background, Qt::white);
        }
    }
    this->setPalette(palette);
}
