#include "qrrunner.h"

#include <QScopedPointer>
#include <QtTest/QtTest>

#include <iostream>

#include "qrtestsuitefactory.h"
#include "qrtestsuiteregistry.h"

using namespace Qters::QrTest;

int QrRunner::runAllTest()
{
    foreach (QrTestSuiteFactory* factory, QrTestSuiteRegistry::getInstance()->getAllFactories()) {
        runTest(factory);
        std::cout << std::endl;
    }
    return 0;
}

int QrRunner::runTest(QrTestSuiteFactory *factory)
{
    QScopedPointer<QObject> testSuite(factory->create());
    return QTest::qExec(testSuite.data());
}
