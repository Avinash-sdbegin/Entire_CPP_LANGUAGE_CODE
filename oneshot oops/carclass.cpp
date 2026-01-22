#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int price;
    int seats;
    string type;
    
};
int main(){
    Car c1;
    c1.name ="Honda City";
    c1.price = 15000;
    c1.seats = 5;
    c1.type = "sedan";

    Car c2;
    c2.name ="Maruti swift";
    c2.price = 7000;
    c2.seats = 4;
    c2.type = " Hatchback";
    
    Car c3;
    c3.name ="Toyota Fortuner";
    c3.price = 4000;
    c3.seats = 5;
    c3.type = "SUV";
    cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;
    cout<<c2.name<<" "<<c2.price<<" "<<c2.seats<<" "<<c2.type<<endl;
    cout<<c3.name<<" "<<c3.price<<" "<<c3.seats<<" "<<c3.type<<endl;
}
