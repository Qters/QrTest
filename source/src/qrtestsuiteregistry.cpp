#include "qrtestsuiteregistry.h"

#include "qrtestsuitefactory.h"

USING_NS_QRTEST;

QMutex QrTestSuiteRegistry::mutex;
QrTestSuiteRegistry* QrTestSuiteRegistry::instance = nullptr;

QrTestSuiteRegistry::QrTestSuiteRegistry()
{

}

QrTestSuiteRegistry *QrTestSuiteRegistry::getInstance()
{
    QMutexLocker locker(&QrTestSuiteRegistry::mutex);
    if (nullptr == instance) {
        instance = new QrTestSuiteRegistry();
    }
    return instance;
}

void QrTestSuiteRegistry::registerFactory(QrTestSuiteFactory* factory) {
    this->m_factories.insert(factory->suiteName(), factory);
}

QrTestSuiteFactory *QrTestSuiteRegistry::getFactory(const QString &name) {
    return this->m_factories.value(name, NULL);
}

QList<QrTestSuiteFactory *> QrTestSuiteRegistry::getAllFactories() const {
    return this->m_factories.values();
}
