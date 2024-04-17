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
void initialiseOptions() {
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

void shufflePrices() {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 g(seed);
    for (auto& pair : company) {
        shuffle(pair.second, pair.second + 3, g);
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
    void buyStock(const string &, int , double);

    int calculateProfit();
    // Function to sell a stock
    void sellStock(const string &, int );

    void addBalance(double );
    // Function to display user's portfolio
    void displayPortfolio();
    void displayUserInfo();

    double gettotalpnl(){
        return totalpnl;
    }
    double getBalance(){
        return balance;
    }
    double getinvested(){
        return invested;
    }
};

#include "buystock.h"
#include "profit.h"
#include "sellStock.h"
#include "displayPortfolio.h"
#include "addbalance.h"
#include "displayUserInfo.h"

void displayOptions(Investor &investor) {
    initialiseOptions();
    int choice;
    do {
        shufflePrices(); // Shuffle prices before displaying options
        cout << "Companies and Prices:" << endl;
        for (int i = 0; i < 3; i++) {
            string name = names[i];
            double* prices = company[name];
            int index = currentIndex[name];
            cout << i+1 << ". " << name << ": $" << prices[index] << endl;
        }

        cout << "Enter 1 to buy stock" << endl;
        cout << "Enter 2 to sell stock" << endl;
        cout << "Enter 3 to exit" << endl;
        
        cin >> choice;
        
        if (choice == 1 || choice == 2) {
            int serialNumber;
            cout << "Enter the serial number of the company: ";
            cin >> serialNumber;
            
            if (serialNumber < 1 || serialNumber > 3) {
                cout << "Invalid serial number" << endl;
                continue;
            }
            
            string companyName = names[serialNumber - 1];
            double* prices = company[companyName];
            int index = currentIndex[companyName];
            double price = prices[index];
            
            if (choice == 1) {
                int quantity;
                cout << "Enter quantity: ";
                cin >> quantity;
                double totalPrice = quantity * price;
                
                if (investor.getBalance() >= totalPrice) {
                    investor.buyStock(companyName, quantity , price);
                } else {
                    cout << "Total price: " << totalPrice <<endl <<  ", Balance: " << investor.getBalance() << endl;
                    cout << endl << "Insufficient balance" << endl;
                }
            } else { // choice == 2
                if(!investor.calculateProfit()){
                    break;
                };

                int quantity;
                cout << "Enter quantity: ";
                cin >> quantity;
                investor.sellStock(companyName, quantity);
            }
        } else if (choice == 3) {
            cout << "Exiting..." << endl;
            break;
        } else {
            cout << "Invalid choice" << endl;
        }
    } while (true);
}
