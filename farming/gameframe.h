#ifndef GAMEFRAME_H
#define GAMEFRAME_H

#include "qpushbutton.h"
#include <QFrame>

namespace Ui {
class GameFrame;
}

class GameFrame : public QFrame
{
    Q_OBJECT

public:
    explicit GameFrame(QWidget *parent = nullptr);
    ~GameFrame();

public slots:
    void changePushButtonColor(int index);

private slots:
    void on_H1_1_pushButton_clicked();

    void on_Load_pushButton_clicked();

    void on_shop_pushButton_clicked();

    void on_H1_2_pushButton_clicked();

    void on_H1_3_pushButton_clicked();

    void on_H1_4_pushButton_clicked();

    void on_H2_1_pushButton_clicked();

    void on_H2_2_pushButton_clicked();

    void on_H2_3_pushButton_clicked();

    void on_H2_4_pushButton_clicked();

    void on_H3_1_pushButton_clicked();

    void on_H3_2_pushButton_clicked();

    void on_H3_3_pushButton_clicked();

    void on_H3_4_pushButton_clicked();

    void on_H4_1_pushButton_clicked();

    void on_H4_2_pushButton_clicked();

    void on_H4_3_pushButton_clicked();

    void on_H4_4_pushButton_clicked();

private:
    Ui::GameFrame *ui;
   QList<QPushButton*> buttons;
};

#endif // GAMEFRAME_H
