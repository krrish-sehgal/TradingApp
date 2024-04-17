#pragma once
#include<bits/stdc++.h>
#include"../investor/1_Investor.h"
#include"1_Broker.h"
#include"../investor/1_Investor.h"
using namespace std;
void Broker::openclientid(int ID,string& pass) {
     if(clients.find(ID) == clients.end()||clients[ID]->getPass()!=pass){
       cout<<"Client not found or invalid passoword "<<endl;
   }
   else{
    cout << "This is the Client's portfolio" << endl;
    clients[ID]->displayPortfolio(); 
    displayOptions(*clients[ID]);
   }
 }