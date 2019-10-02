#ifndef LEER_ARCHIVO_CSV_HEAPSORT_H
#define LEER_ARCHIVO_CSV_HEAPSORT_H
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "Country_trade.h"

using namespace std;

namespace Heap_Sort {
    template<typename ContainerType>
    void heap(ContainerType &cnt, int size, int root) {

        int mayor = root;
        int l = 2 * root + 1;
        int r = 2 * root + 2;
        if (l < size && cnt.at(l) > cnt.at(mayor))
            mayor = l;
        if (r < size && cnt.at(r) > cnt.at(mayor))
            mayor = r;
        if (mayor != root) {
            swap(cnt.at(root), cnt.at(mayor));
            heap(cnt, size, mayor);
        }

    }

    template<typename ContainerType>
    void HeapSort(ContainerType &cnt) {
        int size = cnt.size();
        for (int i = size / 2 - 1; i >= 0; i--)
            heap(cnt, size, i);

        for (int i = size - 1; i >= 0; i--) {
            swap(cnt.at(0), cnt.at(i));
            heap(cnt, i, 0);
        }

    }

}













#endif //LEER_ARCHIVO_CSV_HEAPSORT_H
