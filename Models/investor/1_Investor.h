#pragma once

#include <bits/stdc++.h>
#include<unordered_map>
#include "../user/User.h"
using namespace std;

class PortfolioEntry
{
    public:
    int quantity;
    double price;
    double avgprice; // also used for setting invested price
};

#include "./colors.h"

class Investor : public User
{

private:
double totalpnl;    double invested;
    double balance;
    unordered_map<string, PortfolioEntry> portfolio; // Map company to quantity
    double generateRandomPrice()
    {
        // srand(time(null));
        // Generate a random price between 100 and 200 for demonstration
        return 100 + (rand() % 90) + static_cast<double>(rand() % 100) / 100;
    }

public:
    Investor() {}
    Investor(const string &username, const string &email, const string &password, double balance)
        : User(username, password, email), balance(balance) {}

    // Function to buy a stock
    void buyStock(const string &, int);

    void calculateProfit();
    // Function to sell a stock
    void sellStock(const string &company, int quantity);

    void addbalance(double amount)
    {
        cout << "\nCurrent Balance:$" << balance;
        balance += amount;
        cout << "\nNew Balance:$" << balance;
    }
    // Function to display user's portfolio
    void displayPortfolio()
    {
        cout << "Portfolio for user " << getName() << ":" << endl;
        for (const auto &entry : portfolio)
        {
            const string &company = entry.first;
            const PortfolioEntry &info = entry.second;
            cout << " - " << company << ": " << info.quantity << " shares, Price: $" << info.avgprice << endl;
        }
        cout << "Balance: $" << balance << endl;
    }
    void displayUserInfo() const {
        cout << "Name: " << username << ", Email: " << email << ", Balance: $" << balance << endl;
    }
    
    double gettotalpnl(){
        return totalpnl;
    }
    double getbalance(){
        return balance;
    }
    double getinvested(){
        return invested;
    }
};