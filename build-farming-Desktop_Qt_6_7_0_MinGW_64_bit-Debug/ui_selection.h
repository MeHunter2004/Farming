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
    QPushButton *hen_pushButton;
    QLabel *cow_Number_label;
    QLabel *lomb_Number_label;
    QLabel *hen_Number_label;
    QGroupBox *seeds_groupBox;
    QPushButton *wheat_pushButton;
    QPushButton *corn_pushButton;
    QLabel *corn_Number_label;
    QLabel *wheat_Number_label;

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
        hen_pushButton = new QPushButton(animal_groupBox);
        hen_pushButton->setObjectName("hen_pushButton");
        hen_pushButton->setGeometry(QRect(10, 100, 80, 60));
        hen_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/hen_f2.png);"));
        cow_Number_label = new QLabel(animal_groupBox);
        cow_Number_label->setObjectName("cow_Number_label");
        cow_Number_label->setGeometry(QRect(30, 75, 40, 20));
        cow_Number_label->setAlignment(Qt::AlignCenter);
        lomb_Number_label = new QLabel(animal_groupBox);
        lomb_Number_label->setObjectName("lomb_Number_label");
        lomb_Number_label->setGeometry(QRect(120, 75, 40, 20));
        lomb_Number_label->setAlignment(Qt::AlignCenter);
        hen_Number_label = new QLabel(animal_groupBox);
        hen_Number_label->setObjectName("hen_Number_label");
        hen_Number_label->setGeometry(QRect(30, 165, 40, 20));
        hen_Number_label->setAlignment(Qt::AlignCenter);
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
        corn_Number_label = new QLabel(seeds_groupBox);
        corn_Number_label->setObjectName("corn_Number_label");
        corn_Number_label->setGeometry(QRect(120, 75, 40, 20));
        corn_Number_label->setAlignment(Qt::AlignCenter);
        wheat_Number_label = new QLabel(seeds_groupBox);
        wheat_Number_label->setObjectName("wheat_Number_label");
        wheat_Number_label->setGeometry(QRect(30, 75, 40, 20));
        wheat_Number_label->setAlignment(Qt::AlignCenter);

        retranslateUi(Selection);

        QMetaObject::connectSlotsByName(Selection);
    } // setupUi

    void retranslateUi(QWidget *Selection)
    {
        Selection->setWindowTitle(QCoreApplication::translate("Selection", "Form", nullptr));
        animal_groupBox->setTitle(QCoreApplication::translate("Selection", "animals", nullptr));
        cow_pushButton->setText(QString());
        lomb_pushButton->setText(QString());
        hen_pushButton->setText(QString());
        cow_Number_label->setText(QCoreApplication::translate("Selection", "0", nullptr));
        lomb_Number_label->setText(QCoreApplication::translate("Selection", "0", nullptr));
        hen_Number_label->setText(QCoreApplication::translate("Selection", "0", nullptr));
        seeds_groupBox->setTitle(QCoreApplication::translate("Selection", "seeds", nullptr));
        wheat_pushButton->setText(QString());
        corn_pushButton->setText(QString());
        corn_Number_label->setText(QCoreApplication::translate("Selection", "0", nullptr));
        wheat_Number_label->setText(QCoreApplication::translate("Selection", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Selection: public Ui_Selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTION_H
