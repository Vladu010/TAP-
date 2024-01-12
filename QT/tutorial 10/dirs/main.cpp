#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /*
    QDir mDir("C:\\Users\\noje_\\OneDrive\\Desktop\\facultate\\an 2\\TAP\\tutoriale qt\\tutorial 10");

    qDebug() << mDir.exists();

    */

    QDir mDir;

    /*
    foreach(QFileInfo mItm, mDir.drives())
    {
        qDebug() << mItm.absoluteFilePath();
    }
*/

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
