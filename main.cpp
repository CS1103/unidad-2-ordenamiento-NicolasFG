#include <algorithm>
#include <fstream>
#include <iostream>
#include <list>
#include <vector>
#include "Mergue_Sort.h"
#include "QuickSort.h"
#include "Country_trade.cpp"
#include <stdlib.h>
#include <string.h>
#include <map>
#include <iterator>


//void print_vector(vector<Country_trade>cargados) {
  //  for (auto& i: cargados) {
    //    cout << get.<< " ";
    //}
    //cout << endl;
//}

void c_country_area(const vector<Country_trade>&cargados){
    cout<<"hola";
    for(const auto& item:cargados){
        cout<<"hola";
        cout << item.country_or_area<<"hola";


    }
}

void c_year(vector<Country_trade>&cargados){
    vector<string> viajes;

    viajes.begin();

    for(auto it:cargados)
    {
        viajes.push_back(it.country_or_area);
    }

    for(auto it2:viajes){
        cout<<it2;
    }

}


void mayor_proveedor(vector<viajes>cargados){

    vector<string> viajes;



    for(auto it:cargados) {
        viajes.push_back(it.vendor_id);
        if (std::find(companias.begin(), companias.end(), it.vendor_id) == companias.end()) {
            companias.push_back(it.vendor_id);
        }
    }

}











void todo(vector<Country_Trade> cargados){
    for(auto item:cargados){
        cout<< item.Country_Area<<" "<<item.Year<<" "<<item.Commodity<<" "<<item.Flow<<" "<<item.Trade_usd<<endl;
    }
}










using namespace std;
int main() {

    ifstream datos;
    //string texto,texto2;
    vector<Country_trade> cargados;
    string country_or_area;
    string year;
    string commodity;
    string flow;
    string trade_usa;
    datos.open("Proyecto.csv",ios::in);
    while(datos.good()){
        cout<<"nico";
        getline(datos,country_or_area,',');
        getline(datos,year,',');
        getline(datos,commodity,',');
        getline(datos,flow, ',');
        getline(datos,trade_usa);
        cargados.push_back(Country_trade(country_or_area,year,commodity,flow,trade_usa));

    }



    //print_vector(vector<Country_trade> cargados);

    c_country_area(cargados);

    c_year(cargados);


    //vector<int> a = {3, 0, 7, 5, 7, 8, 3, 1};
    //Mergue_Sort::printArray(Mergue_Sort::mergeSort<vector<int>>(a.begin(), a.end()));
        return 0;
}
