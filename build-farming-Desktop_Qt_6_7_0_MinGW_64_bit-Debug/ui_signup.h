/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *UserName_lineEdit;
    QLineEdit *Password_lineEdit;
    QLineEdit *Phone_lineEdit;
    QLineEdit *Email_lineEdit;
    QGroupBox *captcha_groupBox;
    QPushButton *changCaptcha_pushButton;
    QLabel *captcha_label;
    QLineEdit *captcha_lineEdit;
    QPushButton *AddPlayer_pushButton;
    QGroupBox *groupBox_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(400, 600);
        centralwidget = new QWidget(signup);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 400, 480));
        QFont font;
        font.setFamilies({QString::fromUtf8("B Titr")});
        font.setPointSize(12);
        font.setBold(true);
        groupBox->setFont(font);
        UserName_lineEdit = new QLineEdit(groupBox);
        UserName_lineEdit->setObjectName("UserName_lineEdit");
        UserName_lineEdit->setGeometry(QRect(75, 80, 250, 40));
        Password_lineEdit = new QLineEdit(groupBox);
        Password_lineEdit->setObjectName("Password_lineEdit");
        Password_lineEdit->setGeometry(QRect(75, 130, 250, 40));
        Phone_lineEdit = new QLineEdit(groupBox);
        Phone_lineEdit->setObjectName("Phone_lineEdit");
        Phone_lineEdit->setGeometry(QRect(75, 180, 250, 40));
        Email_lineEdit = new QLineEdit(groupBox);
        Email_lineEdit->setObjectName("Email_lineEdit");
        Email_lineEdit->setGeometry(QRect(75, 230, 250, 40));
        captcha_groupBox = new QGroupBox(groupBox);
        captcha_groupBox->setObjectName("captcha_groupBox");
        captcha_groupBox->setGeometry(QRect(75, 280, 250, 100));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("B Titr")});
        font1.setPointSize(10);
        font1.setBold(true);
        captcha_groupBox->setFont(font1);
        changCaptcha_pushButton = new QPushButton(captcha_groupBox);
        changCaptcha_pushButton->setObjectName("changCaptcha_pushButton");
        changCaptcha_pushButton->setGeometry(QRect(170, 35, 80, 20));
        captcha_label = new QLabel(captcha_groupBox);
        captcha_label->setObjectName("captcha_label");
        captcha_label->setGeometry(QRect(0, 20, 150, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("B Titr")});
        font2.setPointSize(14);
        font2.setBold(true);
        captcha_label->setFont(font2);
        captcha_label->setAlignment(Qt::AlignCenter);
        captcha_lineEdit = new QLineEdit(captcha_groupBox);
        captcha_lineEdit->setObjectName("captcha_lineEdit");
        captcha_lineEdit->setGeometry(QRect(15, 80, 120, 20));
        AddPlayer_pushButton = new QPushButton(groupBox);
        AddPlayer_pushButton->setObjectName("AddPlayer_pushButton");
        AddPlayer_pushButton->setGeometry(QRect(160, 420, 80, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("B Zar")});
        font3.setPointSize(10);
        font3.setBold(true);
        AddPlayer_pushButton->setFont(font3);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(0, 480, 400, 100));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 25, 100, 50));
        pushButton->setFont(font);
        signup->setCentralWidget(centralwidget);
        menubar = new QMenuBar(signup);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 17));
        signup->setMenuBar(menubar);
        statusbar = new QStatusBar(signup);
        statusbar->setObjectName("statusbar");
        signup->setStatusBar(statusbar);

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QMainWindow *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "signup", nullptr));
        groupBox->setTitle(QCoreApplication::translate("signup", "Register", nullptr));
        UserName_lineEdit->setPlaceholderText(QCoreApplication::translate("signup", "Username", nullptr));
        Password_lineEdit->setPlaceholderText(QCoreApplication::translate("signup", "Password", nullptr));
        Phone_lineEdit->setPlaceholderText(QCoreApplication::translate("signup", "Phone Number", nullptr));
        Email_lineEdit->setPlaceholderText(QCoreApplication::translate("signup", "Email", nullptr));
        captcha_groupBox->setTitle(QCoreApplication::translate("signup", "captcha", nullptr));
        changCaptcha_pushButton->setText(QCoreApplication::translate("signup", "chang", nullptr));
        captcha_label->setText(QString());
        captcha_lineEdit->setPlaceholderText(QCoreApplication::translate("signup", "Enter captcha", nullptr));
        AddPlayer_pushButton->setText(QCoreApplication::translate("signup", "Add", nullptr));
        groupBox_2->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("signup", "Lets Play...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
