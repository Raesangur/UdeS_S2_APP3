#include "CommunicationFPGA.h"
#include "Interface.h"
#include <QApplication>

int
main(int argc, char** argv)
{
    QApplication      app(argc, argv);
    CommunicationFPGA fpga;
    Interface         gui("TestCarte");

    return app.exec();
}
