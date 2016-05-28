**main**
```cpp
#include "testsuitefactory.h"
#include "runner.h"

int main(int argc, char *argv[])
{
    Q_UNUSED(argc);
    Q_UNUSED(argv);
    return Qters::QrTest::Runner::runAllTest ();
}
```



**how to append new test case**

    1. create class file, inherit from QObject
    2. #include "testsuitefactory.h"
    3. add macro before class name like this:
      FORMAT: class TESTSUITE(class_name) class_name : public QObject
    4. one private slot is one test case
    Qt Test Tutorial：http://doc.qt.io/qt-5/qtest-tutorial.html

**demo**

*demo class's header*
```cpp
#ifndef TST_DEMO_H
#define TST_DEMO_H

#include "testsuitefactory.h"
class TESTSUITE(TestDemo) TestDemo : public QObject
{
    Q_OBJECT

private slots:
    void toUpper();
    void toLower();
};

#endif // TST_DEMO_H
```

*demo class's cpp*
```cpp
#include "tst_demo.h"

#include <QtTest/qtestcase.h>

void TestDemo::toUpper() {
    QString str = "hello";
    QCOMPARE(str.toUpper(), QString("HELLO"));
}

void TestDemo::toLower() {
    QString str = "Hello";
    QCOMPARE(str.toLower(), QString("hello"));
}
```
