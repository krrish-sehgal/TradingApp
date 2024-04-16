#pragma once
#include<bits/stdc++.h>
using namespace std;
#include "../user/User.h"
class Broker:public User {
private:
    string name;
    string licenseNumber;
    double commissionRate;

public:
    // Constructor
    Broker() {}
    Broker(const string& name, const string& licenseNumber, double commissionRate)
        : name(name), licenseNumber(licenseNumber), commissionRate(commissionRate) {}

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
 void addClient(const  string& clientName,const  string& clientPassword,const  string& clientEmail,const  double& clientBalance) {}
 void removeClient(int clientID) {}
 void displayClients() {}
 void displayClientInfo(int clientID) {}
void addAmountToClientBalance(int clientID, double amount) {}
 void displayClientportfolio(int clientID,const string& password) {}

    
};