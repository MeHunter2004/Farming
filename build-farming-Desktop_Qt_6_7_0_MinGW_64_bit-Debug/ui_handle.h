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
    QLabel *workers_number_label;

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
        workers_number_label = new QLabel(handle);
        workers_number_label->setObjectName("workers_number_label");
        workers_number_label->setGeometry(QRect(140, 110, 21, 16));
        QFont font;
        font.setPointSize(11);
        workers_number_label->setFont(font);
        workers_number_label->setAlignment(Qt::AlignCenter);

        retranslateUi(handle);

        QMetaObject::connectSlotsByName(handle);
    } // setupUi

    void retranslateUi(QWidget *handle)
    {
        handle->setWindowTitle(QCoreApplication::translate("handle", "Form", nullptr));
        collect_pushButton->setText(QCoreApplication::translate("handle", "collect", nullptr));
        sell_pushButton->setText(QCoreApplication::translate("handle", "sell", nullptr));
        worker_pushButton->setText(QString());
        workers_number_label->setText(QCoreApplication::translate("handle", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class handle: public Ui_handle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANDLE_H
