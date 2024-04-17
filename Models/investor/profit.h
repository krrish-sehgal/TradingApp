#pragma once

#include <bits/stdc++.h>
#include "1_Investor.h"
#include "generateRandomPrice.h"
using namespace std;

int Investor::calculateProfit()
{
    if(portfolio.size()==0){
        cout<<endl << "You havent bought any shares yet for this company!" << endl;
        return 0;
    }

    totalpnl = 0;
    cout << "Invested: $" << invested << endl;
    cout << "Profit/Loss for each share:" << endl;


    for (auto &entry : portfolio)
    {
        const string &company = entry.first;
        PortfolioEntry &info = entry.second;
        double currentPrice = generateRandomPrice();
        // cout<<currentPrice;
        double profit = (currentPrice - info.price) * info.quantity;
        cout << " -- " << company << ": Bought at $" << info.price << ",\n Current price $" << currentPrice << "\n Quantity " << info.quantity;

        if (profit <= 0)
            red();
        else
            green();
        cout << "\n Profit/Loss: $" << profit << endl;
        info.price = currentPrice;
        totalpnl += profit;
        reset();
    }
    if (totalpnl <= 0)
        red();
    else
        green();
    cout << "Total PNL =" << totalpnl;
    reset();
    return 1;
}
