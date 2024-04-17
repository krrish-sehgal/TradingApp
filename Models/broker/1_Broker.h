#pragma once
#include<bits/stdc++.h>
#include<unordered_map>
#include "../user/User.h"
#include"../investor/1_Investor.h"

using namespace std;

class Broker:public User {
protected:


    string licenseNumber;
    double commissionRate;
    unordered_map<int, Investor> clients; 
    unordered_map<int,double> transaction;
    int clientCount ; // Track the number of clients
    int clientID; // Track the client ID
double earning;
public:
    // Constructor
    Broker() {}
    Broker(string& name, string& licenseNumber, double commissionRate,string mail,string pass)
        :User(name,mail,pass), licenseNumber(licenseNumber), commissionRate(commissionRate) {
            clientCount = 0; // Track the number of clients
            clientID = 0;
        }

    // Getter methods
    string getLicenseNumber() const {
        return licenseNumber;
    }

    double getCommissionRate() const {
        return commissionRate;
    }

    void setLicenseNumber(const string& newLicenseNumber) {
        licenseNumber = newLicenseNumber;
    }

    void setCommissionRate(double newCommissionRate) {
        commissionRate = newCommissionRate;
    }

    // Function to display broker information
    void displayBrokerInfo() const {
        cout << "Broker Name: " << username << endl;
        cout << "License Number: " << licenseNumber << endl;
        cout << "Commission Rate: " << commissionRate << "%" << endl;
    }
 void addClient(const  string& ,const  string& ,const  string& ,const  double& );
 void removeClient(int );   
 void displayListClients();
 void displayClientInfo(int );
 void openclientid(int ,string& ) ;
void addAmountToClientBalance(int ID, double amount) {
    if(clients.find(ID) == clients.end()){
        cout<<"Client not found"<<endl;
   }
   else{
    transaction[ID]+=amount;
    clients[ID].addbalance(amount);
   }
}

};
#include"./addClient.h"
#include"./displayClientInfo.h"
#include"./displayListClients.h"
#include"./openClientid.h"
#include"./removeClient.h"