#include<bits/stdc++.h>
#include"1_investor.h"
using namespace std;



void Investor :: sellStock(const string& symbol, int quantity) {
    if (portfolio.find(symbol) == portfolio.end() || portfolio[symbol].quantity < quantity) {
            cout << "Not enough shares of " << symbol << " to sell" << endl;
            return;
        }
        // Use current random price
        balance += quantity * portfolio[symbol].price;
        portfolio[symbol].quantity -= quantity;
        cout << "Sold " << quantity << " shares of " << symbol << " at $" << portfolio[symbol].price << " each" << endl;
    }