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
    QGroupBox *seeds_groupBox;
    QPushButton *wheat_pushButton;
    QPushButton *corn_pushButton;

    void setupUi(QWidget *Selection)
    {
        if (Selection->objectName().isEmpty())
            Selection->setObjectName("Selection");
        Selection->resize(400, 300);
        animal_groupBox = new QGroupBox(Selection);
        animal_groupBox->setObjectName("animal_groupBox");
        animal_groupBox->setGeometry(QRect(0, 0, 200, 300));
        cow_pushButton = new QPushButton(animal_groupBox);
        cow_pushButton->setObjectName("cow_pushButton");
        cow_pushButton->setGeometry(QRect(0, 10, 100, 80));
        cow_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/cow_f.png);"));
        lomb_pushButton = new QPushButton(animal_groupBox);
        lomb_pushButton->setObjectName("lomb_pushButton");
        lomb_pushButton->setGeometry(QRect(100, 10, 100, 80));
        lomb_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/sheep_f.png);"));
        chicken_pushButton = new QPushButton(animal_groupBox);
        chicken_pushButton->setObjectName("chicken_pushButton");
        chicken_pushButton->setGeometry(QRect(0, 90, 100, 80));
        chicken_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/hen_f2.png);"));
        seeds_groupBox = new QGroupBox(Selection);
        seeds_groupBox->setObjectName("seeds_groupBox");
        seeds_groupBox->setGeometry(QRect(200, 0, 200, 300));
        wheat_pushButton = new QPushButton(seeds_groupBox);
        wheat_pushButton->setObjectName("wheat_pushButton");
        wheat_pushButton->setGeometry(QRect(0, 10, 100, 80));
        wheat_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/wheat.jpg);"));
        corn_pushButton = new QPushButton(seeds_groupBox);
        corn_pushButton->setObjectName("corn_pushButton");
        corn_pushButton->setGeometry(QRect(100, 10, 100, 80));
        corn_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/corn.png);"));

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
        seeds_groupBox->setTitle(QCoreApplication::translate("Selection", "seeds", nullptr));
        wheat_pushButton->setText(QString());
        corn_pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Selection: public Ui_Selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTION_H
