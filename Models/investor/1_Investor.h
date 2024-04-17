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
string names[3] = {"AXIS BANK", "RELIANCE", "TATA MOTORS"};
// Define the unordered_map for company prices
unordered_map<string, double*> company;
unordered_map<string, int> currentIndex;
void initialize() {
    double price1[] = {100, 200, 300};
    double price2[] = {100, 600, 200};
    double price3[] = {100, 500, 400};
    company[names[0]] = new double[3];
    company[names[1]] = new double[3];
    company[names[2]] = new double[3];
    for (int i = 0; i < 3; i++) {
        company[names[0]][i] = price1[i];
        company[names[1]][i] = price2[i];
        company[names[2]][i] = price3[i];
    }
    currentIndex[names[0]] = 0;
    currentIndex[names[1]] = 0;
    currentIndex[names[2]] = 0;
}

void display() {
    cout << "Companies and Prices:" << endl;
    for (int i = 0; i < 3; i++) {
        string name = names[i];
        double* prices = company[name];
        int& index = currentIndex[name];
        cout << name << ": $" << prices[index] << endl;
        index = (index + 1) % 3;
    }
}

// Function to clean up allocated memory
void cleanup() {
    for (int i = 0; i < 3; i++) {
        string name = names[i];
        delete[] company[name]; // Delete the dynamic arrays
    }
}
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