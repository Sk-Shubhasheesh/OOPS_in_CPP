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
        cout<<companyName<<endl;
       }
};

class Bike: public Vehicle{ // Derived Class or Child Class  or Inherited Class
public:
    int handleSize;
};
int main(){
    Bike honda;
    honda.handleSize = 5;
    honda.tyreSize = 10;
    honda.engineSize = 500;
    honda.companyName = "Honda";
    cout<<honda.tyreSize<<endl; // 10
    honda.showCompany(); // Honda
}