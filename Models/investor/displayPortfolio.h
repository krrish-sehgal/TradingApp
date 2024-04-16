#pragma once
#include <bits/stdc++.h>
#include "1_Investor.h"

using namespace std;

void Investor::displayPortfolio(){
        cout << "Portfolio for user " << getName() << ":" << endl;
        for (const auto &entry : portfolio)
        {
            const string &company = entry.first;
            const PortfolioEntry &info = entry.second;
            cout << " - " << company << ": " << info.quantity << " shares, Price: $" << info.avgprice << endl;
        }
        cout << "Balance: $" << balance << endl;
    }