#pragma once

#include<bits/stdc++.h>
using namespace std;
#include"../Models/investor/1_Investor.h"
#include"../Models/investor/buystock.h"
#include"../Models/investor/profit.h"
#include"../Models/investor/sellStock.h"



void brokerFunctionalities(Investor&obj){
    int choice;
    while(true){
        cout << "\n\n1. Buy Stock\n2. Sell Stock\n3. Calculate Profit\n4.display portfolio\n 5. Exit\n";
        cin >> choice;
        if(choice==1){
            string symbol;
            int quantity;
            cout << "Enter symbol and quantity to buy: ";
            cin >> symbol >> quantity;
            obj.buyStock(symbol, quantity);
        }
        else if(choice==2){
            string symbol;
            int quantity;
            cout << "Enter symbol and quantity to sell: ";
            cin >> symbol >> quantity;
            obj.sellStock(symbol, quantity);
        }
        else if(choice==3){
            obj.calculateProfit();
        }
        else if(choice==4){
            obj.displayPortfolio();
        }
        else if(choice==5){
            break;
        }
        else{
            cout << "Invalid choice" << endl;
        }
    }
}