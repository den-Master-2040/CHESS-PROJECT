#include <QCoreApplication>
#include <iostream>
#include "server.h"
int main(int argc, char *argv[])
{
    for(int i = 0; i < argc; ++i)
    {
        std::cout << i <<" parametr = " << argv[i]<< std::endl;
    }
    QCoreApplication a(argc, argv);
    Server s;
    return a.exec();
}
