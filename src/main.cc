#include <iostream>
#include "../Models/user/User.h"
#include "mysql-connector/include/mysql/jdbc.h"

using namespace std;

int db(){

    sql::mysql::MySQL_Driver* driver;
    sql::Connection* con;

    try {
        // Create a MySQL driver instance
        driver = sql::mysql::get_mysql_driver_instance();

        // Establish connection to the database
        con = driver->connect("localhost","root ","krrish#987");

        if (con == nullptr) {
            std::cerr << "Failed to connect to database" << std::endl;
            return 1;
        }

        std::cout << "Connected to database successfully" << std::endl;

        // Perform database operations here

        // Close connection
        con->close();
        delete con;
    } catch (sql::SQLException& e) {
        std::cerr << "SQL Exception: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}

int main() {
    // User u;
    bool running = true;

    while (running) {
        cout << "Welcome to the Trading Simulation Application\n";
        cout << "1. Broker\n";
        cout << "2. Normal User\n";
        cout << "3. Exit\n";
        cout << "Choose an option: ";
        db();
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
