#include <QCoreApplication>
#include <QDebug> // a trebuit inclus ca sa putem afisa pe ecran


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv); //din cauza QCoreApplication ramane deschisa fereastra cu rezultatele

    QString mStr = "hello world";

    qDebug() << mStr;

    return a.exec();
}
