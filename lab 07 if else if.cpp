//________________________lab 07 If else If_____________________
#include <iostream>
using namespace std;
int main() {
//________________________program 01____________________________
   /* int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else {
        if (num < 0) {
            cout << "The number is negative." << endl;
        } else {
            cout << "The number is zero." << endl;
        }
    }
    return 0;
    }
*/
    // ___________________________program 02______$_____________
 /*
    float temp;
    cout << "Enter the temperature in °C: "<<endl;
    cin >> temp;

    if (temp >= 40) {
        cout << "It's extremely hot! Stay indoors ." << endl;
    } else {
        if (temp >= 30) {
            cout << "It's hot outside. Drink plenty of water to stay hydrated." << endl;
        } else {
            if (temp >= 20) {
                cout << "The weather is pleasant. Enjoy outdoor activities!" << endl;
            } else {
                cout << "It's cold. Wear warm clothes to stay comfortable." << endl;
            }
        }
    }

    return 0;
}
*/
//________________________program 03___________________________
  /*  string correctUsername = "admin";
    string correctPassword = "12345";
    string username, password;
    
    cout << "Enter username: "<<endl;
    cin >> username;
    cout << "Enter password: "<<endl;
    cin >> password;
    if (username == correctUsername && password == correctPassword) {
        cout << "Access Granted." << endl;
    } 
    else if (username == correctUsername && password != correctPassword) {
        cout << "Wrong Password." << endl;
    } 
    else {
        cout << "User Not Found." << endl;
    }

    return 0;
}
*/
//_______________________program 04_________________'____'____
   /* int sub1, sub2, sub3, total;
    float percentage;
    char grade1, grade2, grade3;
    cout << "Enter marks for Subject 1 out of 100: "<<endl;
    cin >> sub1;
    cout << "Enter marks for Subject 2 out of 100: "<<endl;
    cin >> sub2;
    cout << "Enter marks for Subject 3 out of 100: "<<endl;
    cin >> sub3;
    total = sub1 + sub2 + sub3;
    percentage = (total*100) / 300;

    if (sub1 >= 90) grade1 = 'A';
    else if (sub1 >= 80) grade1 = 'B';
    else if (sub1 >= 70) grade1 = 'C';
    else if (sub1 >= 60) grade1 = 'D';
    else grade1 = 'F';
    
    if (sub2 >= 90) grade2 = 'A';
    else if (sub2 >= 80) grade2 = 'B';
    else if (sub2 >= 70) grade2 = 'C';
    else if (sub2 >= 60) grade2 = 'D';
    else grade2 = 'F';

    if (sub3 >= 90) grade3 = 'A';
    else if (sub3 >= 80) grade3 = 'B';
    else if (sub3 >= 70) grade3 = 'C';
    else if (sub3 >= 60) grade3 = 'D';
    else grade3 = 'F';

    if (grade1 == 'F' || grade2 == 'F' || grade3 == 'F') {
        cout << "Failed. Better luck next time!" << endl;
    } 
    else {
        cout << "Total Marks: " << total<<endl;
        cout << "Percentage: " << percentage << "%"<<endl;
        cout << "Grade in Subject 1: " << grade1<<endl;
        cout << "Grade in Subject 2: " << grade2<<endl;
        cout << "Grade in Subject 3: " << grade3<<endl;

        if (grade1 == 'A' && grade2 == 'A' && grade3 == 'A' && total >= 270) {
            cout << "Eligible for Merit Scholarship!" << endl;
        } 
        else if (grade1 >= 'B' && grade2 >= 'B' && grade3 >= 'B' && total >= 240) {
            cout << "Eligible for Regular Scholarship!" << endl;
        } 
        else {
            cout << "Not eligible for any scholarship." << endl;
        }
    }

    return 0;
}
*/
//_______________________________peogram 05__________________
  /*  int age;
    double income;
    cout << "Enter your age: "<<endl;
    cin >> age;
    
    cout << "Enter your annual income: "<<endl;
    cin >> income;
    if (age < 18) {
        cout << "You are not eligible for a loan because you are under 18 years of age." << endl;
    } 
    else if (income < 30000) {
        cout << "You meet the age requirement but are not eligible for a loan because your income is below $30,000." << endl;
    } 
    else {
        cout << "Congratulations! You are eligible for a loan." << endl;
    }

    return 0;
}*/
//____________________________program 06___________________

    string definedUsername = "admin";
    string definedPassword= "password123";

    string username, password, role;

    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;
    if (username == definedUsername&& password == definedPassword) {
        cout << "Authentication Successful!" << endl;

        cout << "Enter your role (Admin/Guest/Other): "<<endl;
        cin >> role;
        
        if (role == "Admin" || role == "admin") {
            cout << "Full Access" << endl;
        } 
        else if (role == "Guest" || role == "guest") {
            cout << "Limited Access" << endl;
        } 
        else {
            cout << "Custom Role: Access Defined by System Policy" << endl;
        }
    } 
    else {
        cout << "Authentication Failed. Access Denied." << endl;
    }

    return 0;
}