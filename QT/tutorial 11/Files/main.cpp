#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void Write(QString Filename)
{
    QFile mFile(Filename);
    if(!mFile.open(QFile::WriteOnly | QFile::Text)){
        qDebug() << "nu s a putut deschide fisierul pentru scriere";
        return;
    }

    QTextStream out(&mFile);
    out << "hello world";
    mFile.flush();
    mFile.close();
}


void Read(QString Filename)
{
    QFile mFile(Filename);
    if(!mFile.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "nu s a putut deschide fisierul pentru citire";
        return;
    }

    QTextStream in(&mFile);
    QString mText = in.readAll();

    qDebug() << mText;
    mFile.close();
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString mFilename = "C:\\Users\\noje_\\OneDrive\\Desktop\\facultate\\an 2\\TAP\\tutoriale qt\\tutorial 11\\test1.txt";
    Write(mFilename);
    Read(mFilename);

    return a.exec();
}
