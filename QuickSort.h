#ifndef LEER_ARCHIVO_CSV_QUICKSORT_H
#define LEER_ARCHIVO_CSV_QUICKSORT_H
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>
#include "Country_trade.cpp"

using namespace std;

namespace QuickSort{

    template <typename iterator>
    iterator partition(iterator left, iterator right)
    {
        auto i = left-1;

        for(auto it = left; it < right ; std::advance(it,1) )
        {

            if(*it <= *right)
            {
                using std::swap;
                ++i;
                swap(*i,*it);
            }
        }

        std::swap(*(i+1),*right);
        return ++i;
    }

    template <typename iterator>
    void quicksort(iterator left, iterator right) {
        if (left < right) {
            if (std::distance(left, right) >= 1) {
                auto pivot = partition(left, right);
                quicksort(left, pivot - 1);
                quicksort(pivot + 1, right);
            }
        }

    }
    template <typename Container>
    void quicksort(Container &c) {
        quicksort(c.begin(), c.end()-1);
    }

    template <typename iterator, typename Container>
    void imprimir(Container &c, iterator begin, iterator end){
        copy( begin, end , std::ostream_iterator<float>(cout, " "));
        cout<<std::endl;
        cout<<std::endl;
    }




    template <typename Container>
    void imprimir_string(Container &c){
        for(auto i:c){
            cout<<i<<" ";
        }
        cout<<std::endl;
        cout<<std::endl;
    }

}

#endif //LEER_ARCHIVO_CSV_QUICKSORT_H