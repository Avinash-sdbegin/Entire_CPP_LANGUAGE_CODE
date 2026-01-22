#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    int arr[n];
    for( i=0;i<n;i++){
        cout<<"enter the elements : ";
        cin>>arr[i];
    }
    int max = arr[0];
    for( i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
}
cout<<"the maximum elements in the array : "<< max;
}