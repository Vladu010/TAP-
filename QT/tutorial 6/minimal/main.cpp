#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[]){

    QApplication app(argc, argv);
    QLabel *label = new QLabel("<h2>hello</h2> <font color = red><i>world</i></font>");

    label->show();

    return app.exec();

}
