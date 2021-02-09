TEMPLATE     = vcapp
TARGET       = TestCarte
CONFIG      += warn_on qt debug_and_release windows console c++17
HEADERS     += MonInterface.h CommunicationFPGA.h centralwidget.h leds.h switches.h VisiTest.h
SOURCES     += 
INCLUDEPATH += ./VisiTest-VS2019-x64-Qt6 ./CommunicationFPGA-v2.2-VS2019-x64
LIBS	      += ./VisiTest-VS2019-x64-Qt6/VisiTest.lib ./CommunicationFPGA-v2.2-VS2019-x64/CommunicationFPGA.lib
QT += widgets
