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

private:
    Ui::handle *ui;
};

#endif // HANDLE_H
