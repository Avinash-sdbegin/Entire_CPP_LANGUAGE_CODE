//INHERITANCE :--> BIKE,a scooty with geers[scooty is a two-tyre vehicle which does not have geers]
//           ek aisi class banana chahti hai jisme class ki sari properties ho
#include<iostream>
using namespace std;
class Scooty{//Parent class
    public: 
     int topspeed;
     float mileage;
     private:

     int bootspace;
};
class Bike : public Scooty{// bike extent scooty 
                   //matlab jo properties scooty mai hai vo
                   //toh mujh mw hai lekin mere main aur bhi kuch hai
                   //sare details agar use karne hai toh public likhna parega
    public:
    int gears:


};
int main(){
    Bike b1;
  b1.topspeed = 180;
  b1.mileage = 12.5;
  b1.gears = 6;
  //b1.bootspace = 12 use nhi kar sakte kyuki scooty mai mention kiya hai kli public ko hi dekhna hai
}
//.....................................................
// parent //MULTILEVEL INHERITANCE
//   ||
// child
//   ||
// grand child
//......................................
//Parent 1   parent 2 //multiple Inheritance
//  ||          ||    //2 logo ke gun ho

//[        child       ]