#ifndef LEER_ARCHIVO_CSV_SHELLSORT_H
#define LEER_ARCHIVO_CSV_SHELLSORT_H
#include <iostream>
#include <vector>
#include <iterator>
#include "Country_trade.h"

using namespace std;

namespace ShellSort{

    template <class Container>
    auto shellSort(Container & cnt){
        auto n = distance(cnt.begin(),cnt.end());

        for (int gap = n/2; gap > 0; gap /= 2)
        {
            for (int i = gap; i < n; i++)
            {
                auto temp = *(cnt.begin() + i);

                int j;
                for (j = i; j >= gap && *(cnt.begin() + j - gap) > temp; j -= gap) {
                    int x = j - gap;
                    *(cnt.begin() + j) = *(cnt.begin() + x);
                }
                *(cnt.begin() + j ) = temp;
            }
        }

    }
    template <typename iterator>
    void imprimir(iterator begin, iterator end){
        std::copy( begin, end , std::ostream_iterator<float>(std::cout, " "));
        std::cout<<std::endl;
        std::cout<<std::endl;
    }


    template <typename Container>
    void imprimir_string(Container &c){
        for(auto i:c){
            std::cout<<i<<" ";
        }
        std::cout<<std::endl;
        std::cout<<std::endl;
    }
}
#endif //LEER_ARCHIVO_CSV_SHELLSORT_H