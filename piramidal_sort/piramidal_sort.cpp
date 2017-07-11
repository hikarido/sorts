#include "piramidal_sort.hpp"


void max_heapify(vector<int> &array, const int i, const int heap_size)
{
    int left_child_index = get_left(i);
    int right_child_index = get_right(i);

    int index_of_largest = i;

    if(left_child_index < heap_size
            && array[left_child_index] > array[index_of_largest])
    {
        index_of_largest = left_child_index;
    }

    if(right_child_index < heap_size &&
            array[right_child_index] > array[index_of_largest])
    {
        index_of_largest = right_child_index;
    }

    if(index_of_largest != i)
    {
        swap(array[i], array[index_of_largest]);
        max_heapify(array, index_of_largest, heap_size);
    }
}


int get_left(const int i)
{
    return i*2  + 1;
}


int get_right(const int i)
{
    return i*2 + 2;
}


void build_max_heap(vector<int> &array)
{
    for(int i = floor(array.size()/2); i > 0; i--)
    {
       max_heapify(array, i, array.size());
    }
}


void heap_sort(vector<int> &array)
{
    build_max_heap(array);
    int heap_size = array.size();
    for(int i = array.size(); i > 0; i--)
    {
        swap(array[0], array[i]);
        heap_size -= 1;

        max_heapify(array, 0, heap_size);
    }
}
