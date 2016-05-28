#ifndef QRTEST_GLOBAL_H
#define QRTEST_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QRTEST_LIBRARY)
#  define QRTESTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QRTESTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QRTEST_GLOBAL_H
