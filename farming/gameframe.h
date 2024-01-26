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

private:
    Ui::GameFrame *ui;
   QList<QPushButton*> buttons;
};

#endif // GAMEFRAME_H
