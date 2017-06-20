#include <QCoreApplication>
#include <QDebug>
#include "buble_sort/buble_sort.h"
#include "selection_sort/selection_sort.h"
#include "insertation_sort/insertation_sort.h"
#include "shell_sort/shell_sort.h"
/**
 * @brief main make test for sorts
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[])

{
    QCoreApplication a(argc, argv);

//    buble_sort_test();
//    no_stupid_buble_sort_test();
//    canonical_buble_sort_test();
//    shacker_sort_test();
//    selection_sort_test();
//    insertation_sort_test();
    shell_sort_test();
    return a.exec();
}

