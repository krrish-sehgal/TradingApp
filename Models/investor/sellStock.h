#include<bits/stdc++.h>
#include"1_investor.h"
using namespace std;



void Investor :: sellStock(const string& symbol, int quantity, double price) {
    if (portfolio.find(symbol) == portfolio.end() || portfolio[symbol] < quantity) {
        cout << "Not enough shares of " << symbol << " to sell" << endl;
        return;
    }
    double totalSale = quantity * price;
    balance += totalSale;
    portfolio[symbol] -= quantity;
    cout << "Sold " << quantity << " shares of " << symbol << " at $" << price << " each" << endl;
}