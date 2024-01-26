#ifndef SELECTION_H
#define SELECTION_H

#include <QWidget>

namespace Ui {
class Selection;
}

class Selection : public QWidget
{
    Q_OBJECT

public:
    explicit Selection(QWidget *parent = nullptr);
    ~Selection();


private slots:
    void on_cow_pushButton_clicked();

signals:
    void cow_pushButtonClicked(int index);

private:
    Ui::Selection *ui;
};

#endif // SELECTION_H
