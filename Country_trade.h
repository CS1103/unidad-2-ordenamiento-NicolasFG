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
    std::string Country_Area;
    double Year;
    std::string Commodity;
    std::string Flow;
    double Trade_usd;


    Country_trade(const std::string &countryArea, double year, const std::string &commodity, const std::string &flow, double tradeUsd);

    Country_trade (std::string v, const std::string& Year_ , std::string c, std::string f, const std::string& Trade_usd_){
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

    friend std::ostream& operator << (std::ostream & out, const Country_trade & ct);

};

#endif //LEER_ARCHIVO_CSV_COUNTRY_TRADE_H
