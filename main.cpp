#include <QCoreApplication>
#include <QDebug>
#include "buble_sort/buble_sort.h"

/**
 * @brief main make test for sorts
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    buble_sort_test();
    return a.exec();
}
