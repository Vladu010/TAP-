#include <QCoreApplication>
#include <QtDebug>
#include <QtAlgorithms>



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;
    List << 1 << 4 << 15 << 21;

    QList<int>::const_iterator Iter = qFind(List.begin(),List.end(),15);

    if(Iter != List.end())
    {
        qDebug() << "Found: " << *Iter;
    }
    else
    {
        qDebug() << "Not found";
    }

    return a.exec();
}
