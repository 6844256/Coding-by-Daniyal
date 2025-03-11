#include<iostream>
using namespace std;

int main()
{
//________________program 01___________
   /* int N;
    cout << "Enter value of N:" << endl;
    cin >> N;
    int i=1;
    cout << "The numbers from 1 to N are:" << endl;
    while (i<=N){
    cout << i << endl;;
    i++;
    }
    cout <<endl;
    return 0;*/
    //________________program 02_________
    /*int N;
    cout << "Enter number:" << endl;
    cin >> N;
    int i=0;
    
    cout << "Multiplication table of "<<N<<"" << endl;
    while (i<10){
    i++;
    cout << N<<"x"<<i<<"="<<N*i<< endl;
    
    }
    */
    //_______________program 03___________
  /*  int num;
    while (true){
    cout << "Enter positive number:" << endl;
    cin >> num;
    
    if(num>0){
    cout << "You enter "<<num<<"" << endl;
    break ;
    }else{
    cout << "Error.you entered negative number" << endl;
    }
    }
    cout<<endl;
    return 0;*/
    //________________program 04__________
    /*
    int i=1;
    int sum=0;
    while (i<=5){
    sum+=i;
    i++;
    }
    cout << "Sum of first five natural numbers is="<<sum << endl;
    */
    double balance=1000.0;
    int choice ;
    while (true){
    cout << "Simple banking app:" << endl;
    cout << "Enter your choice:" << endl;
    cout << "1.Deposite money\n2.Withdraw\n3.check balance\n4.Exit" << endl;
    cin >> choice;
    switch(choice){
    case 1:{
    double amount ;
    cout << "Enter deposit ammount:" << endl;
    cin >> amount;
    if(amount>0){
    balance+=amount ;
    cout << "Deposit sucessful.New balance="<<balance << endl;
    }else{
    cout <<"Invalid amount"<<endl;
    }
    }break;
    case 2:{
    double amount ;
    cout << "Enter withdraw amount" << endl;
    cin >> amount;
    if(amount<0||amount>balance){
    cout << "in sufficient amount" << endl;
    }else{
    balance-=amount ;
    cout << "Withdraw successful.Current balance="<<balance << endl;
    }
    break;
    }
    case 3 :
    cout << "Current balance is:" <<balance<< endl;
    break;
    case 4:
    cout << "Exit" << endl;
    return 0;
    default :
    cout << "Invalid choice.Try again" << endl;
    
    }
    }

}
