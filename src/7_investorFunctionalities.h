#pragma once

#include<bits/stdc++.h>
using namespace std;
#include"../Models/investor/1_Investor.h"
#include"../Models/investor/buystock.h"
#include"../Models/investor/profit.h"
#include"../Models/investor/sellStock.h"
#include"../Models/investor/displayPortfolio.h"
#include"../Models/investor/generateRandomPrice.h"
#include"../Models/investor/addbalance.h"
#include"../Models/investor/colors.h"


void investorFunctionalities(Investor&obj){
    int choice;
    while(true){
        cout << "\n\n1.display options\n2.Buy Stock\n3.Sell Stock\n4.Calculate Profit\n5.Display Portfolio\n6.Add Balance\n7.Exit\n";

        cin >> choice;
        if(choice==1){
            string company;
            int quantity;
            cout << "Enter company and quantity to buy: ";
            cin >> company >> quantity;
            obj.buyStock(company, quantity);
        }
        else if(choice==2){
            string company;
            int quantity;
            cout << "Enter company and quantity to sell: ";
            cin >> company >> quantity;
            obj.sellStock(company, quantity);
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