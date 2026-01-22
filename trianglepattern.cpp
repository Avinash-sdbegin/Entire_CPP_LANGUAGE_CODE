//#include<iostream>
//using namespace std;
//int main(){
//    int n;
 //   cin>>n;
 //   for(int i=1;i<=n;i++){
  //      for(int j=1;j<=i;j++){
    //        cout<<'*';
   //     }
   //     cout<<endl;
  //  }
  // return 0;
//}
#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	char a,b,ab;
	for(int i=1;i<=t;i++){
	int n,m;
    cout<< "number : ";
	cin>>n  >>m;
	
	char s[n];
	char t[m];
	
//if(n==m)
	//cout<<"yes\n";
	//else
//cout<<"no\n";
for(int i=0;i<=n-1;i++){
    
char s[i];
cin>>s[i];
if(s[i]==a){
s[i]=ab;
n++;
}
}
for(int j=0;j<=m-1;j++){
char t[j];
cin>>t[j];
if(t[j]==a){
t[j]=ab;
m++;
}
}

if (n!=m){
    cout<<"no\n";
}else{
    cout<<"yes\n";
}
}
return 0;
}
