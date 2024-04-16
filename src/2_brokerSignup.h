#include<bits/stdc++.h>
using namespace std;
#include"../Models/broker/1_Broker.h"

void brokerSignup(Broker* brokers, int&brokerPtr){
    string name, mail, pass;
    string licenseNumber;
    double commissionRate;
    cout << "Enter your email: ";
    cin >> mail;
    cout << "Enter your password: ";
    cin >> pass;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your license number: ";
    cin >> licenseNumber;
    cout << "Enter your commission rate: ";
    cin >> commissionRate;
    brokers[brokerPtr] = Broker(name, licenseNumber, commissionRate ,mail,pass);
    brokerPtr++;
}