#include <algorithm>
#include <QDebug>
#include "aux_func.h"

/**
  * @brief buble_sort
  * простая сортировка методом пузырька
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

/**
 * @brief no_stupid_buble_sort
 * сортирует array по возротанию  стем о личием от
 * @see buble_sort что индекс j отсчитывается от конца
 * array тем самым исключается проход по уже
 * отсортиршванной области  индекс которой < i
 * @param array
 * @param size
 */
void  no_stupid_buble_sort(int *array, const int size);

/**
 * @brief no_stupid_buble_sort_test
 * @return
 */
int no_stupid_buble_sort_test();

/**
 * @brief canonical_buble_sort
 * минимальный элемент "всплыат" к началу массива
 * j определяет сравниваемую пару
 * i определяет зону еще не порядоченных значений
 * @param array
 * @param size
 */
void canonical_buble_sort(int * array, const unsigned int size);

/**
 * @brief canonical_buble_sort_test
 * @return
 */
int canonical_buble_sort_test();
