#include "AutoTest.h"
#include <QDebug>
#include <QCoreApplication>
// This is all you need to run all the tests
#if 1
    TEST_MAIN
#else
Or supply your own main function
int main(int argc, char *argv[]) {
    int failures = AutoTest::run(argc, argv);
    if (failures == 0) {
        qDebug() << "ALL TESTS PASSED";
    } else {
        qDebug() << failures << " TESTS FAILED!";
    }
    return failures;
}
#endif
