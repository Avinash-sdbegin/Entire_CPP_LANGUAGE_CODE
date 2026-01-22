//vector ek aisa array hota hai jo apna size double karta hai
//  vector<int>v;     vector k anda r 2 cheez hoti hai capacity and size
//  v.push_back(10)----->eks size k array banjayega jisme 10 aagaya[]
//  size-> 0 & capacity-> 0
//  v.push_back se capacity 1 hogayi phir 10 dalkar uske size ko 1 se badha diya
//phir se v.push_back(9) || jab size aur capacity same hoti hai current array se double capacity k banega array
//[10][9]size 2 hogaya 9 dalkar  CAPACITY [0->1->2->4]
//ab size and capacity same hogayi hai [10][9][][]
// v.push_back(21)  //Aisa karna hai toh size[0->1->2->3->4 ]                                                                              ]
//[10][9][21][]v.push_back(2) karne se [10][9][21][2]
//  v.push_back(5);
//...size and capacity is same now the capacity get doubled again
//[10][9][21][2][5][][][] capacity[4->8] , size[4->5]
//ab 3 times  v.push_back kar sakte hai

///v.push_back(90)
//v.push_back(4) size[4->5->6->7]
//[10][9][21][2][5][90][4][]
//v.pop_back()-> iska matlab hota hai last element ko remove kardo
//[10][9][21][2][5][90][][] size[4->5->6->7->6]
//v.pop_back()-> iska matlab hota hai last element ko remove kardo
//[10][9][21][2][5][][][] size[4->5->6->7->6->5]
//v.push_back(10)//aisa karne se 10 value de deni hai
//[10][9][21][2][5][10][][] 
//AB AGR 5 YA 6 JYADA KAR BHI DO LEKIN CAPCITY TOH BAN GAYI HAI NA
#include<iostream>
using namespace std;
int main(){
    int *arr = new int[5];
    arr[0] = 5;
    arr[3] = 4;
    cout<<arr[0]<<" "<<arr[3];
}