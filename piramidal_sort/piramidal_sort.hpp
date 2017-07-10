#include <vector>
#include <algorithm>
#include <cmath>

using std::vector;
using std::swap;
using std::floor;
/**
 * @brief get_left
 * индексирует мкссив как бинарное дерево
 * @param i
 * текущая позиция для получения индекса дочерней ноды
 * @return
 * нндекс евой дочерней ноды
 */
int get_left(const int i);

/**
 * @brief get_right
 * индексирует массив как бинарное дерево
 * @param i
 * текущая позиция щля получения индекса дочерней ноды
 * @return
 * индекс правой дочерней ноды
 */
int get_right(const int i);

/**
 * @brief max_heapify
 * сортрует тройку -  parent (i) child(2i+1)child(2i+2) в порядке не возрстания
 * @param array
 * vector в котором располагается сортируемая тройка
 * @param i
 * индекс parent
 */
void  max_heapify(vector<int> & array, const int i);

/**
 * @brief build_max_heap
 * apply  max_heapify to all array sequence
 * @param array
 */
void build_max_heap(vector<int> & array);

/**
 * @brief heap_sort
 * perform piramidal sort
 * @param array
 */
void heap_sort(vector<int> & array);
