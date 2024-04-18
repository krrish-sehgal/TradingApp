#pragma once
#include <bits/stdc++.h>
#include "../investor/1_Investor.h"
#include "1_Broker.h"
#include "../investor/1_Investor.h"
using namespace std;
void Broker::openclientid(int ID, string &pass)
{
  if (clients.find(ID) == clients.end() || clients[ID]->getPass() != pass)
  {
    cout << "Client not found or invalid passoword " << endl;
  }
  else
  {
    cout << "This is the Client's portfolio" << endl;
    clients[ID]->displayPortfolio();
    int option;
    do
    {
      cout << "1. Display Client Info" << endl
           << "2. Display Stock options" << endl
           << "3. Remove Client" << endl
           << "4. Exit" << endl;
      cin >> option;

      switch (option)
      {
      case 1:
        displayClientInfo(ID);
        break;
      case 2:
        displayOptions(*clients[ID], 1, commissionRate);
        break;
      case 3:
        removeClient(ID);
        option = 4;
        break;
      default:
        cout << "Invalid option. Please try again." << endl;
        break;
      }
    } while (option != 4);
  }
}