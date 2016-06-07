#ifndef QRRUNNER_H
#define QRRUNNER_H

#include "qrtest_global.h"

NS_QRTEST_BEGIN

class QrTestSuiteFactory;

/*!
 * \brief The Runner class
 */
class QRTESTSHARED_EXPORT QrRunner {
public:
    static int runAllTest();
    static int runTest(QrTestSuiteFactory* factory);
};

NS_QRTEST_END

#endif // QRRUNNER_H
