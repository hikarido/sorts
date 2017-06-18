#ifndef INSERTATION_SORT_H
#define INSERTATION_SORT_H

#include <algorithm>
#include <QDebug>
#include "aux_func.h"

/**
 * @brief insertation_sort
 * выпоняет простую сортировку вставками
 * внешний цикл пройдет по всем3 массиву
 * внуренний ищит место для вставки и вставляет элеметs
 * @param array
 * @param size
 */
void insertation_sort(int * array,
                      const unsigned int size);

int insertation_sort_test();

#endif // INSERTATION_SORT_H
