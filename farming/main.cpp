#include "signup.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    signup w;
    w.show();
    return a.exec();

    // // In main.cpp
    // for (int i = 0; i < buttons.size(); ++i)
    // {
    //     QObject::connect(&Selection, &Page2::pushButtonClicked, &page1, &Page1::changePushButtonColor);
    // }

}
