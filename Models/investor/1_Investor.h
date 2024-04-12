#include<bits/stdc++.h>
#include"../user/User.h"
using namespace std;

struct PortfolioEntry {
    int quantity;
    double price;
    double avgprice;//also used for setting invested price 
};
void reset()
{cout<<"\033[0m";}
void red()//red
{cout<<"\033[0;31m";}
void green()
{cout<<"\033[0;32m";}
class Investor : public User {
    
private:

 double invested;
    double balance;
    unordered_map<string,PortfolioEntry > portfolio; // Map symbol to quantity
 double generateRandomPrice() {
        // srand(time(null));
        // Generate a random price between 100 and 200 for demonstration
        return 100 + (rand() % 90) + static_cast<double>(rand() % 100) / 100;
    }
public:
    Investor() { }
    Investor(const string& username, const string& password, double balance)
        : User(username,password),balance(balance) {}

    // Function to buy a stock
    void buyStock(const string& , int , double );
void calculateProfit() ;
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
void addbalance(double amount){
    cout<<"\nCurrent Balance:$"<<balance;
    balance+=amount;
    cout<<"\nNew Balance:$"<<balance;
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