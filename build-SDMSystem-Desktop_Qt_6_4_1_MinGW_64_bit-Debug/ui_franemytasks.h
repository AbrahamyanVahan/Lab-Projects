/********************************************************************************
** Form generated from reading UI file 'franemytasks.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRANEMYTASKS_H
#define UI_FRANEMYTASKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrameMyTasks
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QFrame *FrameMyTasks)
    {
        if (FrameMyTasks->objectName().isEmpty())
            FrameMyTasks->setObjectName("FrameMyTasks");
        FrameMyTasks->resize(958, 611);
        groupBox = new QGroupBox(FrameMyTasks);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(260, 40, 411, 161));
        QFont font;
        font.setPointSize(20);
        groupBox->setFont(font);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 60, 222, 38));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(16, 16777215));
        label_4->setCursor(QCursor(Qt::IBeamCursor));

        horizontalLayout_2->addWidget(label_4);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setCursor(QCursor(Qt::IBeamCursor));

        horizontalLayout_2->addWidget(label_3);

        label_2 = new QLabel(FrameMyTasks);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 0, 71, 51));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_2->setFont(font1);

        retranslateUi(FrameMyTasks);

        QMetaObject::connectSlotsByName(FrameMyTasks);
    } // setupUi

    void retranslateUi(QFrame *FrameMyTasks)
    {
        FrameMyTasks->setWindowTitle(QCoreApplication::translate("FrameMyTasks", "Frame", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FrameMyTasks", "Hello Vahan", nullptr));
        label_4->setText(QCoreApplication::translate("FrameMyTasks", "0", nullptr));
        label_3->setText(QCoreApplication::translate("FrameMyTasks", "Tasks Completed", nullptr));
        label_2->setText(QCoreApplication::translate("FrameMyTasks", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrameMyTasks: public Ui_FrameMyTasks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRANEMYTASKS_H
