#include <QtCore/QCoreApplication>

#include <QtSql>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString servername = "LOCALHOST\\SQLEXPRESS";
    QString dbname = "test";
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setConnectOptions();
    QString dsn = QString("DRIVER={SQL Native Client};SERVER=%1;DATABASE=%2;Trusted_Connection=Yes;").arg(servername).arg(databasename);
    db.setDatabaseName(dsn);


    if(db.open())
    {
        qDebug() << "Opened";

        
        QString sQuery = "INSERT INTO [test].[dbo].[People] ({FirstName},{LastName}) VALUES(:first, :last)";

        QSqlQuery qry;

        qry.prepare(sQuery);

        qry.bindValue(":first","noje");
        qry.bindValue(":last","ionut");

        if(qry.exec())
        {
            qDebug() << "record inserted";
        }

        qDebug() << "closing";


        db.close();
    }
    else
    {
        qDebug() << db.lastError().text();
    }

    return a.exec();
}

