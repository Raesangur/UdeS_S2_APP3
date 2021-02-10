#include <iostream>
#include <QApplication>
#include "CommunicationFPGA.h"
#include "vector.h"
#include "centralwidget.h"
#include "leds.h"
#include "switches.h"
#include "VisiTest.h"
#include "MonInterface.h"



int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    MonInterface gui("CarteTest");

    return app.exec();
    
}