#pragma once

#include<bits/stdc++.h>
#include"1_Investor.h"
using namespace std;



void Investor :: sellStock(const string& company, int quantity , int flag , int commissonRate){
        if (portfolio.find(company) == portfolio.end() || portfolio[company].quantity < quantity) {
            cout << "Not enough shares of " << company << " to sell" << endl;
            return;
        }
        // Use current random price
        if(flag )
        balance += quantity * portfolio[company].price;
        portfolio[company].quantity -= quantity;
        invested-=portfolio[company].avgprice*quantity;
        cout << "Sold " << quantity << " shares of " << company << " at $" << portfolio[company].price << " each" << endl;
    }