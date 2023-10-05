#include <iostream>
using namespace std;
class Vehicle {     // Base Class or Parent Class or Super Class
   public:
       int tyreSize;
       int engineSize;
       int lights;
       string companyName; 
       
       // function
       virtual void show(){
        cout<<"This is Vehicle show"<<endl;
       }
};

class Bike: public Vehicle{ // Derived Class or Child Class  or Inherited Class
public:
    int handleSize;
       void show(){
        cout<<"This is Bike show"<<endl;
       }
};
int main(){
    Vehicle *car; //Base class pointer 
    Bike honda; //derived class object creation
    car = &honda;
    //virtual function, binded at runtime (Runtime polymorphism) 
    car->show(); // This is Bike show
}