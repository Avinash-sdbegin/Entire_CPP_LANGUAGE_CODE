#include<iostream>
using namespace std;
//int main(){
   // int *arr = new int[5];//ye ek dynamic array hai
   // arr[0] = 5;
    //arr[3] = 4;
   // cout<<arr[0]<<" "<<arr[3];
   // return 0;
//}

class Vector{
    public:
   int size;
   int capacity;
   int* arr;

//isko initialize karte hai with the 
//help of default constructor
Vector(){
  size = 0;
  capacity = 0;
  arr = new int[1];
}
//  4 FUNCTIONS ARE THERE
//FIRST ONE
void add(int ele){
    if(size==capacity){
       capacity *= 2;//capacity double kiya
       int* arr2 = new int[capacity];//new array banaya
       for(int i=0;i<size;i++){
        arr2[i] = arr[i];
       }
       arr = arr2;
    }
    arr[size++] = ele;
        
}
//SECOND ONE
void print(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
//THIRD ONE
int get(int idx){
    if(size==0){
        cout<<"Array is Empty"<<endl;
        return -1;
    }
    if(idx>=size){
        cout<<"Invalid Index"<<endl;
        return -1;
    }
    return arr[idx];
}
//FOURTH ONE
void remove(){
    if(size==0){
        cout<<"Invalid Index"<<endl;
        
        
    }
    size--;
}
};
int main(){
  Vector v;
  cout<<"v.size "<<v.size<<" "<<" v.capacity "<<v.capacity<<endl;//0 1
  v.add(10);
  v.print();// 10 
  cout<<"v.size "<<v.size<<" "<<" v.capacity "<<v.capacity<<endl;// 1 1
  v.add(15);
  v.print();// 10 15
  cout<<"v.size "<<v.size<<" "<<" v.capacity "<<v.capacity<<endl;// 2  2
  v.add(7);
  v.print();// 10 15 7
  cout<<"v.size "<<v.size<<" "<<" v.capacity "<<v.capacity<<endl;// 3  4
  cout<<v.get(10)<<endl;
  cout<<v.get(3)<<endl;
  cout<<v.get(0)<<endl;
  v.print();
  v.remove();
  v.print();
  return 0;
}