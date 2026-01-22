#include<iostream>
using namespace std;
class Student{ // student is a new data type. CONVENTILONALLY BEGIN  from capital letter
public:
string name;
int rno;
float gpa;
//classes--->blueprint
//objects--->Instance


};// semicolon lagana mat bhulna
int main(){
    Student s1;
s1.name="Raghav Garg";
s1.rno = 76;
s1.gpa = 8.2;

//cin>>s1.rno;// we can take input also and then print.
 Student s2;
 s2.name="Avinash";
 s2.rno = 87;
 s2.gpa = 8.5;

cout<<s1.name<<" "<< s1.rno<<" "<<s1.gpa<<endl;
cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
}