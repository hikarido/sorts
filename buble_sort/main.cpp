#include <QCoreApplication>
#include <algorithm>
#include <QDebug>
#include <random>

/**
  * @brief buble_sort
  * просьая орттровка методом пузырька без лишнх сравненей.
  *  j начинает проод с конца массива
  * @param array
  * указатель на сортируемый массив
  * @param size
  * размер array
  */
 void buble_sort(int * array, const int size)
 {
    for(int i = 0; i < size; i++)
    {
        for(int j = size - 1; j > i; j--)
        {
            if(array[i] < array[j])
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
 * @brief main
 *  тест для buble_sort(); прямиком из армии
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
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

    return a.exec();
}

