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
//#include "HeapSort.h"
#include "ShellSort.h"


using namespace std;


int main() {
    /*
    //Quicksort
    float x[]={-2.2,2.2,0.24,-467,3,9,23,7};
    QuickSort::imprimir(x,begin(x),end(x));
    QuickSort::quicksort(begin(x),end(x));
    QuickSort::imprimir(x,begin(x),end(x));

    //Implementacion para String
    string y[]={"hola", "h", "b", "c", "hola1", "a","a","5385","abc","abcc","aaaaa"};
    QuickSort::imprimir_string(y);
    QuickSort::quicksort(begin(y), end(y)-1);
    QuickSort::imprimir_string(y);

    //Implementacion para vector
    vector<string> s ={"c","b","a"};
    QuickSort::quicksort(s);
    QuickSort::imprimir_string(s);


    //HeapSort
    //Implementacion para string
    vector<string> v3 ={"b","c","a"};
    make_heap(v3.begin(),v3.end());
    sort_heap(v3.begin(),v3.end());
    //Imprimir v3
    for (const auto& i : v3)
        cout << ' ' << i;

    //Implementacion para vector
    vector<int> string2 ={42,-242,6,64,1,648};
    make_heap(string2.begin(),string2.end());
    sort_heap(string2.begin(),string2.end());
    //Imprimir string2
    for (unsigned long long i=0; i < string2.size(); i++)
        std::cout << ' ' << x[i];


    //ShellSort
    //Implementacion para vector
    vector<int> string3 ={42,-242,6,64,1,648};
    ShellSort::shellSort(string3);
    ShellSort::imprimir(string3.begin(),string3.end());


    //Implementacion para string
    vector<float> f2 ={-2.6,24.7,13,35};
    vector<string> xx ={"b","c","a"};
    ShellSort::shellSort(f2);
    ShellSort::shellSort(xx);
    ShellSort::imprimir(f2.begin(),f2.end());
    ShellSort::imprimir_string(xx);

     */
    //Lee el archivo.
    fstream datos;
    //Abro el archivo.
    datos.open("Proyecto2.csv", ios::out);
    if (datos. is_open() ) {
        //Crear un vector de objetos.
        vector<Country_trade> cargados;
        //Variables para leer el archivo.
        string country_or_area;
        string year;
        string commodity;
        string flow;
        string trade_usa;

        //Mientras el archivo esta abierto.
        while (datos.good()) {
            getline(datos, country_or_area, ',');
            getline(datos, year, ',');
            getline(datos, commodity, ',');
            getline(datos, flow, ',');
            getline(datos, trade_usa);
            //Hago push back de los objetos.
            cargados.emplace_back(Country_trade(country_or_area, year, commodity, flow, trade_usa));
        }

        //Creo un vector para cada guardar cada colummna
        vector<string> country;
        vector<double> yearr;
        vector<string> como;
        vector<string> floww;
        vector<double> tradee;

        //Hago un for que va iterar y de acuerdo del objeto lo guardara en los diferentes vectores creados
        for (const auto &i:cargados) {
            country.push_back(i.Country_Area);
            yearr.push_back(i.Year);
            como.push_back(i.Commodity);
            floww.push_back(i.Flow);
            tradee.push_back(i.Trade_usd);
        }


        Country_trade fila1(country[0], yearr[0], como[0], floww[0], tradee[0]);
        Country_trade fila2(country[1], yearr[1], como[1], floww[1], tradee[1]);
        Country_trade fila3(country[2], yearr[2], como[2], floww[2], tradee[2]);
        Country_trade fila4(country[3], yearr[3], como[3], floww[3], tradee[3]);
        Country_trade fila5(country[4], yearr[4], como[4], floww[4], tradee[4]);
        Country_trade fila6(country[5], yearr[5], como[5], floww[5], tradee[5]);
        Country_trade fila7(country[6], yearr[6], como[6], floww[6], tradee[6]);
        Country_trade fila8(country[7], yearr[7], como[7], floww[7], tradee[7]);
        Country_trade fila9(country[8], yearr[8], como[8], floww[8], tradee[8]);
        Country_trade fila10(country[9], yearr[9], como[9], floww[9], tradee[9]);
        Country_trade fila11(country[10], yearr[1], como[10], floww[10], tradee[10]);
        Country_trade fila12(country[11], yearr[11], como[11], floww[11], tradee[11]);
        Country_trade fila13(country[12], yearr[12], como[12], floww[12], tradee[12]);
        Country_trade fila14(country[13], yearr[13], como[13], floww[13], tradee[13]);
        Country_trade fila15(country[14], yearr[14], como[14], floww[14], tradee[14]);
        Country_trade fila16(country[15], yearr[15], como[15], floww[15], tradee[15]);
        Country_trade fila17(country[16], yearr[16], como[16], floww[16], tradee[16]);
        Country_trade fila18(country[17], yearr[17], como[17], floww[17], tradee[17]);
        Country_trade fila19(country[18], yearr[18], como[18], floww[18], tradee[18]);
        Country_trade fila20(country[19], yearr[19], como[19], floww[19], tradee[19]);

        vector<Country_trade> v1;
        v1.push_back(fila1);
        v1.push_back(fila2);
        v1.push_back(fila3);
        v1.push_back(fila4);
        v1.push_back(fila5);
        v1.push_back(fila6);
        v1.push_back(fila7);
        v1.push_back(fila8);
        v1.push_back(fila9);
        v1.push_back(fila10);
        v1.push_back(fila11);
        v1.push_back(fila12);
        v1.push_back(fila13);
        v1.push_back(fila14);
        v1.push_back(fila15);
        v1.push_back(fila16);
        v1.push_back(fila17);
        v1.push_back(fila18);
        v1.push_back(fila19);
        v1.push_back(fila20);

    }
    else{
        cout <<"No se pudo abrir el archivo" << endl;
    }

    return 0;

}
