/********************************************************************************
** Form generated from reading UI file 'QZIp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QZIP_H
#define UI_QZIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QZIpClass
{
public:

    void setupUi(QWidget *QZIpClass)
    {
        if (QZIpClass->objectName().isEmpty())
            QZIpClass->setObjectName(QStringLiteral("QZIpClass"));
        QZIpClass->resize(600, 400);

        retranslateUi(QZIpClass);

        QMetaObject::connectSlotsByName(QZIpClass);
    } // setupUi

    void retranslateUi(QWidget *QZIpClass)
    {
        QZIpClass->setWindowTitle(QApplication::translate("QZIpClass", "QZIp", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QZIpClass: public Ui_QZIpClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QZIP_H
