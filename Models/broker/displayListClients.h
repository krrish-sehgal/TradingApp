#pragma once
#include<bits/stdc++.h>
#include"../investor/1_Investor.h"
#include"1_Broker.h"
using namespace std;
void Broker::displayListClients()
{
   if(clients.empty()){
      cout<<"No clients found"<<endl;
      return;
   } 
     for (auto& entry : clients) {
        int ID = entry.first;
        Investor*obj = entry.second;
        if(obj->gettotalpnl()<0) red();
        else green();
        cout << " Client ID: " << ID << endl;
        obj->displayUserInfo();
        reset();
      }
 } 