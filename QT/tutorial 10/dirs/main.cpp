#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QDir mDir;



    if(!mDir.exists())
    {
        mDir.mkpath("aici introducem path ul catre locul unde vrem sa cream un director");
        qDebug() << "Created";
    }
    else
    {
        qDebug() << "already exists";
    }




    return a.exec();
}
