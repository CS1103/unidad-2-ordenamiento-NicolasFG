#ifndef LEER_ARCHIVO_CSV_COUNTRY_TRADE_H
#define LEER_ARCHIVO_CSV_COUNTRY_TRADE_H
#include <iostream>
#include <string>
#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Country_trade {
public:
    string Country_Area;
    double Year;
    string Commodity;
    string Flow;
    double Trade_usd;


    Country_trade(const string &countryArea, double year, const string &commodity, const string &flow, double tradeUsd);

    Country_trade (string v, const string& Year_ , string c, string f, const string& Trade_usd_){
        Country_Area = std::move(v);
        Year = std::stod(Year_);
        Commodity = std::move(c);
        Flow = std::move(f);
        Trade_usd = std::stod(Trade_usd_);
    };

    //Sobrecargo el operador <=
    bool operator <=(const Country_trade & ct);

    //Sobrecargo el operador >

    bool operator >(const Country_trade & ct);
    //Sobrecargo el operador <
    bool operator<(const Country_trade &ct);

    //Sobrecargo el operador <<
    friend std::ostream& operator << (std::ostream & out, const Country_trade & ct);



};

#endif //LEER_ARCHIVO_CSV_COUNTRY_TRADE_H
