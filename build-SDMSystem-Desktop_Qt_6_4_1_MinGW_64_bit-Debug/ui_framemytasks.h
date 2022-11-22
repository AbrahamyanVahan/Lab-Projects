/********************************************************************************
** Form generated from reading UI file 'framemytasks.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAMEMYTASKS_H
#define UI_FRAMEMYTASKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FrameMyTasks
{
public:
    QPushButton *pushButton;

    void setupUi(QFrame *FrameMyTasks)
    {
        if (FrameMyTasks->objectName().isEmpty())
            FrameMyTasks->setObjectName("FrameMyTasks");
        FrameMyTasks->resize(958, 611);
        pushButton = new QPushButton(FrameMyTasks);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 10, 111, 61));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(FrameMyTasks);

        QMetaObject::connectSlotsByName(FrameMyTasks);
    } // setupUi

    void retranslateUi(QFrame *FrameMyTasks)
    {
        FrameMyTasks->setWindowTitle(QCoreApplication::translate("FrameMyTasks", "Frame", nullptr));
        pushButton->setText(QCoreApplication::translate("FrameMyTasks", "My Tasks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrameMyTasks: public Ui_FrameMyTasks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAMEMYTASKS_H
