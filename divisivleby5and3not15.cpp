#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    if((n%5==0 || n%3==0) &&( n%15!=0)){
    cout<<"divisible by 5 or 3 not by 15";
    }else {
        cout<<"not satisfactory";
    }
    

    return 0;
   

    
}