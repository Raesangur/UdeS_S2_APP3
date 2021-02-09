#include "CommunicationFPGA.h"
#include "Interface.h"
#include <QApplication>
#include <iostream>
#include "vector.h"
#include <string>

int main(int argc, char** argv)
{
    vector<std::string> a;
    a += "Bon matin";

    QApplication      app(argc, argv);
    CommunicationFPGA fpga;

    if(!fpga.estOk())
    {
        std::cout << fpga.messageErreur() << std::endl;
        return 1;
    }

    Interface gui("TestCarte", fpga);

    return app.exec();
}
