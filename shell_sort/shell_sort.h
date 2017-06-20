#ifndef SHELL_SORT_H
#define SHELL_SORT_H
#include <algorithm>
#include <QDebug>
#include "aux_func.h"
/**
 * @brief shell_sort
 * выполняет сорт ровку шелла с выборкой подмассивов
 * по формуле array.size / 2 на шаг s
 * @param array
 * @param size
 */
void shell_sort(int * array, unsigned int size);
/**
 * @brief gap_insert_sort
 * выполнет сортировку вставкми дя субмассивов
 * @param array
 * @param start позиция начала сортировки
 * @param gap дистанция между сортируемыми элементами
 * @param size of array
 *
 */
void gap_insert_sort(int *array, int start,int gap,unsigned int size);

/**
 * @brief shell_sort_test
 * выполняет тест сотировки шелла
 * @return
 */
int shell_sort_test();

#endif // SHELL_SORT_H
