#pragma once
#include <bits/stdc++.h>
#include "1_Investor.h"

using namespace std;
void Investor::addbalance(double amount){
 cout << "\nCurrent Balance:$" << balance;
        balance += amount;
        cout << "\nNew Balance:$" << balance;
}