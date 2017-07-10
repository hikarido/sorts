#include "piramidal_sort.hpp"


void max_heapify(vector<int> &array, const int i)
{
    int left_child_index = get_left(i);
    int right_child_index = get_right(i);

    int index_of_largest = i;

    if(left_child_index < array.size()
            && array[left_child_index] > array[i])
    {
        index_of_largest = left_child_index;
    }

    if(right_child_index < array.size() &&
            array[right_child_index] > array[index_of_largest])
    {
        index_of_largest = right_child_index;
    }

    if(index_of_largest != i)
    {
        swap(array[i], array[index_of_largest]);
        max_heapify(array, index_of_largest);
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
    for(int i = floor(array.size()/2); i > 0; --i)
    {
       max_heapify(array, i);
    }
}


void heap_sort(vector<int> &array)
{
    build_max_heap(array);
    for(int i = array.size(); i > 1; --i)
    {
        swap(array[1], array[i]);
        max_heapify(array, 0);
    }
}
