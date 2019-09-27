#include "Country_trade.h"

Country_trade::Country_trade(const string &countryOrArea, int year, const string &commCode, const string &commodity,
                             const string &flow, int tradeUsa, int weightKg, const string &quantityName, int quantity,
                             const string &category) : country_or_area(countryOrArea), year(year), comm_code(commCode),
                                                       commodity(commodity), flow(flow), trade_usa(tradeUsa),
                                                       weight_kg(weightKg), quantity_name(quantityName),
                                                       quantity(quantity), category(category) {}

const string &Country_trade::getCountryOrArea() const {
    return country_or_area;
}

void Country_trade::setCountryOrArea(const string &countryOrArea) {
    country_or_area = countryOrArea;
}

int Country_trade::getYear() const {
    return year;
}

void Country_trade::setYear(int year) {
    Country_trade::year = year;
}

const string &Country_trade::getCommCode() const {
    return comm_code;
}

void Country_trade::setCommCode(const string &commCode) {
    comm_code = commCode;
}

const string &Country_trade::getCommodity() const {
    return commodity;
}

void Country_trade::setCommodity(const string &commodity) {
    Country_trade::commodity = commodity;
}

const string &Country_trade::getFlow() const {
    return flow;
}

void Country_trade::setFlow(const string &flow) {
    Country_trade::flow = flow;
}

int Country_trade::getTradeUsa() const {
    return trade_usa;
}

void Country_trade::setTradeUsa(int tradeUsa) {
    trade_usa = tradeUsa;
}

int Country_trade::getWeightKg() const {
    return weight_kg;
}

void Country_trade::setWeightKg(int weightKg) {
    weight_kg = weightKg;
}

const string &Country_trade::getQuantityName() const {
    return quantity_name;
}

void Country_trade::setQuantityName(const string &quantityName) {
    quantity_name = quantityName;
}

int Country_trade::getQuantity() const {
    return quantity;
}

void Country_trade::setQuantity(int quantity) {
    Country_trade::quantity = quantity;
}

const string &Country_trade::getCategory() const {
    return category;
}

void Country_trade::setCategory(const string &category) {
    Country_trade::category = category;
}
