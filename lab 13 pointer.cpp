 //____________________________lab 13 pointer____________________
 #include<iostream>
using namespace std;
int main()
{
//___________________""'____''__program 01______________________
    /*int a=5;
    int *b=&a;
    cout<<"Value of a is:"<<*b;
    return 0;
    */
  //________________________program 02_______________________
   /* int a=7;
    int *ptr=&a;
    *ptr=27;
    cout<<"Modified value of a is="<<*ptr;
    return 0 ;
}
*/
//_________________________program 03________________________.
   /*int arr[] = {10, 20, 30, 40, 50}; 
    int* ptr = arr;  

    cout << "Array elements using pointer arithmetic: ";
    for (int i = 0; i < 5; i++) {
    cout << *(ptr + i) << endl;
    }
    return 0;
}*/
//_________________________&program 04_________________________
/*void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    swap(&num1, &num2);  

    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}

//___________________________program 05________________&&&&&&
 /*   int* ptr = nullptr;

    if (ptr == nullptr) {
    cout << "The pointer is null and does not point to any valid memory." <<endl;
    } else {
    cout << "The pointer is not null and points to a valid memory location." << endl;
    }

    return 0;
}
*/
//___________________________program 06______________________
    int num = 42;   
    void* ptr;      

    ptr = &num; 
    cout << "The value of num is: " << *(static_cast<int*>(ptr)) << endl;

    return 0;
}