#ifndef LEER_ARCHIVO_CSV_COUNTRY_TRADE_H
#define LEER_ARCHIVO_CSV_COUNTRY_TRADE_H
#include <iostream>
#include <string>


using namespace std;

class Country_trade {
public:
    string country_or_area;
    int year;
    string commodity;
    string flow;
    int trade_usa;

    Country_trade( string &countryOrArea,  int year,  string &commodity,  string &flow, int tradeUsa);

    Country_trade( string &countryOrArea,  string year,  string &commodity,  string &flow, string tradeUsa);



};


#endif //LEER_ARCHIVO_CSV_COUNTRY_TRADE_H
