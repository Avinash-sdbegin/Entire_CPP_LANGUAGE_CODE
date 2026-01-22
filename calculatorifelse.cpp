#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    char ch;
    cin>>ch;
    if(ch=='+'){
    cout<<"sum is : "<<a+b;
    }else if(ch=='-'){
    cout<<"subtract is : "<<a-b;
}else if(ch=='*'){
    cout<<"multiply is : "<<a*b;
}else if(ch=='/'){
    cout<<"divide is : "<<a/b;
}else{
cout<<"INVALID";
}
return 0;
}