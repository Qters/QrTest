CONFIG   += console
CONFIG   -= app_bundle

QT += testlib

QR_TEST_PRO = $$PWD/../source

include($$PWD/../config.pri)

CONFIG(debug, debug|release) {
    LIBS += \
        -L$$QR_TEST_PRO/../../build_debug_qrtest/ -lQrTestd
}

CONFIG(release, debug|release) {
    LIBS += \
        -L$$QR_TEST_PRO/../../build_release_qrtest/ -lQrTest
}

INCLUDEPATH += \
    $$PWD/include \
    $$QR_TEST_PRO\include \

HEADERS +=  \
    include/tst_demo.h \

SOURCES += \
    src/main.cpp \
    src/tst_demo.cpp \
