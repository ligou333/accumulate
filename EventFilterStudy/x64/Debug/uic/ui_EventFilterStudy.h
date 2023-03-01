/********************************************************************************
** Form generated from reading UI file 'EventFilterStudy.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTFILTERSTUDY_H
#define UI_EVENTFILTERSTUDY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventFilterStudyClass
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *EventFilterStudyClass)
    {
        if (EventFilterStudyClass->objectName().isEmpty())
            EventFilterStudyClass->setObjectName(QStringLiteral("EventFilterStudyClass"));
        EventFilterStudyClass->resize(600, 400);
        pushButton = new QPushButton(EventFilterStudyClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 210, 112, 34));
        pushButton_2 = new QPushButton(EventFilterStudyClass);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 210, 112, 34));

        retranslateUi(EventFilterStudyClass);

        QMetaObject::connectSlotsByName(EventFilterStudyClass);
    } // setupUi

    void retranslateUi(QWidget *EventFilterStudyClass)
    {
        EventFilterStudyClass->setWindowTitle(QApplication::translate("EventFilterStudyClass", "EventFilterStudy", Q_NULLPTR));
        pushButton->setText(QApplication::translate("EventFilterStudyClass", "PushButton", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("EventFilterStudyClass", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EventFilterStudyClass: public Ui_EventFilterStudyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTFILTERSTUDY_H
