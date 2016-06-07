#ifndef QRTEST_GLOBAL_H
#define QRTEST_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QRTEST_LIBRARY)
#  define QRTESTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QRTESTSHARED_EXPORT Q_DECL_IMPORT
#endif

//  qrtest namespace
#define NS_QRTEST_BEGIN \
    namespace Qters { \
    namespace QrTest {
#define NS_QRTEST_END \
    } \
    }
#define USING_NS_QRTEST    using namespace Qters::QrTest
#define NS_QRTEST  ::Qters::QrTest

#endif // QRTEST_GLOBAL_H
