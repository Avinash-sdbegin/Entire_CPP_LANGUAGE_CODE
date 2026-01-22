#include<iostream>
using namespace std;
int main(){
    int n,sum = 0;
    cout<<"enter the numb. of eleemnets : ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        cout<<"the sum of the elements is: ";
        sum = sum+ arr[i];
    }
    cout<<sum<<endl;
}