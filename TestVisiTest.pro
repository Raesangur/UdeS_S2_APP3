TEMPLATE     = vcapp
TARGET       = TestCarte
CONFIG      += warn_on qt debug_and_release windows console c++17
HEADERS     += vector.h vector.inl CommunicationFPGA.h centralwidget.h leds.h switches.h VisiTest.h
SOURCES     += testcarte.cpp
INCLUDEPATH += ./ ./VisiTest ./CommunicationFPGA
LIBS	      += ./VisiTest/VisiTest.lib ./CommunicationFPGA/CommunicationFPGA.lib
QT += widgets
