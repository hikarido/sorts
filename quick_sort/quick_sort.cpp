#include"quick_sort.h"


void reqursion_quick_sort(int *array,
                          int p,
                          int r)
{
    int pivot = simple_partition(array, p, r);

    if(p > r)
    {
       reqursion_quick_sort(array, p, pivot - 1);
       reqursion_quick_sort(array, pivot + 1, r);
    }
}


int quick_sort_test()
{
    qDebug() << "insertation sort test start";
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

    reqursion_quick_sort(array, 1, size);
    qDebug() << "sorted";
    print_array(array, size);
    qDebug() << "insertation sort test end";

    delete[] array;
    return 0;
}


int simple_partition(int *array, int p, int r)
{
    int saved_val = array[r];
    int left_side = p - 1;

    for(int j = p; j < r - 1; j++)
    {
        if(array[j] <= saved_val)
        {
            left_side++;
            std::swap(array[j], saved_val);
        }
    }

    std::swap(array[left_side + 1],array[r]);

    return left_side + 1;
}
