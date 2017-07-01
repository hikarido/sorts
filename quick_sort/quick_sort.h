#ifndef QUICK_SORT_H
#define QUICK_SORT_H
#include <aux_func.h>
#include<algorithm>

/**
 * @brief reqursion_quick_sort
 * рекурсивный вариант быстрой сортировки
 * @param array
 * сортируемый массив
 * @param p
 * @param r
 * зона сортировки для запуска функции (p, r]
 */
void reqursion_quick_sort(int * array,
                          int p, int r);

/**
 * @brief quick_sort_test
 * тест для quick_sort
 * @return
 */
int quick_sort_test();
/**
 * @brief simple_partition
 * простая функция разбиения на подмассивы и их сонтировки
 *
 * @param array
 * сортируемый массив
 * @param p
 * правая граница сортировки
 * @param r
 * правая граница согтировки
 * @return
 */
int simple_partition(int * array, int p, int r);
#endif // QUICK_SORT_H
