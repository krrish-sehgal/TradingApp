#include<bits/stdc++.h>
using namespace std;


class User {
protected:
    string username;
    string email;
    string password;

public:
    // Constructor
    User() {}
    User(const string& username, const string& email)
        : username(username), email(email) {}

    // Virtual destructor
    virtual ~User() {}

    // Getter methods
    string getUsername() const {
        return username;
    }

    string getEmail() const {
        return email;
    }

    // Virtual function to display user information
    virtual void displayUserInfo() const {
        cout << "Username: " << username << endl;
        cout << "Email: " << email << endl;
    }
};
