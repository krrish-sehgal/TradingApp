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

protected:
double totalpnl;    double invested;
    double balance;
    unordered_map<string, PortfolioEntry> portfolio; // Map company to quantity
    double generateRandomPrice();

public:
    Investor() {}
    Investor(const string &username, const string &email, const string &password, double balance)
        : User(username, password, email), balance(balance) {}

    // Function to buy a stock
    void buyStock(const string &, int);

    void calculateProfit();
    // Function to sell a stock
    void sellStock(const string &, int );

    void addbalance(double );
    // Function to display user's portfolio
    void displayPortfolio();
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