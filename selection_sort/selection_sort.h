#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include <algorithm>
#include <QDebug>
#include "aux_func.h"

/**
  * @brief selection_sort
  * выполняет сортировку выбором
  * на каждой  итерации внутреннего цикла находитя
  * минимальный элемент и он встает на позицию i
  * i  сужает область поиска
  * @param array
  * @param size
  */
void selection_sort(int * array, const unsigned int size);

/**
 * @brief selection_sort_tesr
 * тесирует selection_sort
 * @return
 */
int selection_sort_test();

#endif // SELECTION_SORT_H
