#include "mainwindow.h"
#include <server.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    return a.exec();
}


//TO DO
//1) Проверка на своих: если свои ходят на своих, не должен проходить ход
//2) Дизайн
//3) Таймер хода
//4) Стартовое окно
//5) Подсветка ходов
//6) ИИ
//
