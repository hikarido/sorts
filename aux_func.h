#ifndef AUX_FUNC_H
#define AUX_FUNC_H

#include <random>
#include <QDebug>

/**
 * @brief make_random_array
 * выделит память под массив размером size и
 *  заполнит его случайными числами
 * для валидации возвращаемого указателя
 * используйте проверку на нулевой указатель
 * @param array
 * @param size
 * @return  new array in dinamic memory with size or nullptr
 * don 't remember to use  nullptr chack and delete[]
 */
int * make_random_array(const unsigned int size,
                        int min, int max) noexcept(true);
/**
 * @brief print_array
 * вводит на экран массив array
 * если array is nullptr вывоодит сообщение
 * pointer is ivalid
 * @param array
 * @param size
 */
void print_array(int * array, const unsigned int size);
#endif // AUX_FUNC_H
