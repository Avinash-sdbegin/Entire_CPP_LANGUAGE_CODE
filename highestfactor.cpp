#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1 ;i<=n ;i++){
    if(n%(n-i)==0){
        cout<<(n-i);
        break;
    }
    
    }


return 0;
}