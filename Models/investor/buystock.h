#pragma once
#include<bits/stdc++.h>
#include "1_investor.h"

using namespace std;

void Investor::buyStock(const string& symbol, int quantity) {
        double price;
        // Check if symbol exists in portfolio, if not add it with initial values
        if (portfolio.find(symbol) == portfolio.end()) {
        price = generateRandomPrice();
      balance-=(price*quantity);invested+=(price*quantity);
              portfolio[symbol].quantity = quantity;
        portfolio[symbol].price = price;
        portfolio[symbol].avgprice = price;
        } else {
              price = portfolio[symbol].price;
      balance-=(price*quantity);invested+=(price*quantity);
            // Update quantity if symbol already exists
            int temp= portfolio[symbol].quantity;
            portfolio[symbol].quantity += quantity;
            portfolio[symbol].avgprice=(portfolio[symbol].avgprice*temp+quantity*price)/(quantity+temp);
           // portfolio[symbol].avgprice=/quantity
        }
        cout << "\nBought " << quantity << " shares of " << symbol << " at $" << price << " each" << endl;
    }

