/********************************************************************************
** Form generated from reading UI file 'selection.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTION_H
#define UI_SELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Selection
{
public:
    QGroupBox *animal_groupBox;
    QPushButton *cow_pushButton;
    QPushButton *lomb_pushButton;
    QPushButton *chicken_pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QGroupBox *seeds_groupBox;
    QPushButton *wheat_pushButton;
    QPushButton *corn_pushButton;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QWidget *Selection)
    {
        if (Selection->objectName().isEmpty())
            Selection->setObjectName("Selection");
        Selection->resize(400, 200);
        animal_groupBox = new QGroupBox(Selection);
        animal_groupBox->setObjectName("animal_groupBox");
        animal_groupBox->setGeometry(QRect(0, 0, 200, 300));
        cow_pushButton = new QPushButton(animal_groupBox);
        cow_pushButton->setObjectName("cow_pushButton");
        cow_pushButton->setGeometry(QRect(10, 10, 80, 60));
        cow_pushButton->setCursor(QCursor(Qt::OpenHandCursor));
        cow_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/cow_f.png);"));
        lomb_pushButton = new QPushButton(animal_groupBox);
        lomb_pushButton->setObjectName("lomb_pushButton");
        lomb_pushButton->setGeometry(QRect(100, 10, 80, 60));
        lomb_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/sheep_f.png);"));
        chicken_pushButton = new QPushButton(animal_groupBox);
        chicken_pushButton->setObjectName("chicken_pushButton");
        chicken_pushButton->setGeometry(QRect(10, 100, 80, 60));
        chicken_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/hen_f2.png);"));
        label = new QLabel(animal_groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 75, 40, 20));
        label_2 = new QLabel(animal_groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 75, 20, 20));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/coin.png);"));
        label_3 = new QLabel(animal_groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 75, 40, 20));
        label_4 = new QLabel(animal_groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 165, 40, 20));
        label_7 = new QLabel(animal_groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 165, 20, 20));
        label_7->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/coin.png);"));
        label_8 = new QLabel(animal_groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(140, 75, 20, 20));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/coin.png);"));
        seeds_groupBox = new QGroupBox(Selection);
        seeds_groupBox->setObjectName("seeds_groupBox");
        seeds_groupBox->setGeometry(QRect(200, 0, 200, 300));
        wheat_pushButton = new QPushButton(seeds_groupBox);
        wheat_pushButton->setObjectName("wheat_pushButton");
        wheat_pushButton->setGeometry(QRect(10, 10, 80, 60));
        wheat_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/wheat.png);"));
        corn_pushButton = new QPushButton(seeds_groupBox);
        corn_pushButton->setObjectName("corn_pushButton");
        corn_pushButton->setGeometry(QRect(100, 10, 80, 60));
        corn_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/corn.png);"));
        label_5 = new QLabel(seeds_groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(100, 75, 40, 20));
        label_6 = new QLabel(seeds_groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 75, 40, 20));
        label_9 = new QLabel(seeds_groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(140, 75, 20, 20));
        label_9->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/coin.png);"));
        label_10 = new QLabel(seeds_groupBox);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(50, 75, 20, 20));
        label_10->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/coin.png);"));

        retranslateUi(Selection);

        QMetaObject::connectSlotsByName(Selection);
    } // setupUi

    void retranslateUi(QWidget *Selection)
    {
        Selection->setWindowTitle(QCoreApplication::translate("Selection", "Form", nullptr));
        animal_groupBox->setTitle(QCoreApplication::translate("Selection", "animals", nullptr));
        cow_pushButton->setText(QString());
        lomb_pushButton->setText(QString());
        chicken_pushButton->setText(QString());
        label->setText(QCoreApplication::translate("Selection", "price : 7", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Selection", "price : 5", nullptr));
        label_4->setText(QCoreApplication::translate("Selection", "price : 3", nullptr));
        label_7->setText(QString());
        label_8->setText(QString());
        seeds_groupBox->setTitle(QCoreApplication::translate("Selection", "seeds", nullptr));
        wheat_pushButton->setText(QString());
        corn_pushButton->setText(QString());
        label_5->setText(QCoreApplication::translate("Selection", "price : 2", nullptr));
        label_6->setText(QCoreApplication::translate("Selection", "price : 2", nullptr));
        label_9->setText(QString());
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Selection: public Ui_Selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTION_H
