//Public: ye public jo hai wo access modifier
// basic 3 access modifier  1. public
//                            2.protected
 //                           3.private
#include<iostream>
using namespace std;
class Student{
    public://   if not written then the member of the class are inaccessible
    //private:  agar private kar diya to inaccesible ho jayega
    //Q. If we don't want the user to change the particular member 
    //  but we want user atleast can access it--> Getter function is used
    int rno;
    string name;
    //default constructor
    Student(){

    }
    Student(int r, string  n, float m){
        rno = r;
        name = n;
        marks = m;
    }
    float getMarks(){
        return marks;
    }
    

   void setMarks(float m){
     marks = m;
   }
   // void display(){
     //  cout<<" Roll No. : "<<rno<<endl;
     //  cout<<"Name: "<<name<<endl;
       //cout<<"Marks: "<<marks<<endl;
   // }
    private://
    float marks;
    };
    int main(){
        //Student s1;
        //s1.rno = 76;
        //s1.name = "Raghav Garg";
       // s1.marks = 92.2;
       // s1.display();
       Student s1(76,"avinash",92.2);
      // Student s2;
      // s2.rno =  52;
       //s2.name = "Ayush";
      // s2.marks = 87.9;
      s1.display();
    }
    