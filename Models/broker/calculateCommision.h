#pragma once
#include<bits/stdc++.h>
#include"../investor/1_Investor.h"
#include"1_Broker.h"
using namespace std;
void Broker::calculateCommision(int ID){
    clients[ID].getbalance()*(commissionRate/100);

}