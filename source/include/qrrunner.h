#ifndef QRRUNNER_H
#define QRRUNNER_H

#include "qrtest_global.h"

namespace Qters {

namespace QrTest {

class QrTestSuiteFactory;

/*!
 * \brief The Runner class
 */
class QRTESTSHARED_EXPORT QrRunner {
public:
    static int runAllTest();
    static int runTest(QrTestSuiteFactory* factory);
};

}   //  namespace QrTest

}   //  namespace Qters

#endif // QRRUNNER_H
