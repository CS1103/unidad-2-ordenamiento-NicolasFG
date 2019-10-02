//#define CATCH_CONFIG_MAIN
//#include "catch.hpp"
#include <fstream>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>
#include <string>
#include <vector>
#include <cstring>
#include "Country_trade.h"
#include "QuickSort.h"
#include "Mergue_Sort.h"
#include "HeapSort.h"
#include "ShellSort.h"


using namespace std;


int main() {
    /*
    //Quicksort
    float Numeros1[]={-2.2,2.2,0.24,-467,3,9,23,7};
    QuickSort::imprimir(Numeros1,begin(Numeros1),end(Numeros1));
    QuickSort::quicksort(Numeros1(x),Numeros1(x));
    QuickSort::imprimir(Numeros1,Numeros1(x),Numeros1(x));

    //Implementacion para String
    string Letras[]={"hola", "h", "b", "c", "hola1", "a","a","5385","abc","abcc","aaaaa"};
    QuickSort::imprimir_string(Letras);
    QuickSort::quicksort(begin(Letras), end(Letras)-1);
    QuickSort::imprimir_string(Letras);

    //Implementacion para vector
    vector<string> Letras2 ={"c","b","a"};
    QuickSort::quicksort(Letras);
    QuickSort::imprimir_string(Letras);


    //HeapSort
    //Implementacion para string
    vector<string> Letras3 ={"b","c","a"};
    make_heap( Letras3.begin(),Letras3.end());
    sort_heap( Letras3.begin(), Letras3.end());
    //Imprimir v Letras3
    for (const auto& i :  Letras3)
        cout << ' ' << i;

    //Implementacion para vector
    vector<int> Numeros3 ={42,-242,6,64,1,648};
    make_heap(Numeros3.begin(),Numeros3.end());
    sort_heap(Numeros3.begin(),Numeros3.end());
    //Imprimir string2
    for (unsigned long long i=0; i < Numeros3.size(); i++)
        cout << ' ' << Numeros3[i];


    //ShellSort
    //Implementacion para vector
    vector<int> Numeros4 ={42,-242,6,64,1,648};
    ShellSort::shellSort( Numeros4);
    ShellSort::imprimir( Numeros4.begin(), Numeros4.end());


    //Implementacion para string
    vector<float> Numeros5 ={-2.6,24.7,13,35};
    vector<string> letras4 ={"b","c","a"};
    ShellSort::shellSort(Numeros5);
    ShellSort::shellSort(letras4);
    ShellSort::imprimir(Numeros5.begin(),Numeros5.end());
    ShellSort::imprimir_string(letras4);

    */
    /*
    //MergeSort
    //Implementacion para vector
    vector<int> numeros6 ={42,-242,6,64,1,648};
    Mergue_Sort::sort(numeros6);
    */



    ifstream archivo;
    //ofstream datos2;


    //Abro el archivo.
    archivo.open("Proyecto.csv", ios::in);

    //Posible implementacion para guardado en un archivo
    //datos.open("Escritura.csv", ios :: out);


    if (archivo. is_open()) {


        vector<Country_trade> datos;


        string country_or_area;
        string year;
        string commodity;
        string flow;
        string trade_usa;

        while (archivo.good()) {

            getline(archivo, country_or_area, ',');
            getline(archivo, year, ',');
            getline(archivo, commodity, ',');
            getline(archivo, flow, ',');
            getline(archivo, trade_usa);

            datos.emplace_back(Country_trade(country_or_area, year, commodity, flow, trade_usa));
        }


        vector<string> country;
        vector<double> yearr;
        vector<string> como;
        vector<string> floww;
        vector<double> tradee;


        for (const auto &i:datos) {
            country.push_back(i.Country_Area);
            yearr.push_back(i.Year);
            como.push_back(i.Commodity);
            floww.push_back(i.Flow);
            tradee.push_back(i.Trade_usd);
        }



        vector<Country_trade> Nuevo_vector;

        for (int i = 0; i < 20; i++) {
            auto *Country_Trade_fila = new Country_trade(country[i], year[i], como[i], floww[i], tradee[i]);
            Nuevo_vector.push_back(*Country_Trade_fila);
        }


        //Utilizar depende del tipo de ordenamiento que quiero
        //ShellSort::shellSort(Nuevo_vector);
        //Merge_Sort::sort(Nuevo_vector);
        //QuickSort::quicksort(Nuevo_vector);
        //Heap_Sort::HeapSort(Nuevo_vector);



        /*for (auto & it : Nuevo_vector) {
            cout << it<<" ";
        }
        Nuevo_vector.clear(); */

    }
    else{
        cout <<"No se pudo abrir el archivo" << endl;
    }

    return 0;

}
