#include <iostream>
#include "../Models/user/User.h"
#include "../Models/investor/1_investor.h"
#include "../Models/broker/1_Broker.h"    
#include "1_brokerLogin.h"    
#include "2_brokerSignup.h"    


using namespace std;

int main() {

    bool running = true;
    Broker* brokers = new Broker[1000];
    Investor* investors = new Investor[1000];
    int brokerPtr = 0;
    int investorPtr = 0;
 
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
                brokerLogin(brokers,brokerPtr);
            }
            else if(option==2){
               brokerSignup(brokers,brokerPtr);
            }
            
        } else if (option == 2) {
            cout << "You Investor\n";
            cout << "1.Login" << endl << "2.SignUp" << endl;
            cin >> option;
            if(option==1){
                investorLogin(investors,investorPtr);
            }
            else if(option==2){
               investorSignup(investors,investorPtr);
            }
        } else if (option == 3) {
            cout << "Exiting...\n";
            running = false;
        } else {
            cout << "Invalid option. Please choose again.\n";
        }
    }
}
