/********************************************************************************
** Form generated from reading UI file 'mainsdms.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSDMS_H
#define UI_MAINSDMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainSDMS
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mainButton;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *welcomelabel;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *homeButon;
    QPushButton *mytasksButton;
    QSpacerItem *verticalSpacer;
    QFrame *mainFrame;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainSDMS)
    {
        if (MainSDMS->objectName().isEmpty())
            MainSDMS->setObjectName("MainSDMS");
        MainSDMS->resize(1700, 800);
        MainSDMS->setMaximumSize(QSize(1700, 800));
        MainSDMS->setStyleSheet(QString::fromUtf8("#MainSDMS\n"
"{\n"
"background-color:rgb(0, 157, 255)\n"
"}"));
        centralwidget = new QWidget(MainSDMS);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 50));
        frame_2->setMaximumSize(QSize(16777215, 50));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"background-color:rgb(0, 157, 255);\n"
"border:1px solid black\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 0, 774, 56));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mainButton = new QPushButton(layoutWidget);
        mainButton->setObjectName("mainButton");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainButton->sizePolicy().hasHeightForWidth());
        mainButton->setSizePolicy(sizePolicy);
        mainButton->setMaximumSize(QSize(36, 35));
        mainButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(mainButton);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"}"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(300, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        welcomelabel = new QLabel(layoutWidget);
        welcomelabel->setObjectName("welcomelabel");
        QFont font1;
        font1.setPointSize(30);
        welcomelabel->setFont(font1);
        welcomelabel->setStyleSheet(QString::fromUtf8("#welcomelabel\n"
"{\n"
"color:white\n"
"}"));

        horizontalLayout_2->addWidget(welcomelabel);


        verticalLayout_5->addWidget(frame_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(150, 590));
        frame->setMaximumSize(QSize(150, 16777215));
        frame->setStyleSheet(QString::fromUtf8("#frame\n"
"{\n"
"background-color:rgb(0, 157, 255);\n"
"border:1px solid black\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        homeButon = new QPushButton(frame);
        homeButon->setObjectName("homeButon");
        homeButon->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(homeButon);

        mytasksButton = new QPushButton(frame);
        mytasksButton->setObjectName("mytasksButton");
        mytasksButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(mytasksButton);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout->addWidget(frame);

        mainFrame = new QFrame(centralwidget);
        mainFrame->setObjectName("mainFrame");
        mainFrame->setMaximumSize(QSize(16777215, 16777215));
        mainFrame->setStyleSheet(QString::fromUtf8("#mainFrame\n"
"{\n"
"background:rgb(255, 255, 255)\n"
"}"));
        mainFrame->setInputMethodHints(Qt::ImhNone);
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(mainFrame);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout);

        MainSDMS->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainSDMS);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1700, 22));
        MainSDMS->setMenuBar(menubar);
        statusbar = new QStatusBar(MainSDMS);
        statusbar->setObjectName("statusbar");
        MainSDMS->setStatusBar(statusbar);

        retranslateUi(MainSDMS);

        QMetaObject::connectSlotsByName(MainSDMS);
    } // setupUi

    void retranslateUi(QMainWindow *MainSDMS)
    {
        MainSDMS->setWindowTitle(QCoreApplication::translate("MainSDMS", "MainWindow", nullptr));
        mainButton->setText(QString());
        label->setText(QCoreApplication::translate("MainSDMS", "SDMS", nullptr));
        welcomelabel->setText(QCoreApplication::translate("MainSDMS", "WELCOME TO SDMS", nullptr));
        homeButon->setText(QCoreApplication::translate("MainSDMS", "Home", nullptr));
        mytasksButton->setText(QCoreApplication::translate("MainSDMS", "MyTasks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainSDMS: public Ui_MainSDMS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSDMS_H
