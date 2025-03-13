#include <iostream>
using namespace std;
// Struct to hold menu items
struct MenuItem {
    string name;
    double pricePerUnit;
};

// Function to display menu
void displayMenu() {
    cout << "===== Restaurant Menu ====="<<endl;
    cout << "1. Karahi"<<endl;
    cout << "   a. Chicken Karahi - 1000 per KG"<<endl;
    cout << "   b. Mutton Karahi - 1800 per KG"<<endl;
    cout << "2. Biryani"<<endl;
    cout << "   a. Chicken Biryani - 250 per plate"<<endl;
    cout << "   b. Beef Biryani - 300 per plate"<<endl;
    cout << "3. Exit"<<endl;
}

// Function to take order
double takeOrder() {
    char category, subChoice;
    double quantity, totalBill = 0;
    bool continueOrdering;

    do {
        displayMenu();
        cout << "\nEnter the category you want to order (1-2) or 3 to exit: "<<endl;
        cin >> category;

        // Menu Items and Prices
         MenuItem menuItems[] = {
            {"Chicken Karahi", 1000}, {"Mutton Karahi", 1800},
            {"Chicken Biryani", 250}, {"Beef Biryani", 300}
        };

        switch (category) {
            case '1':
                cout << "Choose: (a) Chicken Karahi (b) Mutton Karahi: "<<endl;
                cin >> subChoice;
                if (subChoice == 'a' || subChoice == 'A') {
                    cout << "Enter quantity in KG: "<<endl;
                    cin >> quantity;
                    totalBill += quantity * menuItems[0].pricePerUnit;
                } else if (subChoice == 'b' || subChoice == 'B') {
                    cout << "Enter quantity in KG: "<<endl;
                    cin >> quantity;
                    totalBill += quantity * menuItems[1].pricePerUnit;
                } else {
                    cout << "Invalid choice."<<endl;
                }
                break;
            case '2':
                cout << "Choose: (a) Chicken Biryani (b) Beef Biryani: "<<endl;
                cin >> subChoice;
                if (subChoice == 'a' || subChoice == 'A') {
                    cout << "Enter quantity in plates: "<<endl;
                    cin >> quantity;
                    totalBill += quantity * menuItems[2].pricePerUnit;
                } else if (subChoice == 'b' || subChoice == 'B') {
                    cout << "Enter quantity in plates: "<<endl;
                    cin >> quantity;
                    totalBill += quantity * menuItems[3].pricePerUnit;
                } else{
                     cout << "Invalid choice" << endl;
                }
            case '3':
                cout << "Exiting order process"<<endl;
                return totalBill;
            default:
                cout << "Invalid category choice."<<endl;
        }

        cout << "Do you want to order more? (1 for Yes, 0 for No): ";
        cin >> continueOrdering;

    } while (continueOrdering);

    return totalBill;
}

int main() {
    cout << "Welcome to Our Restaurant!"<<endl;
    double finalBill = takeOrder();
    cout << "Your total bill is: " << finalBill << " PKR"<<endl;
    cout << "Thank you for ordering with us!"<<endl;
    return 0;
}