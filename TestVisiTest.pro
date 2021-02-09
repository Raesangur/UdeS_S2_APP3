TEMPLATE     = vcapp
TARGET       = TestVisiTest
CONFIG      += warn_on qt debug_and_release windows console
HEADERS     += MonInterface.h
SOURCES     += TestVisiTest.cpp MonInterface.cpp
INCLUDEPATH += ./
LIBS	      += ./VisiTest.lib
QT += widgets
