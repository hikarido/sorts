#include "insertation_sort.h"



int insertation_sort_test()
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

    insertation_sort(array, size);
    qDebug() << "sorted";
    print_array(array, size);
    qDebug() << "insertation sort test end";

    delete[] array;
    return 0;
}


void insertation_sort(int *array, const unsigned int size)
{
//free think....    s
//    int inserted_elem = 0;
//    int insert_pos = 1;
//    bool write_needed = false;

//    for(unsigned int i = 1; i < size; i++)
//    {
//        inserted_elem = array[i];
//        unsigned int j = i;
//        write_needed = false;

//        while(j > 0 && inserted_elem < array[j - 1])
//        {
//            array[j] = array[j - 1];
//            insert_pos = j - 1;
//            j--;
//            write_needed = true;
//        }

//        if(write_needed)
//        {
//            array[insert_pos] = inserted_elem;
//        }
//        print_array(array, size);
//    }

//second thing
    for(unsigned i = 0; i < size; i++)
    {
        int inserted_elem = array[i];
        int j = i - 1;
        for(;
            j >= 0 && array[j] > inserted_elem;
            j--)
        {
            array[j + 1] = array[j];
        }
        array[j + 1] = inserted_elem;
    }
}
