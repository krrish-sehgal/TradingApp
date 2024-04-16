#pragma once
#include<bits/stdc++.h>
using namespace std;
#include "../user/User.h"
class Broker:public User {
private:
    string licenseNumber;
    double commissionRate;

public:
    // Constructor
    Broker() {}
    Broker(const string& name, const string& licenseNumber, double commissionRate, string mail, string pass)
        :User(name,mail,pass) , licenseNumber(licenseNumber), commissionRate(commissionRate) {}

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
        cout << "Broker Name: " << this->getUsername()<< endl;
        cout << "License Number: " << licenseNumber << endl;
        cout << "Commission Rate: " << commissionRate << "%" << endl;
    }
    
};