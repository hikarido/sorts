#include <algorithm>
#include <QDebug>
#include "aux_func.h"

/**
  * @brief buble_sort
  * простая сорттровка методом пузырька
  * сортирует array по возростанию
  * @param array
  * указатель на сортируемый массив
  * @param size
  * размер array
  */
 void buble_sort(int * array, const int size);

 /**
 * @brief buble_sort_test
 *  тест для buble_sort(); прямиком из армии
 * @return
 */
int buble_sort_test();

void  no_stupid_buble_sort(int *array, const int size);
