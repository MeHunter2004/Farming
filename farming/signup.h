#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>
#include <bits/stdc++.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class signup;
}
QT_END_NAMESPACE

class signup : public QMainWindow
{
    Q_OBJECT

public:
    signup(QWidget *parent = nullptr);
    ~signup();

public slots:
    bool isPasswordValid(const QString& password);
    bool isEmailValid(const QString& email);
    bool customCompare(const QString& qstr, const std::string& str);
    std::string generateCaptcha(int n);

private slots:
    void on_changCaptcha_pushButton_clicked();

    void on_AddPlayer_pushButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::signup *ui;
};
#endif // SIGNUP_H
