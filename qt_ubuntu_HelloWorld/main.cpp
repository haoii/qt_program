#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}


//#include <QApplication>
//#include <QLabel>

//int main(int argc, char *argv[])
//{
//    QApplication app(argc, argv);

//    QLabel label("Hello, world");
//    label.show();

//    return app.exec();
//}


//#include <QApplication>
//#include <QPushButton>

//int main(int argc, char *argv[])
//{
//    QApplication app(argc, argv);

//    QPushButton button("Quit");
//    QObject::connect(&button, &QPushButton::clicked, &QApplication::quit);
//    button.show();

//    return app.exec();
//}


//#include <QApplication>
//#include <QPushButton>
//#include <QDebug>

//int main(int argc, char *argv[])
//{
//    QApplication app(argc, argv);

//    QPushButton button("Quit");
//    QObject::connect(&button, &QPushButton::clicked, [](bool) {
//       qDebug() << "You clicked me!";
//    });
//    button.show();

//    return app.exec();
//}
