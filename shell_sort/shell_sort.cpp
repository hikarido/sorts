
#include "shell_sort.h"



int shell_sort_test()
{
    qDebug() << "shell sort test start";
    const unsigned int size = 20;
    const int min = -10;
    const int max = 10;
    int * array = make_random_array(size, min, max);

    if(array == nullptr)
    {
        qFatal("nullptr from \"make_random_array\"");
    }

    qDebug() << "unsorted";
    print_array(array, size);

    shell_sort(array, size);
    qDebug() << "sorted";
    print_array(array, size);
    qDebug() << "shell sort test end";

    delete[] array;
    return 0;
}


void shell_sort(int *array, unsigned int size)
{
    int subarray_count = size/2;
    while(subarray_count > 0)
    {
        for(int start_pos = 0;
            start_pos < subarray_count;
            start_pos++)
        {
            gap_insert_sort(array,
                            start_pos,
                            subarray_count,
                            size);
        }
        subarray_count /= 2;
    }

}


void gap_insert_sort(int *array,
                     int start,
                     int gap,
                     unsigned int size)
{
    for(unsigned int i = start + gap;
        i < size;
        i += gap)
    {
        int cur_value = array[i];
        int cur_pos = i;

        while(cur_pos >= gap &&
              array[cur_pos - gap] > cur_value)
        {
            array[cur_pos] = array[cur_pos - gap];
            cur_pos = cur_pos - gap;
        }

        array[cur_pos] = cur_value;
    }
}
