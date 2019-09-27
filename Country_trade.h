#ifndef LEER_ARCHIVO_CSV_COUNTRY_TRADE_H
#define LEER_ARCHIVO_CSV_COUNTRY_TRADE_H
#include <iostream>
#include <string>


using namespace std;

class Country_trade {
private:
    string country_or_area;
    int year;
    string comm_code;
    string commodity;
    string flow;
    int trade_usa;
    int weight_kg;
    string quantity_name;
    int quantity;
    string category;
public:
    Country_trade(const string &countryOrArea, int year, const string &commCode, const string &commodity,
                  const string &flow, int tradeUsa, int weightKg, const string &quantityName, int quantity,
                  const string &category);

    const string &getCountryOrArea() const;

    void setCountryOrArea(const string &countryOrArea);

    int getYear() const;

    void setYear(int year);

    const string &getCommCode() const;

    void setCommCode(const string &commCode);

    const string &getCommodity() const;

    void setCommodity(const string &commodity);

    const string &getFlow() const;

    void setFlow(const string &flow);

    int getTradeUsa() const;

    void setTradeUsa(int tradeUsa);

    int getWeightKg() const;

    void setWeightKg(int weightKg);

    const string &getQuantityName() const;

    void setQuantityName(const string &quantityName);

    int getQuantity() const;

    void setQuantity(int quantity);

    const string &getCategory() const;

    void setCategory(const string &category);

};


#endif //LEER_ARCHIVO_CSV_COUNTRY_TRADE_H
