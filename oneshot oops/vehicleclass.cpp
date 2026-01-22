
#include<iostream>
using namespace std;
class Scooty{//Parent class
    public: 
     int topspeed;
     float mileage;
     string fuel;
     private:

     int bootspace;
};
class Car : public Vehicle{//child class / derived class
    public:
    bool sunroof;
}
class Bike : public Vehicle{
    public:
    int gears:


};
class Truck : public Vehicle{
    };
int main(){
    Bike b1;
  b1.topspeed = 180;
  b1.mileage = 12.5;
  b1.gears = 6;
  //b1.bootspace = 12 use nhi kar sakte kyuki scooty mai mention kiya hai kli public ko hi dekhna hai