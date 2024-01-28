/********************************************************************************
** Form generated from reading UI file 'handle.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANDLE_H
#define UI_HANDLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_handle
{
public:
    QPushButton *collect_pushButton;
    QPushButton *sell_pushButton;
    QPushButton *worker_pushButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *handle)
    {
        if (handle->objectName().isEmpty())
            handle->setObjectName("handle");
        handle->resize(299, 286);
        collect_pushButton = new QPushButton(handle);
        collect_pushButton->setObjectName("collect_pushButton");
        collect_pushButton->setGeometry(QRect(40, 210, 80, 18));
        sell_pushButton = new QPushButton(handle);
        sell_pushButton->setObjectName("sell_pushButton");
        sell_pushButton->setGeometry(QRect(190, 210, 80, 18));
        worker_pushButton = new QPushButton(handle);
        worker_pushButton->setObjectName("worker_pushButton");
        worker_pushButton->setGeometry(QRect(120, 30, 60, 80));
        worker_pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/worker.png);"));
        label = new QLabel(handle);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 110, 21, 16));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(handle);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 110, 21, 16));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/images12/coin.png);"));

        retranslateUi(handle);

        QMetaObject::connectSlotsByName(handle);
    } // setupUi

    void retranslateUi(QWidget *handle)
    {
        handle->setWindowTitle(QCoreApplication::translate("handle", "Form", nullptr));
        collect_pushButton->setText(QCoreApplication::translate("handle", "collect", nullptr));
        sell_pushButton->setText(QCoreApplication::translate("handle", "sell", nullptr));
        worker_pushButton->setText(QString());
        label->setText(QCoreApplication::translate("handle", "5", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class handle: public Ui_handle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANDLE_H
