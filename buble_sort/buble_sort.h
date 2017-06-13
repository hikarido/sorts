#include <algorithm>
#include <QDebug>
#include <random>

/**
  * @brief buble_sort
  * простая сорттровка методом пузырька
  * @param array
  * указатель на сортируемый массив
  * @param size
  * размер array
  */
 void buble_sort(int * array, const int size)
 {
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(array[j] < array[i])
            {
               //int tmp = array[i];
               //array[i] = array[j];
               //array[j] = tmp;
               std::swap(array[i], array[j]);
            }
        }
    }
 }
 /**
 * @brief buble_sort_test
 *  тест для buble_sort(); прямиком из армии
 * @return
 */
int buble_sort_test()
{
    qDebug() << "buble sort test start";
    const int size = 10;
    int * array = new int[size];

    std::random_device dv;
    std::uniform_int_distribution<int> dr(-10, 10);
    for(int i = 0; i < size; i++)
    {
        array[i] = dr(dv);
        qDebug() << "\t" <<  array[i];
    }

    buble_sort(array, size);
    qDebug() << "sorted";
    for(int i = 0; i < size; i++)
    {
        qDebug() << "\t" << array[i];
    }
    qDebug() << "buble sort test end";
    return 0;
}


