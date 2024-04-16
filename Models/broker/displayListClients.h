#pragma once
#include<bits/stdc++.h>
#include"../investor/1_Investor.h"
#include"1_Broker.h"
using namespace std;
void Broker::displayListClients()
{
     for (const auto& entry : clients) {
        const int& ID = entry.first;
        const Investor& obj = entry.second;
        cout << " - Client ID: " << ID << endl;
        obj.displayUserInfo();}
 }