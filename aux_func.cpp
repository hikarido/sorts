#include <aux_func.h>

int *make_random_array(const unsigned int size,
                       int min, int max) noexcept(true)
{
    int * array = new(std::nothrow) int[size];

    if(array == nullptr)
    {
        return nullptr;
    }

    std::random_device dv;
    std::uniform_int_distribution<int> dr(min, max);
    for(unsigned int i = 0; i < size; i++)
    {
        array[i] = dr(dv);
    }

    return array;

}


void print_array(int *array, const unsigned int size)
{
    if(array != nullptr)
    {
        for(unsigned int i = 0; i < size; i++)
        {
            qDebug() << "\t" <<  array[i];
        }
        return;
    }

    qDebug() << "pointer is invalid";
}
