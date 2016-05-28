
QT += testlib
QT -= gui

DEFINES += QRTEST_LIBRARY

TEMPLATE = lib
TARGET = QrTest

include($$PWD/../config.pri)
include($$PWD/../output.pri)

INCLUDEPATH += \
    $$PWD/include \

HEADERS += \
    include\qrtest_global.h \
    include\qrtestsuitefactory.h \
    include\qrrunner.h \
    include\qrtestsuiteregistry.h

SOURCES += \
    src\qrtestsuiteregistry.cpp \
    src\qrtestsuitefactory.cpp \
    src\qrrunner.cpp
