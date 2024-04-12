#pragma once
#include<bits/stdc++.h>
#include "1_investor.h"

using namespace std;

void Investor::buyStock(const string& symbol, int quantity) {
     double price = generateRandomPrice();
      balance-=(price*quantity);invested+=(price*quantity);
        // Check if symbol exists in portfolio, if not add it with initial values
        if (portfolio.find(symbol) == portfolio.end()) {
              portfolio[symbol].quantity = quantity;
        portfolio[symbol].price = price;
        } else {
            // Update quantity if symbol already exists
            portfolio[symbol].quantity += quantity;
        }
        cout << "Bought " << quantity << " shares of " << symbol << " at $" << price << " each" << endl;
   }
