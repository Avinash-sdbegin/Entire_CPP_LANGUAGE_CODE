// &x gives address of x
//*p = &x; p give sthe address of x;
//*p gives the value which is stores in x;
///#include<iostream>
///using namespace std;

//int main(){
 //   int x =4;
   // int* p =&x;
   // cout<<x<<endl;
   // cout<<&x<<endl;//Address
  //  cout<<p<<endl;//Address
   // cout<<*p<<endl;
   // *p =1200;
   //  cout<<*p<<endl;
   ///  cout<<x<<endl;
    // cout<<

//}
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
};
void change(Cricketer* c){
   //a->b k matlab hota hai (*a).b ki a mut be a pointer
   
    c->avg = 68.9;//(*c).avg = 77.2;[iska matlab yahi hota hai]
}
int main(){
    //Cricketer c1;
   // c1.name="virat kohli";
    //c1.runs=25000;
    //cout<<c1.name<<"  "<<c1.runs<<endl;
    Cricketer c2("manubhav", 782,88.7);
    Cricketer c3("arham", 8972,92.3);
    Cricketer*p1 = &c2;
    Cricketer*q1 = &c3;
    cout<<c2.runs<<endl;
    change(&c2);
    cout<<c2.runs<<endl;
    int* p = new int(5245);//dynamic way mai memory store karaya hai
    cout<<*p<<endl;
    //cout<<(*p1).runs<<endl;//c2.runs
    //cout<<(*q1).runs<<endl;//c3.runs
//(*p1).runs = 25000;//can change it
  //  cout<<(*p1).runs<<endl;//c2.runs
    
}