/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *emailEdit;
    QLabel *label_3;
    QLineEdit *passwordEdit;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_4;
    QPushButton *nextButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QPushButton *SignUpButton;
    QVBoxLayout *verticalLayout_4;
    QLabel *warning_label;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1046, 633);
        MainWindow->setMinimumSize(QSize(1046, 633));
        MainWindow->setMaximumSize(QSize(1046, 633));
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow\n"
"{\n"
"background-color:rgb(0, 157, 255)\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 1, 1, 1);

        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(300, 330));
        groupBox->setMaximumSize(QSize(300, 300));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox\n"
"{\n"
"background:white;\n"
"color:rgb(0, 157, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setPointSize(9);
        label_2->setFont(font2);

        verticalLayout_2->addWidget(label_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        emailEdit = new QLineEdit(groupBox);
        emailEdit->setObjectName("emailEdit");
        emailEdit->setFont(font2);
        emailEdit->setStyleSheet(QString::fromUtf8("#emailEdit\n"
"{\n"
"border-radius:4px;\n"
"border:1px solid black;\n"
"padding:3px\n"
"}"));

        verticalLayout_3->addWidget(emailEdit);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        verticalLayout_3->addWidget(label_3);

        passwordEdit = new QLineEdit(groupBox);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setFont(font2);
        passwordEdit->setStyleSheet(QString::fromUtf8("#passwordEdit\n"
"{\n"
"border-radius:4px;\n"
"border:1px solid black;\n"
"padding:3px\n"
"}"));
        passwordEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(passwordEdit);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);
        QFont font3;
        font3.setUnderline(true);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        pushButton_2->setFont(font3);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"border-radius:1px;\n"
"text-align:left;\n"
"}"));
        pushButton_2->setCheckable(false);
        pushButton_2->setAutoRepeat(false);
        pushButton_2->setAutoExclusive(false);

        verticalLayout_3->addWidget(pushButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName("pushButton_4");
        QFont font4;
        font4.setBold(true);
        pushButton_4->setFont(font4);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("#pushButton_4\n"
"{\n"
"	background-color:rgb(0, 157, 255);\n"
"color:white;\n"
"border:1px solid rgb(0, 157, 255);\n"
"width:65px;\n"
"padding:5px;\n"
"}\n"
"#pushButton_4:hover\n"
"{\n"
"\n"
"background-color:rgb(0, 87, 145);\n"
"color:white;\n"
"\n"
"}"));

        horizontalLayout->addWidget(pushButton_4);

        nextButton = new QPushButton(groupBox);
        nextButton->setObjectName("nextButton");
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(true);
        nextButton->setFont(font5);
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
"\n"
"background-color:rgb(0, 87, 145);\n"
"color:white;\n"
"\n"
"}"));

        horizontalLayout->addWidget(nextButton);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        QFont font6;
        font6.setPointSize(9);
        font6.setItalic(false);
        font6.setUnderline(false);
        label_4->setFont(font6);

        horizontalLayout_2->addWidget(label_4);

        SignUpButton = new QPushButton(groupBox);
        SignUpButton->setObjectName("SignUpButton");
        SignUpButton->setMinimumSize(QSize(134, 0));
        SignUpButton->setBaseSize(QSize(0, 0));
        SignUpButton->setFont(font4);
        SignUpButton->setCursor(QCursor(Qt::PointingHandCursor));
        SignUpButton->setStyleSheet(QString::fromUtf8("#SignUpButton\n"
"{\n"
"background-color:white;\n"
"color:green;\n"
"border-radius:1px\n"
"}"));

        horizontalLayout_2->addWidget(SignUpButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        warning_label = new QLabel(groupBox);
        warning_label->setObjectName("warning_label");
        warning_label->setFont(font4);
        warning_label->setStyleSheet(QString::fromUtf8("#warning_label\n"
"{\n"
"color:red;\n"
"}"));

        verticalLayout_4->addWidget(warning_label);


        verticalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addLayout(verticalLayout_2);


        gridLayout_2->addWidget(groupBox, 1, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(330, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1046, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "          SDMS", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "              Log In to SDMS", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Email Adsress", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Forgot Your Password?", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        nextButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Don't have an account?", nullptr));
        SignUpButton->setText(QCoreApplication::translate("MainWindow", "Sign Up                                  ", nullptr));
        warning_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
