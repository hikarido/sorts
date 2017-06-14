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

    qDebug() << "unsorted";
    print_array(array, size);

    buble_sort(array, size);
    qDebug() << "sorted";
    print_array(array, size);
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


int no_stupid_buble_sort_test()
{
    const int min = -10;
    const unsigned int max = 10;
    const unsigned int size = 10;
    int * array = make_random_array(size, min, max);
    if(array == nullptr)
    {
        qFatal("nullptr from \"make_random_array\"");
    }

    qDebug() << "unsorted";
    print_array(array, size);
    no_stupid_buble_sort(array, size);
    qDebug() << "sorted";
    print_array(array, size);
    qDebug() << "no stupid buble sort test end";
    delete[] array;
    return 0;

}


void canonical_buble_sort(int *array, const unsigned int size)
{
    for(unsigned int i = 0; i < size; i++)
    {
        for(unsigned int j = size - 1; j > i; j--)
        {
            if(array[j] < array[j - 1])
            {
                std::swap(array[j], array[j - 1]);
            }
        }
    }
}


int canonical_buble_sort_test()
{
    const int min = -10;
    const unsigned int max = 10;
    const unsigned int size = 10;
    int * array = make_random_array(size, min, max);
    if(array == nullptr)
    {
        qFatal("nullptr from \"make_random_array\"");
    }

    qDebug() << "unsorted";
    print_array(array, size);
    canonical_buble_sort(array, size);
    qDebug() << "sorted";

    print_array(array, size);
    qDebug() << "canonical buble sort test end";
    delete[] array;
    return 0;

}
