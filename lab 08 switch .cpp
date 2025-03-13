 //_________________________lab 08 switch _______$""""""____
 #include <iostream>
using namespace std;

int main() {
//_______________________program 01_______________________
   /* double num1, num2;
    char op;

    cout << "Enter first number: "<<endl;
    cin >> num1 ;
    cout << "Enter second number: " << endl;
    cin >> num2;
    cout << "Enter an operator (+, -, *, /): "<<endl;
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            break;
    }

    return 0;
}
*/
//_______________''''''program 02______________________'_'''__'_

  /*  int day;
    
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;
    
    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Error: Please enter a number between 1 and 7." << endl;
            break;
    }
    
    return 0;
}
*/
//______________________program 03________________________________
 /*   int choice;
    const double PI = 3.14159;

    cout << "Select a shape to calculate its area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1: {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            double area = PI * radius * radius;
            cout << "Area of the Circle: " << area << endl;
            break;
        }
        case 2: {
            double length, width;
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            double area = length * width;
            cout << "Area of the Rectangle: " << area << endl;
            break;
        }
        case 3: {
            double base, height;
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            double area = 0.5 * base * height;
            cout << "Area of the Triangle: " << area << endl;
            break;
        }
        default:
            cout << "Error: Invalid selection!" << endl;
            break;
    }

    return 0;
}*/
//____________________________program 04______________''''''''

   /* double usd, convertedAmount;
    int choice;
    const double USD_TO_PKR = 277.50; 
    const double USD_TO_INR = 82.50;  
    const double USD_TO_EURO = 0.92;  
    cout << "Currency Converter - Convert USD to PKR, INR, or Euro"<<endl;
    cout << "Enter the amount in USD: ";
    cin >> usd;
    cout << "Choose the currency to convert to:"<<endl;
    cout << "1. Pakistani Rupees (PKR)"<<endl;
    cout << "2. Indian Rupees (INR)"<<endl;
    cout << "3. Euro (EUR)"<<endl;
    cout << "Enter your choice (1-3): "<<endl;
    cin >> choice;

    switch (choice) {
        case 1:
            convertedAmount = usd * USD_TO_PKR;
            cout << usd << " USD is " << convertedAmount << " PKR"<<endl;
            break;
        case 2:
            convertedAmount = usd * USD_TO_INR;
            cout << usd << " USD is " << convertedAmount << " INR"<<endl;
            break;
        case 3:
            convertedAmount = usd * USD_TO_EURO;
            cout << usd << " USD is " << convertedAmount << " EUR"<<endl;
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 3."<<endl;
    }

    return 0;
}*/
//_____________________program 05___________________________

    int category, itemChoice, quantity;
    double price = 0, total, discount = 0, finalAmount;
    string itemName;
    cout << "Select a category:\n";
    cout << "1. Electronics\n";
    cout << "2. Clothing\n";
    cout << "3. Groceries\n";
    cout << "Enter your choice: ";
    cin >> category;
    switch (category) {
        case 1:
            cout << "Select an item:\n";
            cout << "1. Laptop - $1000\n2. Smartphone - $700\n3. Headphones - $150\n";
            cout << "Enter your choice: ";
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: price = 1000; itemName = "Laptop"; break;
                case 2: price = 700; itemName = "Smartphone"; break;
                case 3: price = 150; itemName = "Headphones"; break;
                default: cout << "Invalid item selection!\n"; 
            }
            break;
        case 2:
            cout << "Select an item:\n";
            cout << "1. Jacket - $120\n2. T-shirt - $40\n3. Jeans - $60\n";
            cout << "Enter your choice: ";
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: price = 120; itemName = "Jacket"; break;
                case 2: price = 40; itemName = "T-shirt"; break;
                case 3: price = 60; itemName = "Jeans"; break;
                default: cout << "Invalid item selection!\n"; return 1;
            }
            break;
        case 3:
            cout << "Select an item:\n";
            cout << "1. Milk (1L) - $2\n2. Bread (1 Loaf) - $3\n3. Eggs (1 Dozen) - $5\n";
            cout << "Enter your choice: ";
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: price = 2; itemName = "Milk (1L)"; break;
                case 2: price = 3; itemName = "Bread (1 Loaf)"; break;
                case 3: price = 5; itemName = "Eggs (1 Dozen)"; break;
                default: cout << "Invalid item selection!\n"; return 1;
            }
            break;
        default:
            cout << "Invalid category selection!\n";
            
    }
    cout << "Enter quantity: ";
    cin >> quantity;

    if (quantity <= 0) {
        cout << "Invalid quantity!\n";
    }
    total = price * quantity;
    if (total >= 100 && total <= 500)
        discount =( total * 10)/100;
    else if (total > 500)
        discount =( total * 20)/100;

    finalAmount = total - discount;
    cout << "Item: " << itemName << "\n";
    cout << "Quantity: " << quantity << "\n";
    cout << "Total Price: $" << total << "\n";
    cout << "Discount : $" << discount << "\n";
    cout << "Final Amount: $" << finalAmount << "\n";

    return 0;
}