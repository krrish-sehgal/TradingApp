#pragma once

#include<bits/stdc++.h>
using namespace std;
#include"../Models/broker/1_Broker.h"


void brokerFunctionalities(Broker&obj){
    cout << "Welcome " << obj.getName() << endl;
    cout << "1. Display Client list" << endl;
    cout << "2. Add client " << endl;
    cout << "3. Remove client" << endl;
    cout << "4. Open Client Id" << endl;
    cout << "5. Display all client info" << endl;
    cout << "6. Exit" << endl;
    int choice;int ID; string pass;
    cin >> choice;
    switch(choice){
        case 1:
            obj.displayListClients();
            break;
        case 2:
        //addclient
            break;
        case 3:
        cout<<"enter id"<<endl;
          cin>>ID;
            obj.removeClient(ID);
            break;
        case 4:
        cout<<"enter id"<<endl;
       
        cout<<"Enter Id";
        cin>>ID;
        cout<<"Enter Password";
        cin>>pass;
            obj.openclientid(ID,pass);
            break;
        case 5:
        cout<<"Enter Id";
        cin>>ID;
            obj.displayClientInfo(ID);
            break;
        case 6:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
}