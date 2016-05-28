#ifndef TST_DEMO_H
#define TST_DEMO_H

#include "qrtestsuitefactory.h"

class TESTSUITE(tst_Demo) tst_Demo : public QObject
{
    Q_OBJECT

private slots:
    void toUpper();
    void toLower();
};

#endif // TST_DEMO_H
