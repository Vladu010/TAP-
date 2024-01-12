#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w; //creaza un obiect din clasa MainWindow
    w.show(); // ca sa apara fereastra la rulare
    return a.exec(); // asteapta pana la iesire din aplicatie
}
