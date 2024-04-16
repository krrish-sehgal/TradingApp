#pragma once

#include<bits/stdc++.h>
using namespace std;
#include"../Models/broker/1_Broker.h"
#include "./3_brokerFunctionalities.h"


// template<typename UserType>
void brokerLogin(Broker* &arr, int &size) {
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
