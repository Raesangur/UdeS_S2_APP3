#include "CommunicationFPGA.h"
#include "Interface.h"
#include "vector.h"
#include <iostream>
#include <string>

#include <QApplication>

int main(int argc, char** argv)
{
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
