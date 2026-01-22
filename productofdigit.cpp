#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  cout<<"enter the number : ";
  cin>>n;
  int product=1;
  while(n!=0){
   
    product =product*(n%10);
    
    n=n/10;
    //product = product*(n%10);
   
  }
 
  cout<<product;
  
}
