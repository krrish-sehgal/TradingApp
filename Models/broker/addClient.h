#pragma once
#include<bits/stdc++.h>
#include"../investor/1_Investor.h"
#include"1_Broker.h"
using namespace std;
void Broker::addClient(const  string& clientName,const  string& clientPassword,const  string& clientEmail,const  double& clientBalance) {
    Investor newclient(clientName,clientPassword,clientEmail,clientBalance);
    clients[clientID]=newclient;
    clientCount++;
    clientID++;
    cout<<"\nClient added succesfully\n";
}