//                      lab 12 functions 
#include<iostream>
using namespace std;
//                 program 01
 /*  void greet(){
   cout << "Hello,welcome to c++ function" << endl;
   }int main(){
   greet();
   
    return 0;*/
    //              program 02

   /*int oddeven(int a){
   if(a%2==0){
   cout << "Number is even" << endl;
   }else{
   cout << "Number is odd" << endl;
   }
   }
   int main(){
   int num;
   cout << "Enter a number" << endl;
   cin >> num;
   oddeven(num);
}*/
//                 program 03

/*int factorial (int a){
int factorial=1;
for(int i=1;i<=a;i++){
factorial*=i;
}
return factorial ;
}
int main(){
int num;
cout << "Enter a number" << endl;
cin >> num;
cout << "factorial of a "<<num<<" is="<<factorial(num) << endl;
}
   */ 

double add(double num1,double num2){
return num1+num2;
}double subtract(double num1,double num2){
return num1-num2;
}double multiply(double num1,double num2){
return num1*num2;
}double division (double num1,double num2){
if(num2!=0){
return num1/num2;
}else{
cout << "Error.division by zero" << endl;
}
}int main(){
int num1;
int num2;
char operation ;
cout << "Enter num1" << endl;
cin >> num1;
cout << "Enter operation(+,-,*,/)" << endl;
cin >> operation;
cout << "Enter num2" << endl;
cin >> num2;
switch(operation){
case'+': 
cout <<num1<<"+"<<num2<<"="<<add(num1 ,num2) << endl;
break ;
case'-':
cout <<num1<<"-"<<num2<<"="<<subtract (num1 ,num2) << endl;
break ;
case'*':
cout <<num1<<"*"<<num2<<"="<<multiply (num1 ,num2) << endl;
break ;
case'/':
cout <<num1<<"/"<<num2<<"="<<division (num1 ,num2) << endl;
break;
}
}