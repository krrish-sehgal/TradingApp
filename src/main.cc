#include <iostream>
#include "../Models/user/User.h"
#include "../Models/investor/1_investor.h"
#include "../Models/broker/Broker.h"    
#include "mysql-connector/include/mysql/jdbc.h"

using namespace std;

int main() {

    bool running = true;
    Broker* users = new Broker[1000];
    Investor* investors = new Investor[1000];
    int brokerPtr = 0;
    int userPtr = 0;

    while (running) {
        cout << "Welcome to the Trading Simulation Application\n";
        cout << "1. Broker\n";
        cout << "2. Normal User\n";
        cout << "3. Exit\n";
        cout << "Choose an option: ";

        int option;
        cin >> option;
        int pass ; 
        string mail;
        if (option == 1) {
            cout << "You chose Broker\n";
            cout << "1.Login" << endl << "2.SignUp" << endl;
            cin >> option;
            if(option==1){
                cout << "Enter your email: ";
                cin >> mail;
                cout << "Enter your password: ";
                cin >> pass;
                // Add broker functionality here
            }
            else if(option==2){
                cout << "Enter your email: ";
                cin >> mail;
                cout << "Enter your password: ";
                cin >> pass;
                cout << "Enter your name: ";
                string name;
                cin >> name;
                cout << "Enter your license number: ";
                string licenseNumber;
                cin >> licenseNumber;
                cout << "Enter your commission rate: ";
                double commissionRate;
                cin >> commissionRate;
                users[brokerPtr] = Broker(name, licenseNumber, commissionRate);
                brokerPtr++;
            }
            

            // Add broker functionality here
        } else if (option == 2) {
            cout << "You chose Investor\n";

            // Add normal user functionality here
        } else if (option == 3) {
            cout << "Exiting...\n";
            running = false;
        } else {
            cout << "Invalid option. Please choose again.\n";
        }
    }
}
