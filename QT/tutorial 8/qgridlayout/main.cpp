#include <QApplication>
#include <QtGui>
#include <QtCore/QtCore>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget *window = new QWidget;
    window->setWindowTitle("my app");

    QGridLayout *layout = new QGridLayout;

    QLabel *label1 = new QLabel("name: ");
    QLineEdit *txtName = new QLineEdit;

    QLabel *label2 = new QLabel("name: ");
    QLineEdit *txtName2 = new QLineEdit;

    QLabel *label3 = new QLabel("name: ");
    QLineEdit *txtName3 = new QLineEdit;

    layout->addWidget(label1,0,0);
    layout->addWidget(txtName,0,1);

    layout->addWidget(label2,1,0);
    layout->addWidget(txtName2,1,1);

    layout->addWidget(label3,2,0);
    layout->addWidget(txtName3,2,1);


    QPushButton *button = new QPushButton("ok");

    layout->addWidget(button,3,0,1,2);

    window->setLayout(layout);

    window->show();
    return app.exec();
}
