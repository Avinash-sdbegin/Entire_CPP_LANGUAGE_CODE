#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st number : ";
    cin>>a;
    cout<<"enter 2nd number : ";
    cin>>b;
    cout<<"enter 3rd number : ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"1st is greatest";
        }else{
            cout<<"3rd is greatest";
        }
        }else{
            if(b>c){
                cout<<"2nd is greatest";
            } else{
                cout<<"3rd is greatest";
            }
        }
        return 0;
    }
