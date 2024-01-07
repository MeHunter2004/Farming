#include "signup.h"
#include "ui_signup.h"
#include <QRegularExpression>
#include "QMessageBox"
#include <string>

#include <QIntValidator>

signup::signup(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);
    ui->Password_lineEdit->setEchoMode(QLineEdit::Password);
    ui->Phone_lineEdit->setValidator(new QIntValidator);
}

signup::~signup()
{
    delete ui;
}

bool signup::isPasswordValid(const QString &password)
{
    int digitCount = 0;
    int charCount = 0;
    bool hasSpecialCharacter = false;

    for (const QChar& ch : password) {
        if (ch.isDigit()) {
            digitCount++;
        } else if (ch.isLetter()) {
            charCount++;
        } else {
            hasSpecialCharacter = true;
            break;
        }
    }

    return digitCount >= 2 && charCount >= 6 && !hasSpecialCharacter;
}

bool signup::isEmailValid(const QString &email)
{
    QRegularExpression emailRegex("\\b[A-Za-z][A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,4}\\b");
    emailRegex.setPatternOptions(QRegularExpression::CaseInsensitiveOption);

    QRegularExpressionMatch match = emailRegex.match(email);
    return match.hasMatch();
}

bool signup::customCompare(const QString &qstr, const std::string &str)
{
    if (qstr.length() != static_cast<int>(str.size()))
        return false;
    const QChar* qstrData = qstr.data();
    for (int i = 0; i < qstr.length(); ++i) {
        if (qstrData[i].toLatin1() != str[i])
            return false;
    }
    return true;
}

std::string signup::generateCaptcha(int n)
{
    char* chrs = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    std::string captcha = "";

    // Initialize random seed
    srand(static_cast<unsigned>(time(nullptr)));

    while (n--) {
        captcha.push_back(chrs[rand() % 62]); // Generate a random character
    }

    return captcha;
}

std::string captcha = "m1";

void signup::on_changCaptcha_pushButton_clicked()
{
    captcha = generateCaptcha(8);
    QString customText = QString::fromStdString(captcha);
    ui->captcha_label->setText(customText);
}


void signup::on_AddPlayer_pushButton_clicked()
{
    if(!ui->UserName_lineEdit->text().isEmpty() && !ui->Phone_lineEdit->text().isEmpty()) {
        if(isPasswordValid(ui->Password_lineEdit->text())){
            if(isEmailValid(ui->Email_lineEdit->text())){
                ui->UserName_lineEdit->setEnabled(false);
                ui->Password_lineEdit->setEnabled(false);
                ui->Email_lineEdit->setEnabled(false);
                ui->Phone_lineEdit->setEnabled(false);
            } else {
                QMessageBox::warning(this,"Email","Your email has to end with one of these three :"
                                                    "<li>"
                                                    "@gmail.com"
                                                    "<li>"
                                                    "<li>"
                                                    "@email.com"
                                                    "<li>"
                                                    "<li>"
                                                    "@mail.um.ac"
                                                    "<li>");
            }
        } else {
            QMessageBox::warning(this,"Password","Your password must have at least 2 numbers and 6 characters");

        }
    } else {
        QMessageBox::warning(this,"Empty spot","pleas fill all the spots");
    }
}

