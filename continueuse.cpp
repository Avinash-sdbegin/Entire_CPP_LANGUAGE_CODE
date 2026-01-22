#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number : ";
cin>>n;

   // i++;

for(int i=0;i<=n;i++){
    if(i%2!=0){
       continue;
    }
    cout<<i<<endl;
     
}
return 0; 
}