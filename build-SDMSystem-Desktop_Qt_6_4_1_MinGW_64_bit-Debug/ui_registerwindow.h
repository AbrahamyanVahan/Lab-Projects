/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_5;
    QLineEdit *nameLine;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLineEdit *surnameLine;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QLineEdit *emailLine;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QLineEdit *passwordLine;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_4;
    QLineEdit *conPasswordLine;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QPushButton *signInButton;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancelButton;
    QPushButton *nextButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(1008, 691);
        RegisterWindow->setMinimumSize(QSize(1008, 691));
        RegisterWindow->setMaximumSize(QSize(1008, 691));
        RegisterWindow->setStyleSheet(QString::fromUtf8("#RegisterWindow\n"
"{\n"
"background-color:rgb(0, 157, 255)\n"
"}"));
        gridLayout_3 = new QGridLayout(RegisterWindow);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 1, 1, 1);

        label = new QLabel(RegisterWindow);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"}"));

        gridLayout_3->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);

        frame = new QFrame(RegisterWindow);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setMaximumSize(QSize(306, 600));
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox\n"
"{\n"
"	font: 15pt \"Segoe UI\";\n"
"background:white;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        verticalLayout_2->addWidget(label_9);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName("radioButton");

        horizontalLayout_4->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout_4->addWidget(radioButton_2);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);

        nameLine = new QLineEdit(groupBox);
        nameLine->setObjectName("nameLine");
        nameLine->setToolTipDuration(-1);
        nameLine->setStyleSheet(QString::fromUtf8("#nameLine\n"
"{\n"
"border-radius:4px;\n"
"border:1px solid black;\n"
"padding:3px\n"
"}"));
        nameLine->setCursorPosition(0);

        verticalLayout_3->addWidget(nameLine);


        verticalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");

        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        verticalLayout_4->addWidget(label_6);

        surnameLine = new QLineEdit(groupBox);
        surnameLine->setObjectName("surnameLine");
        surnameLine->setStyleSheet(QString::fromUtf8("#surnameLine\n"
"{\n"
"border-radius:4px;\n"
"border:1px solid black;\n"
"padding:3px\n"
"}"));

        verticalLayout_4->addWidget(surnameLine);


        verticalLayout_2->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setStyleSheet(QString::fromUtf8("#dateEdit\n"
"{\n"
"border-radius:4px;\n"
"border:1px solid black;\n"
"padding:3px\n"
"}"));

        verticalLayout->addWidget(dateEdit);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");

        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout_5->addWidget(label_2);

        emailLine = new QLineEdit(groupBox);
        emailLine->setObjectName("emailLine");
        emailLine->setStyleSheet(QString::fromUtf8("#emailLine\n"
"{\n"
"border-radius:4px;\n"
"border:1px solid black;\n"
"padding:3px\n"
"}"));

        verticalLayout_5->addWidget(emailLine);


        verticalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout_6->addWidget(label_3);

        passwordLine = new QLineEdit(groupBox);
        passwordLine->setObjectName("passwordLine");
        passwordLine->setStyleSheet(QString::fromUtf8("#passwordLine\n"
"{\n"
"border-radius:4px;\n"
"border:1px solid black;\n"
"padding:3px;\n"
"text-type:password;\n"
"}"));
        passwordLine->setEchoMode(QLineEdit::Password);

        verticalLayout_6->addWidget(passwordLine);


        verticalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        verticalLayout_7->addWidget(label_4);

        conPasswordLine = new QLineEdit(groupBox);
        conPasswordLine->setObjectName("conPasswordLine");
        conPasswordLine->setContextMenuPolicy(Qt::DefaultContextMenu);
        conPasswordLine->setStyleSheet(QString::fromUtf8("#conPasswordLine\n"
"{\n"
"border-radius:4px;\n"
"border:1px solid black;\n"
"padding:3px\n"
"}"));
        conPasswordLine->setEchoMode(QLineEdit::Password);
        conPasswordLine->setClearButtonEnabled(false);

        verticalLayout_7->addWidget(conPasswordLine);


        verticalLayout_2->addLayout(verticalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        horizontalLayout_2->addWidget(label_8);

        signInButton = new QPushButton(groupBox);
        signInButton->setObjectName("signInButton");
        QFont font1;
        font1.setBold(true);
        signInButton->setFont(font1);
        signInButton->setCursor(QCursor(Qt::PointingHandCursor));
        signInButton->setStyleSheet(QString::fromUtf8("#signInButton\n"
"{\n"
"background-color:white;\n"
"color:green;\n"
"border-radius:1px\n"
"\n"
"}"));

        horizontalLayout_2->addWidget(signInButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        cancelButton = new QPushButton(groupBox);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setFont(font1);
        cancelButton->setCursor(QCursor(Qt::PointingHandCursor));
        cancelButton->setStyleSheet(QString::fromUtf8("#cancelButton\n"
"{\n"
"	background-color:rgb(0, 157, 255);\n"
"color:white;\n"
"border:1px solid rgb(0, 157, 255);\n"
"width:65px;\n"
"padding:5px;\n"
"}\n"
"#cancelButton:hover\n"
"{\n"
"border:rgb(0, 87, 145);\n"
"background-color:rgb(0, 87, 145);\n"
"color:white;\n"
"transition: all .5s ease;\n"
"\n"
"}"));

        horizontalLayout_6->addWidget(cancelButton);

        nextButton = new QPushButton(groupBox);
        nextButton->setObjectName("nextButton");
        nextButton->setFont(font1);
        nextButton->setCursor(QCursor(Qt::PointingHandCursor));
        nextButton->setStyleSheet(QString::fromUtf8("#nextButton\n"
"{\n"
"	background-color:rgb(0, 157, 255);\n"
"color:white;\n"
"border:1px solid rgb(0, 157, 255);\n"
"width:65px;\n"
"padding:5px;\n"
"}\n"
"#nextButton:hover\n"
"{\n"
"border:rgb(0, 87, 145);\n"
"background-color:rgb(0, 87, 145);\n"
"color:white;\n"
"\n"
"}"));

        horizontalLayout_6->addWidget(nextButton);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");

        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);


        gridLayout_3->addWidget(frame, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 3, 1, 1, 1);


        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RegisterWindow", "  Welcome to SDMS", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RegisterWindow", "Registration", nullptr));
        label_9->setText(QCoreApplication::translate("RegisterWindow", "Please select your role", nullptr));
        groupBox_2->setTitle(QString());
        radioButton->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        radioButton_2->setText(QCoreApplication::translate("RegisterWindow", "Student", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterWindow", "Name", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterWindow", "Surname", nullptr));
        label_7->setText(QCoreApplication::translate("RegisterWindow", "Date of birth", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterWindow", "Email Address", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterWindow", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterWindow", "Confirm Password", nullptr));
        label_8->setText(QCoreApplication::translate("RegisterWindow", "Already Registered?", nullptr));
        signInButton->setText(QCoreApplication::translate("RegisterWindow", "Sign In", nullptr));
        cancelButton->setText(QCoreApplication::translate("RegisterWindow", "Cancel", nullptr));
        nextButton->setText(QCoreApplication::translate("RegisterWindow", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
