#pragma once
#include<bits/stdc++.h>
#include"../investor/1_Investor.h"
#include"1_Broker.h"
using namespace std;
void Broker::removeClient(int ID){
    int removedCount = clients.erase(ID);
    
    if (removedCount == 0) {
       cout << "Client not found." << endl;
    } else {
        cout << "Client removed successfully." << endl; 

    }
}