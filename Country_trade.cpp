#include "Country_trade.h"


//Constructor por Parametros
Country_trade::Country_trade(string &countryOrArea, int year,  string &commodity, string &flow,
                             int tradeUsa) : country_or_area(countryOrArea), year(year), commodity(commodity),
                                             flow(flow), trade_usa(tradeUsa) {


}


//Constructor convertido
Country_trade::Country_trade(string &countryOrArea, string year, string &commodity, string &flow, string tradeUsa)
{
    countryOrArea=countryOrArea;
    year = std::stod(year);
    commodity=std::stod(commodity);
    flow=std::stod(flow);
    tradeUsa=std::stod(tradeUsa);

}



