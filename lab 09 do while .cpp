#include <iostream>
using namespace std;
int main() {
    string correctPassword = "pass123"; 
    string password;

    do {
        cout << "Enter the password: "<<endl;
        cin>> password;
        if (password != correctPassword) {
            cout << "Incorrect password. Try again."<<endl;
        }

    } while (password != correctPassword);

    cout << "Access granted!"<<endl;

    return 0;
}