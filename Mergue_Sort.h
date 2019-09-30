#ifndef LEER_ARCHIVO_CSV_MERGUE_SORT_H
#define LEER_ARCHIVO_CSV_MERGUE_SORT_H
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "Country_trade.h"

using namespace std;

namespace Mergue_Sort {

    template <typename Contenedor>
    void sort(vector<Contenedor> & bar) {
        if (bar.size() <= 1) return;

        int mid = bar.size() / 2;
        vector<Contenedor> left;
        vector<Contenedor> right;

        for (size_t j = 0; j < mid;j++)
            left.push_back(bar[j]);
        for (size_t j = 0; j < (bar.size()) - mid; j++)
            right.push_back(bar[mid + j]);

        sort(left);
        sort(right);
        mergeSort(left, right, bar);
    }


    template <typename Contenedor>
    void mergeSort(vector<Contenedor>&left, vector<Contenedor>& right, vector<Contenedor>& bars)
    {
        int nL = left.size();
        int nR = right.size();
        int i = 0, j = 0, k = 0;

        while (j < nL && k < nR)
        {
            if (left[j] < right[k]) {
                bars[i] = left[j];
                j++;
            }
            else {
                bars[i] = right[k];
                k++;
            }
            i++;
        }
        while (j < nL) {
            bars[i] = left[j];
            j++; i++;
        }
        while (k < nR) {
            bars[i] = right[k];
            k++; i++;}}
}

#endif //LEER_ARCHIVO_CSV_MERGUE_SORT_H

