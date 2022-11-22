/********************************************************************************
** Form generated from reading UI file 'taskframe.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFRAME_H
#define UI_TASKFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_taskFrame
{
public:
    QGroupBox *CreateBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *taskNameLine;
    QTextEdit *DescriptioEDit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *addPushButton;
    QPushButton *cancelButton;
    QPushButton *CreateButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QVBoxLayout *verticalLayout_4;
    QTableView *TaskTable;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *CrateTaskButton;
    QPushButton *delButton;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_8;
    QTableView *studentView;
    QHBoxLayout *horizontalLayout_6;

    void setupUi(QFrame *taskFrame)
    {
        if (taskFrame->objectName().isEmpty())
            taskFrame->setObjectName("taskFrame");
        taskFrame->resize(1500, 700);
        taskFrame->setMinimumSize(QSize(1500, 700));
        taskFrame->setMaximumSize(QSize(1500, 700));
        taskFrame->setStyleSheet(QString::fromUtf8("#taskFrame\n"
"{\n"
"background:white;\n"
"}"));
        CreateBox = new QGroupBox(taskFrame);
        CreateBox->setObjectName("CreateBox");
        CreateBox->setGeometry(QRect(1060, 310, 291, 381));
        QFont font;
        font.setPointSize(15);
        CreateBox->setFont(font);
        CreateBox->setStyleSheet(QString::fromUtf8("#CreateBox\n"
"{\n"
"background-color:rgb(0, 157, 255);\n"
"color:white;\n"
"}"));
        widget = new QWidget(CreateBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 40, 262, 304));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        taskNameLine = new QLineEdit(widget);
        taskNameLine->setObjectName("taskNameLine");

        verticalLayout->addWidget(taskNameLine);

        DescriptioEDit = new QTextEdit(widget);
        DescriptioEDit->setObjectName("DescriptioEDit");

        verticalLayout->addWidget(DescriptioEDit);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addPushButton = new QPushButton(widget);
        addPushButton->setObjectName("addPushButton");
        addPushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(addPushButton);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(cancelButton);

        CreateButton = new QPushButton(widget);
        CreateButton->setObjectName("CreateButton");
        CreateButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(CreateButton);


        verticalLayout_3->addLayout(horizontalLayout);

        widget1 = new QWidget(taskFrame);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 10, 611, 511));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label = new QLabel(widget1);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);

        verticalLayout_5->addWidget(label);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        TaskTable = new QTableView(widget1);
        TaskTable->setObjectName("TaskTable");

        verticalLayout_4->addWidget(TaskTable);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        CrateTaskButton = new QPushButton(widget1);
        CrateTaskButton->setObjectName("CrateTaskButton");
        CrateTaskButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(CrateTaskButton);

        delButton = new QPushButton(widget1);
        delButton->setObjectName("delButton");
        delButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(delButton);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        verticalLayout_6->addWidget(label_2);

        tableView = new QTableView(widget1);
        tableView->setObjectName("tableView");

        verticalLayout_6->addWidget(tableView);


        verticalLayout_7->addLayout(verticalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_7->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_7);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        widget2 = new QWidget(taskFrame);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(650, 18, 371, 501));
        verticalLayout_8 = new QVBoxLayout(widget2);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        studentView = new QTableView(widget2);
        studentView->setObjectName("studentView");

        verticalLayout_8->addWidget(studentView);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");

        verticalLayout_8->addLayout(horizontalLayout_6);


        retranslateUi(taskFrame);

        QMetaObject::connectSlotsByName(taskFrame);
    } // setupUi

    void retranslateUi(QFrame *taskFrame)
    {
        taskFrame->setWindowTitle(QCoreApplication::translate("taskFrame", "Frame", nullptr));
        CreateBox->setTitle(QCoreApplication::translate("taskFrame", "Create", nullptr));
        DescriptioEDit->setHtml(QCoreApplication::translate("taskFrame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        addPushButton->setText(QCoreApplication::translate("taskFrame", "Add Student", nullptr));
        cancelButton->setText(QCoreApplication::translate("taskFrame", "Cancel", nullptr));
        CreateButton->setText(QCoreApplication::translate("taskFrame", "Create", nullptr));
        label->setText(QCoreApplication::translate("taskFrame", "My Tasks", nullptr));
        CrateTaskButton->setText(QCoreApplication::translate("taskFrame", "Create Task", nullptr));
        delButton->setText(QCoreApplication::translate("taskFrame", "Delete", nullptr));
        label_2->setText(QCoreApplication::translate("taskFrame", "Student List", nullptr));
        pushButton->setText(QCoreApplication::translate("taskFrame", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class taskFrame: public Ui_taskFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFRAME_H
