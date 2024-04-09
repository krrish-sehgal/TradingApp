#pragma once

#include<bits/stdc++.h>
#include "1_investor.h"

using namespace std;

void Investor::buyStock(const string& symbol, int quantity, double price) {
    double totalCost = quantity * price;
    if (totalCost > balance) {
        cout << "Insufficient balance to buy " << quantity << " shares of " << symbol << endl;
        return;
    }
    balance -= totalCost;
    portfolio[symbol] += quantity;
    cout << "Bought " << quantity << " shares of " << symbol << " at $" << price << " each" << endl;
}
