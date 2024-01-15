#include "signup.h"
#include "ui_signup.h"
#include <QRegularExpression>
#include "QMessageBox"
#include <string>
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include <QIntValidator>
#include "gameframe.h"

signup::signup(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("e:/programming/FinalProject_QT/database/players.db");
    database.open();
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
                QString userInput = ui->captcha_lineEdit->text();
                if (customCompare(userInput, captcha)) {
                     QSqlQuery query;
                    QString s1, s2, s3, s4;
                    //int salary = 10;
                    s1 = ui->UserName_lineEdit->text();
                    s2 = ui->Password_lineEdit->text();
                    s4 = ui->Email_lineEdit->text();
                    s3 = ui->Phone_lineEdit->text();

                    query.exec("INSERT INTO Player(Username, Password, PhoneNumber, Email) VALUES('"+s1+"', '"+s2+"', '"+s3+"', '"+s4+"')");
                    // query.bindValue(":s1", s1);
                    // query.bindValue(":s2", s2);
                    // query.bindValue(":s3", s3);
                    // query.bindValue(":s4", s4);
                    // query.bindValue(":salary", salary);
                    // query.exec();
                    //query.exec("INSERT INTO Player(Username,Password,PhoneNumber,Email,Salary");

                } else {
                    QMessageBox::warning(this,"Captcha","Pleas enter correct captcha.");
                }
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


void signup::on_pushButton_clicked()
{
    GameFrame *s = new GameFrame;
    s->show();
    this->hide();
}

