#include<iostream>
using namespace std;
void change(int x){
    x = 8;
}
int main(){
    int x=3;
    cout<<x<<endl;
    change(x);
    cout<<x<<endl;
}
//pass by value hua hai is liya vakue change nhi hui.[V.V.I]