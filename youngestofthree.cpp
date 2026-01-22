#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the age of RAM : ";
    cin>>a;
    cout<<"enter the age of SHYAM : ";
    cin>>b;
    cout<<"enter the age of AJAY : ";
    cin>>c;
    if(a<b){
        if(a<c){
            cout<<" RAM IS YOUNGEST";
        }else{
            cout<<"AJAY IS YOUNGEST";
        }
    }else{
        if(b<c){
            cout<<"shyam is youngest";
        }
        else{
            cout<<"AJAY IS YOUNGEST";
        }
    }
    
    

    



    return 0;
   

    
}