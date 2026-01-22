//THIS KEYWORD
#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
float avg;
Cricketer( string name, int runs, float avg){ //Agar variable name same 
  
this->name = name;
this->runs = runs;
this->avg = avg;
}
//void print(int a){
 //   cout<<this->name<<"  "<<this->runs<<" "<<this->avg<<endl;
//}
void print(int runs){
    cout<<name<<"  "<<runs<<" "<<avg<<endl;
    cout<<runs<<endl;
}
int matches(){
    return runs/avg;
}
};
int main(){
    //Cricketer c1;
   // c1.name="virat kohli";
    //c1.runs=25000;
    //cout<<c1.name<<"  "<<c1.runs<<endl;
    Cricketer c2("manubhav", 782,88.7);
    Cricketer c3("arham", 8972,92.3);
    c2.name="raman";
    c2.print(5);
    cout<<c2.runs<<endl;
    c3.print(9);
    cout<<c3.runs<<endl;
    cout<<c2.matches()<<endl;
    cout<<c3.matches()<<endl;
}