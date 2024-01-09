#ifndef GAMEFRAME_H
#define GAMEFRAME_H

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

private slots:
    void on_H1_1_pushButton_clicked();

private:
    Ui::GameFrame *ui;
};

#endif // GAMEFRAME_H
