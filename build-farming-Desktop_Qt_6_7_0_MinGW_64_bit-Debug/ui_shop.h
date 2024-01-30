/********************************************************************************
** Form generated from reading UI file 'shop.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOP_H
#define UI_SHOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shop
{
public:
    QLabel *label;
    QPushButton *buy_cow_pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *buy_lomb_pushButton;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *buy_hen_pushButton;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *buy_worker_pushButton;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *buy_wheat_pushButton;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *buy_corn_pushButton;
    QLabel *label_17;
    QLabel *label_18;

    void setupUi(QWidget *shop)
    {
        if (shop->objectName().isEmpty())
            shop->setObjectName("shop");
        shop->resize(500, 350);
        shop->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(shop);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 100, 100));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/cow_f.png);"));
        buy_cow_pushButton = new QPushButton(shop);
        buy_cow_pushButton->setObjectName("buy_cow_pushButton");
        buy_cow_pushButton->setGeometry(QRect(40, 120, 60, 20));
        buy_cow_pushButton->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(shop);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 140, 20, 20));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(shop);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 140, 20, 20));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/coin.png);"));
        label_4 = new QLabel(shop);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 20, 100, 100));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/sheep_f.png);"));
        label_5 = new QLabel(shop);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(190, 140, 20, 20));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/coin.png);"));
        buy_lomb_pushButton = new QPushButton(shop);
        buy_lomb_pushButton->setObjectName("buy_lomb_pushButton");
        buy_lomb_pushButton->setGeometry(QRect(160, 120, 60, 20));
        buy_lomb_pushButton->setStyleSheet(QString::fromUtf8(""));
        label_6 = new QLabel(shop);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(170, 140, 20, 20));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(shop);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(260, 20, 100, 100));
        label_7->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/hen_f2.png);"));
        label_8 = new QLabel(shop);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(310, 140, 20, 20));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/coin.png);"));
        buy_hen_pushButton = new QPushButton(shop);
        buy_hen_pushButton->setObjectName("buy_hen_pushButton");
        buy_hen_pushButton->setGeometry(QRect(280, 120, 60, 20));
        buy_hen_pushButton->setStyleSheet(QString::fromUtf8(""));
        label_9 = new QLabel(shop);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(290, 140, 20, 20));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(shop);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(380, 20, 100, 100));
        label_10->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/worker.png);"));
        label_11 = new QLabel(shop);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(430, 140, 20, 20));
        label_11->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/coin.png);"));
        buy_worker_pushButton = new QPushButton(shop);
        buy_worker_pushButton->setObjectName("buy_worker_pushButton");
        buy_worker_pushButton->setGeometry(QRect(400, 120, 60, 20));
        buy_worker_pushButton->setStyleSheet(QString::fromUtf8(""));
        label_12 = new QLabel(shop);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(410, 140, 20, 20));
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(shop);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(80, 180, 100, 100));
        label_13->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/wheat.png);"));
        buy_wheat_pushButton = new QPushButton(shop);
        buy_wheat_pushButton->setObjectName("buy_wheat_pushButton");
        buy_wheat_pushButton->setGeometry(QRect(100, 280, 60, 20));
        label_14 = new QLabel(shop);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(130, 300, 20, 20));
        label_14->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/coin.png);"));
        label_15 = new QLabel(shop);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(110, 300, 20, 20));
        label_15->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(shop);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(350, 300, 20, 20));
        label_16->setAlignment(Qt::AlignCenter);
        buy_corn_pushButton = new QPushButton(shop);
        buy_corn_pushButton->setObjectName("buy_corn_pushButton");
        buy_corn_pushButton->setGeometry(QRect(340, 280, 60, 20));
        label_17 = new QLabel(shop);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(320, 180, 100, 100));
        label_17->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/corn.png);"));
        label_18 = new QLabel(shop);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(370, 300, 20, 20));
        label_18->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/coin.png);"));

        retranslateUi(shop);

        QMetaObject::connectSlotsByName(shop);
    } // setupUi

    void retranslateUi(QWidget *shop)
    {
        shop->setWindowTitle(QCoreApplication::translate("shop", "Form", nullptr));
        label->setText(QString());
        buy_cow_pushButton->setText(QCoreApplication::translate("shop", "buy", nullptr));
        label_2->setText(QCoreApplication::translate("shop", "7", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        buy_lomb_pushButton->setText(QCoreApplication::translate("shop", "buy", nullptr));
        label_6->setText(QCoreApplication::translate("shop", "5", nullptr));
        label_7->setText(QString());
        label_8->setText(QString());
        buy_hen_pushButton->setText(QCoreApplication::translate("shop", "buy", nullptr));
        label_9->setText(QCoreApplication::translate("shop", "3", nullptr));
        label_10->setText(QString());
        label_11->setText(QString());
        buy_worker_pushButton->setText(QCoreApplication::translate("shop", "buy", nullptr));
        label_12->setText(QCoreApplication::translate("shop", "5", nullptr));
        label_13->setText(QString());
        buy_wheat_pushButton->setText(QCoreApplication::translate("shop", "buy", nullptr));
        label_14->setText(QString());
        label_15->setText(QCoreApplication::translate("shop", "2", nullptr));
        label_16->setText(QCoreApplication::translate("shop", "2", nullptr));
        buy_corn_pushButton->setText(QCoreApplication::translate("shop", "buy", nullptr));
        label_17->setText(QString());
        label_18->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class shop: public Ui_shop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOP_H
