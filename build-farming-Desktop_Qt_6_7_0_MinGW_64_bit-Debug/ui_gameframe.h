/********************************************************************************
** Form generated from reading UI file 'gameframe.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEFRAME_H
#define UI_GAMEFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameFrame
{
public:
    QLabel *Name_label;
    QLabel *coin_picture;
    QPushButton *H1_2_pushButton;
    QPushButton *H1_3_pushButton;
    QPushButton *H1_4_pushButton;
    QPushButton *H2_1_pushButton;
    QPushButton *H2_2_pushButton;
    QPushButton *H2_3_pushButton;
    QPushButton *H2_4_pushButton;
    QPushButton *H3_1_pushButton;
    QPushButton *H3_2_pushButton;
    QPushButton *H3_3_pushButton;
    QPushButton *H3_4_pushButton;
    QPushButton *H4_1_pushButton;
    QPushButton *H4_2_pushButton;
    QPushButton *H4_3_pushButton;
    QPushButton *H4_4_pushButton;
    QLineEdit *Name_lineEdit;
    QPushButton *Load_pushButton;
    QLabel *coins_label;
    QPushButton *H1_1_pushButton;
    QPushButton *shop_pushButton;

    void setupUi(QFrame *GameFrame)
    {
        if (GameFrame->objectName().isEmpty())
            GameFrame->setObjectName("GameFrame");
        GameFrame->resize(650, 550);
        GameFrame->setStyleSheet(QString::fromUtf8(""));
        Name_label = new QLabel(GameFrame);
        Name_label->setObjectName("Name_label");
        Name_label->setGeometry(QRect(10, 10, 60, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("B Titr")});
        font.setPointSize(14);
        font.setBold(true);
        Name_label->setFont(font);
        coin_picture = new QLabel(GameFrame);
        coin_picture->setObjectName("coin_picture");
        coin_picture->setGeometry(QRect(620, 10, 20, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("B Zar")});
        font1.setPointSize(12);
        coin_picture->setFont(font1);
        coin_picture->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/coin.png);"));
        H1_2_pushButton = new QPushButton(GameFrame);
        H1_2_pushButton->setObjectName("H1_2_pushButton");
        H1_2_pushButton->setGeometry(QRect(150, 100, 100, 100));
        H1_2_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 41, 0);"));
        H1_3_pushButton = new QPushButton(GameFrame);
        H1_3_pushButton->setObjectName("H1_3_pushButton");
        H1_3_pushButton->setGeometry(QRect(250, 100, 100, 100));
        H1_3_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 41, 0);"));
        H1_4_pushButton = new QPushButton(GameFrame);
        H1_4_pushButton->setObjectName("H1_4_pushButton");
        H1_4_pushButton->setGeometry(QRect(350, 100, 100, 100));
        H1_4_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 41, 0);"));
        H2_1_pushButton = new QPushButton(GameFrame);
        H2_1_pushButton->setObjectName("H2_1_pushButton");
        H2_1_pushButton->setGeometry(QRect(50, 200, 100, 100));
        H2_1_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 41, 0);"));
        H2_2_pushButton = new QPushButton(GameFrame);
        H2_2_pushButton->setObjectName("H2_2_pushButton");
        H2_2_pushButton->setGeometry(QRect(150, 200, 100, 100));
        H2_2_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 41, 0);"));
        H2_3_pushButton = new QPushButton(GameFrame);
        H2_3_pushButton->setObjectName("H2_3_pushButton");
        H2_3_pushButton->setGeometry(QRect(250, 200, 100, 100));
        H2_3_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 41, 0);"));
        H2_4_pushButton = new QPushButton(GameFrame);
        H2_4_pushButton->setObjectName("H2_4_pushButton");
        H2_4_pushButton->setGeometry(QRect(350, 200, 100, 100));
        H2_4_pushButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(81, 41, 0);"));
        H3_1_pushButton = new QPushButton(GameFrame);
        H3_1_pushButton->setObjectName("H3_1_pushButton");
        H3_1_pushButton->setGeometry(QRect(50, 300, 100, 100));
        H3_1_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 41, 0);"));
        H3_2_pushButton = new QPushButton(GameFrame);
        H3_2_pushButton->setObjectName("H3_2_pushButton");
        H3_2_pushButton->setGeometry(QRect(150, 300, 100, 100));
        H3_2_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 41, 0);"));
        H3_3_pushButton = new QPushButton(GameFrame);
        H3_3_pushButton->setObjectName("H3_3_pushButton");
        H3_3_pushButton->setGeometry(QRect(250, 300, 100, 100));
        H3_3_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 41, 0);"));
        H3_4_pushButton = new QPushButton(GameFrame);
        H3_4_pushButton->setObjectName("H3_4_pushButton");
        H3_4_pushButton->setGeometry(QRect(350, 300, 100, 100));
        H3_4_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 41, 0);"));
        H4_1_pushButton = new QPushButton(GameFrame);
        H4_1_pushButton->setObjectName("H4_1_pushButton");
        H4_1_pushButton->setGeometry(QRect(50, 400, 100, 100));
        H4_1_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 41, 0);"));
        H4_2_pushButton = new QPushButton(GameFrame);
        H4_2_pushButton->setObjectName("H4_2_pushButton");
        H4_2_pushButton->setGeometry(QRect(150, 400, 100, 100));
        H4_2_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 41, 0);"));
        H4_3_pushButton = new QPushButton(GameFrame);
        H4_3_pushButton->setObjectName("H4_3_pushButton");
        H4_3_pushButton->setGeometry(QRect(250, 400, 100, 100));
        H4_3_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 41, 0);"));
        H4_4_pushButton = new QPushButton(GameFrame);
        H4_4_pushButton->setObjectName("H4_4_pushButton");
        H4_4_pushButton->setGeometry(QRect(350, 400, 100, 100));
        H4_4_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 41, 0);"));
        Name_lineEdit = new QLineEdit(GameFrame);
        Name_lineEdit->setObjectName("Name_lineEdit");
        Name_lineEdit->setGeometry(QRect(70, 10, 120, 20));
        Load_pushButton = new QPushButton(GameFrame);
        Load_pushButton->setObjectName("Load_pushButton");
        Load_pushButton->setGeometry(QRect(30, 30, 80, 18));
        coins_label = new QLabel(GameFrame);
        coins_label->setObjectName("coins_label");
        coins_label->setGeometry(QRect(580, 10, 40, 20));
        coins_label->setFont(font);
        coins_label->setAlignment(Qt::AlignCenter);
        H1_1_pushButton = new QPushButton(GameFrame);
        H1_1_pushButton->setObjectName("H1_1_pushButton");
        H1_1_pushButton->setGeometry(QRect(50, 100, 100, 100));
        H1_1_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(81, 41, 0);"));
        shop_pushButton = new QPushButton(GameFrame);
        shop_pushButton->setObjectName("shop_pushButton");
        shop_pushButton->setGeometry(QRect(510, 410, 80, 80));
        shop_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/shop-icon.png);"));

        retranslateUi(GameFrame);

        QMetaObject::connectSlotsByName(GameFrame);
    } // setupUi

    void retranslateUi(QFrame *GameFrame)
    {
        GameFrame->setWindowTitle(QCoreApplication::translate("GameFrame", "Frame", nullptr));
        Name_label->setText(QCoreApplication::translate("GameFrame", "Name :", nullptr));
        coin_picture->setText(QString());
        H1_2_pushButton->setText(QString());
        H1_3_pushButton->setText(QString());
        H1_4_pushButton->setText(QString());
        H2_1_pushButton->setText(QString());
        H2_2_pushButton->setText(QString());
        H2_3_pushButton->setText(QString());
        H2_4_pushButton->setText(QString());
        H3_1_pushButton->setText(QString());
        H3_2_pushButton->setText(QString());
        H3_3_pushButton->setText(QString());
        H3_4_pushButton->setText(QString());
        H4_1_pushButton->setText(QString());
        H4_2_pushButton->setText(QString());
        H4_3_pushButton->setText(QString());
        H4_4_pushButton->setText(QString());
        Load_pushButton->setText(QCoreApplication::translate("GameFrame", "load", nullptr));
        coins_label->setText(QCoreApplication::translate("GameFrame", "0", nullptr));
        H1_1_pushButton->setText(QString());
        shop_pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameFrame: public Ui_GameFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEFRAME_H
