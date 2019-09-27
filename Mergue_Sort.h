#ifndef LEER_ARCHIVO_CSV_MERGUE_SORT_H
#define LEER_ARCHIVO_CSV_MERGUE_SORT_H
#include <iostream>
#include <vector>


namespace Mergue_Sort {

    using namespace std;

    template<typename T>
    //Funcion imprimir
    void printArray(const T &a) {
        for (auto i: a) {
            cout << i << " ";
        }
        cout << endl;
    }

    template<typename T>
    T mergeSort(typename T::iterator begin, typename T::iterator end) {
        //Tengo la mitad del vector
        auto n = end - begin;
        if (n < 2) {
            return T(begin, end);
        }
        auto Primera_mitad = mergeSort<T>(begin, begin + n / 2);
        auto Segunda_mitad = mergeSort<T>(begin + n / 2, end);
        auto It1 = Primera_mitad.begin();
        auto It2 = Segunda_mitad.begin();
        T merged;
        while (It1 != Primera_mitad.end() && It2 != Segunda_mitad.end()) {
            if (*It1 < *It2) {
                merged.push_back(*It1);
                ++It1;
            } else {
                merged.push_back(*It2);
                ++It2;
            }
        }
        while (It1 != Primera_mitad.end()) {
            merged.push_back(*It1);
            ++It1;
        }
        while (It2 != Segunda_mitad.end()) {
            merged.push_back(*It2);
            ++It2;
        }
        return merged;
    }
}













#endif //LEER_ARCHIVO_CSV_MERGUE_SORT_H

