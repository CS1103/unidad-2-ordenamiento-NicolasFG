#include "Country_trade.h"

Country_trade::Country_trade(const std::string &countryArea, double year, const std::string &commodity,
                             const std::string &flow, double tradeUsd) : Country_Area(countryArea), Year(year),
                                                                         Commodity(commodity), Flow(flow),
                                                                         Trade_usd(tradeUsd) {}

bool Country_trade::operator<=(const Country_trade &ct) {
    return (Trade_usd <= ct.Trade_usd);
}


bool Country_trade::operator>(const Country_trade &ct) {
    return (Trade_usd > ct.Trade_usd);
}

bool Country_trade::operator<(const Country_trade &ct) {
    return (Trade_usd < ct.Trade_usd);
}


std::ostream& operator<< (std::ostream& out, const Country_trade& ct){
    out<<ct.Country_Area<<" "<<ct.Year<<" "<<ct.Commodity<<" "<<ct.Flow<<" "<<ct.Trade_usd<<std::endl;
    return out;
}


