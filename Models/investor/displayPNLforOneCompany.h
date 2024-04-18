#pragma once
#include<bits/stdc++.h>
using namespace std;

#include "1_Investor.h"

int Investor::displayPNLforOneCompany(string& company){

    if(portfolio.find(company)==portfolio.end()){
        return 0 ;
    }
    double totalpnl = 0;
    PortfolioEntry& info = portfolio[company];

    double profit = (info.price - info.avgprice) * info.quantity;
    cout << " -- " << company << ": Bought at $" <<  info.avgprice << " -- \n Current price $" << info.price<< "\n Quantity " << info.quantity ;

    if (profit <= 0) red();
    else green();

    cout << "\n Profit/Loss: $" << profit << endl;
    totalpnl += profit;

    return 1;

    
}