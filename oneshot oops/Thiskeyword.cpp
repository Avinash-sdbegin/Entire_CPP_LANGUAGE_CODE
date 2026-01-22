#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;

Cricketer( string name, int runs){ //Agar variable name same 
   // name = s;                   //ho toh Garbage value aati hai.
                                   // pehle value assign hoti hai 
                                   //phir box mein value dali jati hai
   // runs = r;
//Agar same value rakhni hai to this-> k use karo!!
this->name = name;
this->runs = runs;
}
};
int main(){
    //Cricketer c1;
   // c1.name="virat kohli";
    //c1.runs=25000;
    //cout<<c1.name<<"  "<<c1.runs<<endl;
    Cricketer c2("manubhav", 782);
    Cricketer c3("arham", 8972);
    cout<<c2.name<<"  "<<c2.runs<<endl;
    cout<<c3.name<<"  "<<c3.runs<<endl;
}