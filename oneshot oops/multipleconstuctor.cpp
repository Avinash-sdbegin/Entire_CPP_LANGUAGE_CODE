#include<iostream>
using namespace std;

class Student{//student is new data type
public:
string name;
int rno;
float gpa;
string grade;
//Agar koi constructor tumne nhi banwaya toh bhi pehle se ek default constructor hota hi hai.
// Ham constructor 2 k bhi bana sakte hai , 3 k bhi bana sakte hai


Student(string s, int r){// PARAMETRIZED CONSTRUCTOR
    name =s;// jis order mai niche pass kiya gaya hai usi ordr mai banana hai
    rno = r;
    
}
Student(string s, int r, string g){
name =s;
rno = r;
grade = g;
}
};


int main(){
  //constructor

Student s1("Raghav garg", 78);
s1.gpa = 8.2;
Student s2("Raghav garg", 78 ," A");
Student s3("AVINASH",43);
s3.gpa = 9.1;
Student s4 = s2;//Deep copy
s4.name = "Manish";
Student s7(s2);//Copy constructor
s7.name = "Ayush";
cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
cout<<s2.name<<" "<<s2.rno<<" "<<s2.grade<<endl;
cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<endl;
cout<<s4.name<<" "<<s4.rno<<" "<<s4.grade<<endl;
cout<<s7.name<<" "<<s7.rno<<" "<<s7.grade<<endl;
}



