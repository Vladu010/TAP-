#include <QCoreApplication>

#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;

    for(int i = 0; i < 10; i++)
    {
        List.append(i);
    }

   QListIterator<int> Iter(List);

   while(Iter.hasNext())
   {
       qDebug() << Iter.next();
   }

    return a.exec();
}
