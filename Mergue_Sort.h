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
    void sort(vector<Contenedor> & c) {
        //verifico que el size de mi vector sea mayor que 1, si no le nevio return porque no tendria que hacer nada
        if (c.size() <= 1) return;

        //Aca obtengo el indice de la mitad
        int mitad = c.size() / 2;
        //creo dos vetores que seran mi derecha e izquierda
        vector<Contenedor> izquierda;
        vector<Contenedor> derecha;

        //este for recorre con j hasta la mitad, poniendo los valores dentro de el vector izquierda
        for (size_t j = 0; j < mitad;j++)
            izquierda.push_back(c[j]);
        //este for recorre con ja la otro mitad y pone los valores dentro del vector derecha
        for (size_t j = 0; j < (c.size()) - mitad; j++)
            derecha.push_back(c[mitad + j]);


        //llamo recursivamente mi funcion merge, y como es recursivo llama la funcion hasta que este se complete es decir este ordenado
        sort(izquierda);
        sort(derecha);
        //Llamo la funcion mergeSort paara fusionar mis dos arreglos.
        mergeSort(izquierda, derecha, c);
    }


    template <typename Contenedor>
    void mergeSort(vector<Contenedor>&izquierda, vector<Contenedor>& derecha, vector<Contenedor>& c)
    {
        //guardo y obtengo la longitud de los dos arreglos y los guardos dentro de estos dos valores.

        int nL = izquierda.size();
        int nR = derecha.size();
        int i = 0, j = 0, k = 0;

        //mientras j sea menor que nL y k sea menor que nR
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

        //Copie los elementos restantes, si hay, son cualquiera
        while (j < nL) {
            c[i] = izquierda[j];
            j++;
            i++;
        }
        //Copie los elementos restantes, si hay, son cualquiera
        while (k < nR) {
            c[i] = derecha[k];
            k++;
            i++;
        }
    }
}

#endif //LEER_ARCHIVO_CSV_MERGUE_SORT_H

