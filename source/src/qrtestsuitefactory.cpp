#include "qrtestsuitefactory.h"

#include "qrtestsuiteregistry.h"

USING_NS_QRTEST;

QrTestSuiteFactory::QrTestSuiteFactory(const QString& _suiteName, const QString& _fileName)
    :suiteaName(_suiteName), fileName(_fileName)
{
    QrTestSuiteRegistry::getInstance()->registerFactory(this);
}

QString QrTestSuiteFactory::suiteName() const
{
    return suiteaName;
}

void QrTestSuiteFactory::setSuiteName(const QString &value)
{
    suiteaName = value;
}

QString QrTestSuiteFactory::getFileName() const
{
    return fileName;
}

void QrTestSuiteFactory::setFileName(const QString &value)
{
    fileName = value;
}
