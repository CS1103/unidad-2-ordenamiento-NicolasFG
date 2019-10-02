#ifndef LEER_ARCHIVO_CSV_MERGUE_SORT_H
#define LEER_ARCHIVO_CSV_MERGUE_SORT_H
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "Country_trade.h"

using namespace std;

namespace Merge_Sort {

    template <typename Contenedor>
    void mergeSort(vector<Contenedor>&izquierda, vector<Contenedor>& derecha, vector<Contenedor>& c)
    {


        int nL = izquierda.size();
        int nR = derecha.size();
        int i = 0, j = 0, k = 0;


        while (j < nL && k < nR)
        {
            if (izquierda[j] < derecha[k]) {
                c[i] = izquierda[j];
                j++;
            }
            else {
                c[i] = derecha[k];
                k++;
            }
            i++;
        }


        while (j < nL) {
            c[i] = izquierda[j];
            j++;
            i++;
        }

        while (k < nR) {
            c[i] = derecha[k];
            k++;
            i++;
        }
    }

    template <typename Contenedor>
    void sort(vector<Contenedor> & c) {
        if (c.size() <= 1) return;

        int mitad = c.size() / 2;

        vector<Contenedor> izquierda;
        vector<Contenedor> derecha;


        for (size_t j = 0; j < mitad;j++)
            izquierda.push_back(c[j]);

        for (size_t j = 0; j < (c.size()) - mitad; j++)
            derecha.push_back(c[mitad + j]);

        sort(izquierda);
        sort(derecha);

        mergeSort(izquierda, derecha, c);
    }
}

#endif //LEER_ARCHIVO_CSV_MERGUE_SORT_H

