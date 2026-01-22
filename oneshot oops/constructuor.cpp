#include<iostream>
using namespace std;

class Student{//student is new data type
public:
string name;
int rno;
float gpa;
//Agar koi constructor tumne nhi banwaya toh bhi pehle se ek default constructor hota hi hai.
Student(){

}
Student(string s, int r){// PARAMETRIZED CONSTRUCTOR
    name =s;// jis order mai niche pass kiya gaya hai usi ordr mai banana hai
    rno = r;
    
}
};

void print(Student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}
int main(){
  //constructor

Student s1("Raghav garg", 78);
s1.gpa = 8.2;
Student s2();
 print(s1);
 
  
}
