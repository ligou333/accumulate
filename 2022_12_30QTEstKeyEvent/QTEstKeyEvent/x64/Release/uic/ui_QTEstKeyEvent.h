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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTEstKeyEventClass
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QTEstKeyEventClass)
    {
        if (QTEstKeyEventClass->objectName().isEmpty())
            QTEstKeyEventClass->setObjectName(QStringLiteral("QTEstKeyEventClass"));
        QTEstKeyEventClass->resize(600, 400);
        gridLayout = new QGridLayout(QTEstKeyEventClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(496, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(QTEstKeyEventClass);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 345, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        retranslateUi(QTEstKeyEventClass);

        QMetaObject::connectSlotsByName(QTEstKeyEventClass);
    } // setupUi

    void retranslateUi(QWidget *QTEstKeyEventClass)
    {
        QTEstKeyEventClass->setWindowTitle(QApplication::translate("QTEstKeyEventClass", "QTEstKeyEvent", Q_NULLPTR));
        label->setText(QApplication::translate("QTEstKeyEventClass", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QTEstKeyEventClass: public Ui_QTEstKeyEventClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTESTKEYEVENT_H
