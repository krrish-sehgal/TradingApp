#include <iostream>
#include "../Models/user/User.h"
#include "../Models/investor/1_investor.h"
#include "../Models/broker/1_Broker.h"    
#include "1_brokerLogin.h"    
#include "2_brokerSignup.h"    


using namespace std;

int main() {
    User u;
    bool running = true;

    while (running) {
        cout << "Welcome to the Trading Simulation Application\n";
        cout << "1. Broker\n";
        cout << "2. Normal User\n";
        cout << "3. Exit\n";
        cout << "Choose an option: ";

        int option;
        cin >> option;

        if (option == 1) {
            cout << "You chose Broker\n";
            
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
