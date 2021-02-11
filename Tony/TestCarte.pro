TEMPLATE     = vcapp
TARGET       = TestCarte
CONFIG      += warn_on qt debug_and_release windows console c++latest
HEADERS     += ./MonInterface/MonInterface.h ./CommunicationFPGA-v2.2-VS2019-x64/CommunicationFPGA.h ./VisiTest-VS2019-x64-Qt6/centralwidget.h ./VisiTest-VS2019-x64-Qt6/leds.h ./VisiTest-VS2019-x64-Qt6/switches.h ./VisiTest-VS2019-x64-Qt6/VisiTest.h ./Vector/vector.h
SOURCES     += TestCarte.cpp ./MonInterface/MonInterface.cpp ./Vector/vector.inl
INCLUDEPATH += ./VisiTest-VS2019-x64-Qt6 ./CommunicationFPGA-v2.2-VS2019-x64 ./Vector ./MonInterface
LIBS	      += ./VisiTest-VS2019-x64-Qt6/VisiTest.lib ./CommunicationFPGA-v2.2-VS2019-x64/CommunicationFPGA.lib
QT += widgets
