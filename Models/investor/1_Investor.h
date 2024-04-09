#include<bits/stdc++.h>
#include"../user/User.h"

using namespace std;

class Investor : public User {
private:

    double balance;
    unordered_map<string, int> portfolio; // Map symbol to quantity

public:
    Investor() { }
    Investor(const string& username, const string& password, double balance)
        : User(username,password),balance(balance) {}

    // Function to buy a stock
    void buyStock(const string& , int , double );

    // Function to sell a stock
    void sellStock(const string& symbol, int quantity, double price) {
        if (portfolio.find(symbol) == portfolio.end() || portfolio[symbol] < quantity) {
            cout << "Not enough shares of " << symbol << " to sell" << endl;
            return;
        }
        double totalSale = quantity * price;
        balance += totalSale;
        portfolio[symbol] -= quantity;
        cout << "Sold " << quantity << " shares of " << symbol << " at $" << price << " each" << endl;
    }

    // Function to display user's portfolio
    void displayPortfolio() {
        cout << "Portfolio for user " << username << ":" << endl;
        for (const auto& entry : portfolio) {
            cout << " - " << entry.first << ": " << entry.second << " shares" << endl;
        }
        cout << "Balance: $" << balance << endl;
    }
};