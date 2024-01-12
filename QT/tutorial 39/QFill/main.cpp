#include <QCoreApplication>
#include <QDebug>
#include <QVector>
#include <QtAlgorithms>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<QString> Vect(5);

    //qFill(Vect, "hello world");
    qFill(Vect.begin() + 1,Vect.end() - 2, "LOL");

    foreach (QString itm, Vect) {
        qDebug() << itm;
    }


    return a.exec();
}
