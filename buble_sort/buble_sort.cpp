#include "buble_sort.h"

void buble_sort(int * array, const int size)
{
    //int tmp = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(array[j] > array[i])
            {
               //tmp = array[i];
               //array[i] = array[j];
               //array[j] = tmp;
               std::swap(array[i], array[j]);
            }
        }
    }
}

int buble_sort_test()
{
    qDebug() << "buble sort test start";
    const unsigned int size = 10;
    const int min = -10;
    const int max = 10;
    int * array = make_random_array(size, min, max);

    if(array == nullptr)
    {
        qFatal("nullptr from \"make_random_array\"");
    }

    for(int i = 0; i < size; i++)
    {
        qDebug() << "\t" <<  array[i];
    }

    buble_sort(array, size);
    qDebug() << "sorted";
    for(int i = 0; i < size; i++)
    {
        qDebug() << "\t" << array[i];
    }
    qDebug() << "buble sort test end";

    delete[] array;
    return 0;
}



/**
 * @brief no_stupid_buble_sort
 * j начинает проход с конца  масива array
 * и декрементируется до текущего положения i,
 * тем самым искючая проход по уже отсртированной
 * бласти
 * @param array
 * @param size
 */
void no_stupid_buble_sort(int *array, const int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = size - 1; j > i; j--)
        {
            if(array[i] > array[j])
            {
                std::swap(array[i], array[j]);
            }
        }
    }
}
