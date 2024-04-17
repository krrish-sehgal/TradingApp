#pragma once
#include<bits/stdc++.h>
#include"../investor/1_Investor.h"
#include"1_Broker.h"
using namespace std;
void Broker::displayListClients()
{
     for (auto& entry : clients) {
        int ID = entry.first;
        Investor obj = entry.second;
        cout << " - Client ID: " << ID << endl;
        obj.displayUserInfo();
      }
 } 