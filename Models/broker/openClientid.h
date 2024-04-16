#pragma once
#include<bits/stdc++.h>
#include"../investor/1_Investor.h"
#include"1_Broker.h"
using namespace std;
void Broker::openclientid(int ID,const string& pass) {
     if(clients.find(ID) == clients.end()||clients[ID].getPassword()!=pass){
       cout<<"Client not found or invalid passoword "<<endl;
   }
   else{


    // menu for investor fucntionalities to be added
    clients[ID].displayPortfolio(); //add investor functionalities here 
   }
 }