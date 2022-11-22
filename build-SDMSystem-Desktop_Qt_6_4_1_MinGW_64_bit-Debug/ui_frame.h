/********************************************************************************
** Form generated from reading UI file 'frame.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_H
#define UI_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Frame
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelname;
    QLabel *labelsurn;
    QLabel *labelstatus;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *Frame)
    {
        if (Frame->objectName().isEmpty())
            Frame->setObjectName("Frame");
        Frame->resize(997, 524);
        Frame->setMaximumSize(QSize(16777215, 16777215));
        Frame->setStyleSheet(QString::fromUtf8("#Frame\n"
"{\n"
"background:white\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(Frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(Frame);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(Frame);
        label->setObjectName("label");
        label->setMaximumSize(QSize(278, 278));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"\n"
"	background-image: url(:/icons/resources/user1.png);\n"
"}"));

        horizontalLayout->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 181, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        labelname = new QLabel(Frame);
        labelname->setObjectName("labelname");
        labelname->setMaximumSize(QSize(250, 16777215));
        labelname->setBaseSize(QSize(250, 0));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        labelname->setFont(font1);
        labelname->setStyleSheet(QString::fromUtf8("#labelname\n"
"{\n"
"background:white;\n"
"\n"
"}"));

        verticalLayout->addWidget(labelname);

        labelsurn = new QLabel(Frame);
        labelsurn->setObjectName("labelsurn");
        labelsurn->setMaximumSize(QSize(250, 16777215));
        labelsurn->setBaseSize(QSize(250, 0));
        labelsurn->setFont(font1);
        labelsurn->setStyleSheet(QString::fromUtf8("#labelsurn\n"
"{\n"
"background:white;\n"
"\n"
"}"));

        verticalLayout->addWidget(labelsurn);

        labelstatus = new QLabel(Frame);
        labelstatus->setObjectName("labelstatus");
        labelstatus->setMaximumSize(QSize(250, 16777215));
        labelstatus->setBaseSize(QSize(250, 0));
        labelstatus->setFont(font1);
        labelstatus->setStyleSheet(QString::fromUtf8("#labelstatus\n"
"{\n"
"background:white;\n"
"\n"
"}"));

        verticalLayout->addWidget(labelstatus);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(400, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(500, 170, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(Frame);

        QMetaObject::connectSlotsByName(Frame);
    } // setupUi

    void retranslateUi(QFrame *Frame)
    {
        Frame->setWindowTitle(QCoreApplication::translate("Frame", "Frame", nullptr));
        label_2->setText(QCoreApplication::translate("Frame", "Home", nullptr));
        label->setText(QString());
        labelname->setText(QString());
        labelsurn->setText(QString());
        labelstatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Frame: public Ui_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_H
