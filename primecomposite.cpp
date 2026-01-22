#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int a = 1;
    for(int i=2 ; i<n ; i++){
        if(n%i==0){
          a=0;
            break;   
        }
        
    }
  
    if(a==1){
        cout<<"prime number ";
        
    }else{
        cout<<"composite number";
    }
    return 0;
}