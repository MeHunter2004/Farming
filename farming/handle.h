#ifndef HANDLE_H
#define HANDLE_H

#include <QWidget>

namespace Ui {
class handle;
}

class handle : public QWidget
{
    Q_OBJECT

public:
    explicit handle(QWidget *parent = nullptr);
    ~handle();

private slots:
    void on_worker_pushButton_clicked();

private:
    Ui::handle *ui;
};

#endif // HANDLE_H
