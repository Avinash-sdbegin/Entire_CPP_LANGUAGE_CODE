#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the percentage : ";
    cin>>n;
    if(n>=81 && n<=100 ){
        cout<<"Very good";
        }
        else if(n>=61 && n<=80){
        cout<<"good";
        }else if(n>=41 && n<=60){
            cout<<"Average";
        }else if(n<=40){
            cout<<"fail";
        }
        else{
            cout<<"unvalid percentage";
        }
        
    
return 0;
}
