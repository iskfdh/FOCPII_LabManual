#include<iostream>
using namespace std;

class Student{
    public:
    int roll_no;
    char name[20];
    float marks;
}; 

int main(){
    Student s1;
    cout<<"Enter roll number: ";
    cin>>s1.roll_no;
    cout<<"Enter name: ";
    cin>>s1.name;
    cout<<"Enter marks: ";
    cin>>s1.marks;
    cout<<"\nStudent Details:\n";
    cout<<"Roll Number: "<<s1.roll_no<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Marks: "<<s1.marks<<endl;
    return 0;
}