#pragma once

#include<bits/stdc++.h>
using namespace std;
#include"../Models/broker/1_Broker.h"

void brokerFunctionalities(Broker&obj){
    cout << "Welcome " << obj.getName() << endl;
    cout << "1. Add stock" << endl;
    cout << "2. Remove stock" << endl;
    cout << "3. Update stock" << endl;
    cout << "4. View all stocks" << endl;
    cout << "5. View all investors" << endl;
    cout << "6. View all transactions" << endl;
    cout << "7. Exit" << endl;
    int choice;
    cin >> choice;
    switch(choice){
        case 1:
            obj.addStock();
            break;
        case 2:
            obj.removeStock();
            break;
        case 3:
            obj.updateStock();
            break;
        case 4:
            obj.viewAllStocks();
            break;
        case 5:
            obj.viewAllInvestors();
            break;
        case 6:
            obj.viewAllTransactions();
            break;
        case 7:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
}