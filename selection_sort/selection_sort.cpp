
#include "selection_sort.h"


void selection_sort(int *array, const unsigned int size)
{
    int min = array[0];
    int min_pos = 0;

    for(unsigned int i = 0; i < size - 1; i++)
    {
        //search min element
        for(unsigned int j = i; j < size; j++)
        {
            if(array[j] < min)
            {
                min = array[j];
                min_pos = j;
            }
        }
//        qDebug() << i <<":" << min_pos;

        std::swap(array[i], array[min_pos]);
        min = array[i + 1];
        min_pos = i + 1;
    }
}


int selection_sort_test()
{
    qDebug() << "selection sort test start";
    const unsigned int size = 100;
    const int min = -10;
    const int max = 10;
    int * array = make_random_array(size, min, max);

    if(array == nullptr)
    {
        qFatal("nullptr from \"make_random_array\"");
    }

    qDebug() << "unsorted";
    print_array(array, size);

    selection_sort(array, size);
    qDebug() << "sorted";
    print_array(array, size);
    qDebug() << "selection sort test end";

    delete[] array;
    return 0;
}
