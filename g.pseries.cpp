#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int a = 4;
   
   for(int i=1; i<=n ;i++){
    //for(int i=4;i<=(3*n+1);i=i+3){
       
        cout<<a<<"  ";
        a = a*3;
    }
    
    return 0;
    }
