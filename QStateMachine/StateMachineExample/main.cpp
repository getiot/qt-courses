#include <QCoreApplication>
#include <QStateMachine>
#include <QDebug>
#include <QDate>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Date:" << QDate::currentDate().toString();

    QStateMachine machine;
    QState *s1 = new QState();
    machine.addState(s1);
    machine.setInitialState(s1);
    machine.start();

    return a.exec();
}
