#ifndef QRTESTSUITEREGISTRY_H
#define QRTESTSUITEREGISTRY_H


#include <QString>
#include <QHash>

#include "qrtest_global.h"

namespace Qters {

namespace QrTest {

class QrTestSuiteFactory;

class QRTESTSHARED_EXPORT QrTestSuiteRegistry
{
    Q_DISABLE_COPY(QrTestSuiteRegistry)

private:
    QrTestSuiteRegistry();

public:
    static QrTestSuiteRegistry* getInstance();

public:
    void registerFactory(QrTestSuiteFactory* factory);
    QrTestSuiteFactory* getFactory(const QString& name);
    QList<QrTestSuiteFactory*> getAllFactories() const;

private:
    static QMutex mutex;
    static QrTestSuiteRegistry* instance;
    QHash<QString, QrTestSuiteFactory*> m_factories;
};

}   //  namespace QrTest

}   //  namespace Qters

#endif // QRTESTSUITEREGISTRY_H
