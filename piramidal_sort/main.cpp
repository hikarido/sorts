#include <iostream>
#include "piramidal_sort.hpp"
#include <algorithm>
#include <vector>
#include <random>

using namespace std;

/**
 * @brief main
 * perform test for piramidal sort algorithm
 * @return
 */
int main()
{
    cout << "start" <<endl;
    vector<int> sorted;
    sorted.assign(10, 0);
    random_device dev;
    uniform_int_distribution<int> dist(-10,10);

    generate(begin(sorted), end(sorted), [&](){return dist(dev);});

    auto print =  [](int & v){cout<< v <<", ";};

    cout << "before:" << endl;
    for_each(sorted.begin(), sorted.end(),print);//must cbegin, cend,  but my compiler not support it...
                                                 //or to my not enought cpp11 skill on this time. I will lern more!

    heap_sort(sorted);
    cout<< "after:" << endl;
    for_each(begin(sorted), end(sorted), print);

}
