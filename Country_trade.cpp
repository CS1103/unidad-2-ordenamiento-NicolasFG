#include "Country_trade.h"


using namespace std;

Country_trade::Country_trade(string countryArea, double year, string commodity,
                             string flow, double tradeUsd) : Country_Area(countryArea), Year(year),
                                                                         Commodity(commodity), Flow(flow),
                                                                         Trade_usd(tradeUsd) {}

bool Country_trade::operator<=(const Country_trade &ct) {
    return (Trade_usd <= ct.Trade_usd);
}

//bool Country_trade::operator<=(const Country_trade &ct) {
  //  return ((Country_Area <= ct.Country_Area) && (Year <= ct.Year) && (Commodity <= ct.Commodity ) && (Flow <= ct.Flow) && (Trade_usd <= ct.Trade_usd));
//}




bool Country_trade::operator>(const Country_trade &ct) {
    return (Trade_usd > ct.Trade_usd);
}

//bool Country_trade::operator>(const Country_trade &ct) {
//return ((Country_Area <= ct.Country_Area) && (Year <= ct.Year) && (Commodity <= ct.Commodity) && (Flow <= ct.Flow) && (Trade_usd <= ct.Trade_usd));
//}




bool Country_trade::operator<(const Country_trade &ct) {
    return (Trade_usd < ct.Trade_usd);
}

//bool Country_trade::operator<(const Country_trade &ct) {
 //return ((Country_Area <= ct.Country_Area) && (Year <= ct.Year) && (Commodity <= ct.Commodity) && (Flow <= ct.Flow) && (Trade_usd <= ct.Trade_usd));
//}









std::ostream& operator << (ostream& out, const Country_trade& ct){
    out<<ct.Country_Area<<" "<<ct.Year<<" "<<ct.Commodity<<" "<<ct.Flow<<" "<<ct.Trade_usd<<std::endl;
    return out;
}


