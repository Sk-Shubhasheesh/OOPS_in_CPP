#include <iostream>
using namespace std;
class Vehicle {     // Base Class or Parent Class or Super Class
   public:
       int tyreSize;
       int engineSize;
       int lights;
       string companyName; 
       
       // function
       void showCompany(){
        cout<<"Hello, i am showCompany function of Vechicle class"<<endl;
       }
};

class Bike: public Vehicle{ // Derived Class or Child Class  or Inherited Class
public:
    int handleSize;
    // function overriding
       void showCompany(){
        cout<<"Hello, i am showCompany function of Bike class"<<endl;
       }
};
int main(){
    Bike honda;
    honda.showCompany(); // Hello, i am showCompany function of Bike class

    // accessing show function of Vechicle class in Bike class through scope resolution operator
    honda.Vehicle::showCompany(); // Hello, i am showCompany function of Vechicle class  
}