#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the values of x : ";
    cin>>x;
    cout<<"Enter the values of y : ";
    cin>>y;
    if(x==0 && y==0){
        cout<<"lies at the origin";
     } else if (x==0 && y!=0){
        cout<<"lies on the y-axis";
     }else if (y==0 && x!=0){
        cout<<"lies on the x-axis";
    }else if (y>0 && x>0){
        cout<<"lies on the first Quadrant";
        }else if (y<0 && x>0){
        cout<<"Lies on the fourth quadrant";
        }else if (y>0 && x<0){
        cout<<"lies on the second quadrant";
        }else if (y<0 && x<0){
        cout<<"lies on the third quadrant";
       } else{
            cout<<"Invalid conbdition";
        }
        return 0;
}