#include<iostream>
using namespace std;
int main(){
int a;
cin>>a;
int c=a/100;
cout<<"the number of 100 rupees notes are :"<<c<<endl;
 c=a%100;
 int d=c/50;
 cout<<"the number of 50 rupees notes are :"<<d<<endl;
 d=c%50;

int e=d/20;
 cout<<"the number of 20 rupees notes are :"<<e<<endl;
 e=d%20;
int f=e/1;
 cout<<"the number of 1 rupees notes are :"<<f<<endl;
 f=e%50;


return 0;
}