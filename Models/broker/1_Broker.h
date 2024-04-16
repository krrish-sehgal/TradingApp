#pragma once
#include<bits/stdc++.h>
#include<unordered_map>
#include "../user/User.h"
#include"../investor/1_Investor.h"
using namespace std;
class Broker:public User {
private:
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
 void addClient(const  string& clientName,const  string& clientPassword,const  string& clientEmail,const  double& clientBalance) {}
 void removeClient(int clientID) {}
 void displayClients() {
     for (const auto& entry : clients) {
            const int& ID = entry.first;
            const Investor& obj = entry.second;
            cout << " - " << ID << "\n" << obj.displayUserInfo()<<endl;
        }
 }
 void displayClientInfo(int ID) {
   if(clients.find(ID) == clients.end()){
       cout<<"Client not found"<<endl;
   }
   else{
       cout<<"ID:"<<ID;
       clients[ID].displayUserInfo();
      cout<<"\nBalance"<<clients[ID].getbalance()<<endl;
      cout<<"\nInvested"<<clients[ID].getinvested()<<endl;
cout<<"\nTotal PnL\n"<<clients[ID].gettotalpnl()<<endl;

   }
 }
void addAmountToClientBalance(int ID, double amount) {
     if(clients.find(ID) == clients.end()){
       cout<<"Client not found"<<endl;
   }
   else{
    clients[ID].addbalance(amount);
   }
}
 void openclientid(int ID,const string& pass) {
     if(clients.find(ID) == clients.end()||clients[ID].getPassword()!=pass){
       cout<<"Client not found or invalid passoword "<<endl;
   }
   else{
    clients[ID].displayPortfolio(); //add investor functionalities here 
   }
 }


};