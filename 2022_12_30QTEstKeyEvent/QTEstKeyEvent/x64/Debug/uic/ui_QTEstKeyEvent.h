/********************************************************************************
** Form generated from reading UI file 'QTEstKeyEvent.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTESTKEYEVENT_H
#define UI_QTESTKEYEVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTEstKeyEventClass
{
public:

    void setupUi(QWidget *QTEstKeyEventClass)
    {
        if (QTEstKeyEventClass->objectName().isEmpty())
            QTEstKeyEventClass->setObjectName(QStringLiteral("QTEstKeyEventClass"));
        QTEstKeyEventClass->resize(600, 400);

        retranslateUi(QTEstKeyEventClass);

        QMetaObject::connectSlotsByName(QTEstKeyEventClass);
    } // setupUi

    void retranslateUi(QWidget *QTEstKeyEventClass)
    {
        QTEstKeyEventClass->setWindowTitle(QApplication::translate("QTEstKeyEventClass", "QTEstKeyEvent", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QTEstKeyEventClass: public Ui_QTEstKeyEventClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTESTKEYEVENT_H
