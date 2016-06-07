
#ifndef QRTESTSUITEFACTORY_H
#define QRTESTSUITEFACTORY_H

#include <QtCore/qobject.h>
#include <QtCore/qstring.h>
#include <QtTest/qtest.h>

#include "qrtest_global.h"

#ifndef QRTEST_LIBRARY
#define TESTSUITE(ClassName) \
    ClassName; \
    static Qters::QrTest::QrTestCaseFactoryImpl<ClassName>* TestCaseFactory_##ClassName \
    = Qters::QrTest::QrTestCaseFactoryImpl<ClassName>::init(#ClassName, __FILE__); \
    class
#endif

NS_QRTEST_BEGIN

/*!
 * \brief The TestSuiteFactory class
 */
class QRTESTSHARED_EXPORT QrTestSuiteFactory
{
public:
    QrTestSuiteFactory(const QString& _suiteName, const QString& _fileName);

public:
    virtual QObject* create() = 0;

public:
    QString suiteName() const;
    void setSuiteName(const QString &value);

    QString getFileName() const;
    void setFileName(const QString &value);

private:
    QString suiteaName;
    QString fileName;
};

/*!
 *
 */
template<typename T>
class QrTestCaseFactoryImpl : public QrTestSuiteFactory {
private:
    QrTestCaseFactoryImpl(const QString& suiteName, const QString& filePath)
        : QrTestSuiteFactory(suiteName, filePath) { }
public:
    static QrTestCaseFactoryImpl<T>* init(const char* suiteName, const char* filePath) {
        static QrTestCaseFactoryImpl<T> instance(suiteName, filePath);
        return &instance;
    }

    virtual QObject* create() {
        return new T();
    }
};

NS_QRTEST_END

#endif // QRTESTSUITEFACTORY_H
