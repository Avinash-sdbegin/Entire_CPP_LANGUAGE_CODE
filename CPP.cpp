
#include <bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int k;
    cin>>k;
     int p =__gcd(k, 100);
    cout<<(100/p)<<endl;
   }
   return 0;
}