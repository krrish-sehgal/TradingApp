#pragma once    
#include<bits/stdc++.h>
using namespace std;
#include"../Models/investor/1_Investor.h"
#include "./7_investorFunctionalities.h"


// template<typename UserType>
void investorLogin(Investor* &arr, int &size) {
    string mail, pass;
    cout << "Enter your email: ";
    cin >> mail;
    cout << "Enter your password: ";
    cin >> pass;
    for (int i = 0; i < size; i++) {
        if (arr[i].getMail() == mail && arr[i].getPass() == pass) {
            cout << "Login successful!" << endl;
            brokerFunctionalities(arr[i]);
            break;
        }
    }
}