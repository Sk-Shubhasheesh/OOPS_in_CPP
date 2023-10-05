#include <iostream>
using namespace std;
class Vehicle {     // Base Class or Parent Class or Super Class
   public:
       int tyreSize;
       int engineSize;
       // pure virtual function - declartion in base class    
       virtual void calculateMileage() = 0;
       virtual void refuel() = 0;
};
class Bike: public Vehicle{ // Derived Class or Child Class  or Inherited Class
public:
    int handleSize;
      // defination in child class
       void calculateMileage(){
        cout<<"calculateMileage"<<endl;
       }
       void refuel(){
        cout<<"Refuel"<<endl;
       }
};
int main(){
    Bike honda;
    honda.calculateMileage();
}