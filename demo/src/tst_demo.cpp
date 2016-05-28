#include "tst_demo.h"

#include <QtTest/qtestcase.h>

void tst_Demo::toUpper() {
    QString str = "hello";
    QCOMPARE(str.toUpper(), QString("HELLO"));
}

void tst_Demo::toLower() {
    QString str = "Hello";
    QCOMPARE(str.toLower(), QString("hello"));
}
