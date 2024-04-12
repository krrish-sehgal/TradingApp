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
    
};