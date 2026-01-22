#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int price;
    int seats;
    string type;
    // Agar koi contructor nnbi create toh bhi ek default constructor maujud hota hai
    Car(){
         //Default constructor available ehta hai
    }
    //parametrized constructor jisko hamne banaaya hai hamne parameter se
    Car(string n, int p, int s, string t){
        name = n;
       price = p;
        seats = s;
       type = t;
    }
    
};
void print(Car c){
  cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}

// to chanhge the variable
void change(Car& c){
c.name = "Audi A8";
}
int main(){
    // all these are
    // the order must be same as those of the declared constructor
    Car c1("Honda City",15000,5,"sedan");
    //c1.name ="Honda City";
    //c1.price = 15000;
    //c1.seats = 5;
    //c1.type = "sedan";
    // the order must be same as those of the declared constructor
    Car c2("Maruti swift",7000,4, " Hatchback");
    //c2.name ="Maruti swift";
    //c2.price = 7000;
    //c2.seats = 4;
    //c2.type = " Hatchback";
    // the order must be same as those of the declared constructor
    Car c3("Toyota Fortuner",4000,5,"SUV");
    //c3.name ="Toyota Fortuner";
    //c3.price = 4000;
    //c3.seats = 5;
    //c3.type = "SUV";
    change(c1);// pehle change kiya fir print kara
    print(c1);
    
    print(c2);
    change(c3);
    print(c3);
}
