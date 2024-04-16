#pragma once
#include<bits/stdc++.h>
#include<unordered_map>
#include "../user/User.h"
#include"../investor/1_Investor.h"
using namespace std;
class Broker:public User {
protected:

    string name;
    string licenseNumber;
    double commissionRate;
    unordered_map<int, Investor> clients; 
    int clientCount ; // Track the number of clients
    int clientID;

public:
    // Constructor
    Broker() {}
    Broker(const string& name, const string& licenseNumber, double commissionRate,string mail,string pass)
        :User(name,password,email), name(name), licenseNumber(licenseNumber), commissionRate(commissionRate) {
            clientCount = 0; // Track the number of clients
   clientID=0;
        }

    // Getter methods
    string getName() const {
        return name;
    }

    string getLicenseNumber() const {
        return licenseNumber;
    }

    double getCommissionRate() const {
        return commissionRate;
    }

    // Setter methods
    void setName(const string& newName) {
        name = newName;
    }

    void setLicenseNumber(const string& newLicenseNumber) {
        licenseNumber = newLicenseNumber;
    }

    void setCommissionRate(double newCommissionRate) {
        commissionRate = newCommissionRate;
    }

    // Function to display broker information
    void displayBrokerInfo() const {
        cout << "Broker Name: " << name << endl;
        cout << "License Number: " << licenseNumber << endl;
        cout << "Commission Rate: " << commissionRate << "%" << endl;
    }
 void addClient(const  string& ,const  string& ,const  string& ,const  double& );
 void removeClient(int );   
 void displayListClients();
 void displayClientInfo(int );
 void openclientid(int ,const string& ) ;
void addAmountToClientBalance(int ID, double amount) {
    if(clients.find(ID) == clients.end()){
        cout<<"Client not found"<<endl;
   }
   else{
    clients[ID].addbalance(amount);
   }
}

};