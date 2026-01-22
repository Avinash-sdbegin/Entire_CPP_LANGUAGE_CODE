#include<iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout<<"enter values of a : ";
    cin>>a;
    char op;
    cin>>op;
    cout<<"enter values of b : ";
    cin>>b;
    
    switch(op){
        case '+':
        
        cout<<a+b<<endl;
        break;
        case '-':
        
        cout<<a-b<<endl;
        break;
        case '*':
        
        cout<<a*b<<endl;
        break;
        case '/':
        
        cout<<a/b<<endl;
        break;
        default: 
        cout<<"Invalid operator";
    }

}

    
    

