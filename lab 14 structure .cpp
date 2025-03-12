//_______________________lab 14 structure _______________&&&&
/*#include<iostream>
using namespace std;
struct student{
string firstname ;
string lastname ;
string rollno;
int mark;
void displayStudentinfo(student student){
cout << "Name:"<<student.firstname <<" "<<student.lastname<< endl;
cout << "Roll number:"<<student.rollno << endl;
cout << "Marks:"<<student.mark << endl;
}
}s1;
int main(){
student s1;
s1.firstname="Danial";
s1.lastname="Ayub";
s1.rollno="SE_2024_20";
s1.mark=948;
s1.displayStudentinfo(s1);
return 0;
}
*/
#include <iostream>
using namespace std;
struct Student {
    string firstName;
    string lastName;
    float marks;
};
void displayStudentInfo(Student *s) {
    cout << "Student Name: " << s->firstName << " " << s->lastName<<endl;
    cout << "Marks: " << s->marks << endl;
}

int main() {
    int n;
    Student *students;  
    cout << "Enter the number of students: ";
    cin >> n;
    students = new Student[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter details for student "<<endl;
        cout << "First Name: ";
        cin >> students[i].firstName;
        cout << "Last Name: ";
        cin >> students[i].lastName;
        cout << "Marks: ";
        cin >> students[i].marks;
    }

    
    cout << "Student Details:"<<endl;
    for (int i = 0; i < n; i++) {
        displayStudentInfo(&students[i]);
    }
    delete[] students;

    return 0;
}