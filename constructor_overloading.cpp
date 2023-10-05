#include <iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;
    // constructor overloading
    Bike(int ts, int es): tyreSize(ts), engineSize(es){}
    Bike(int ts): tyreSize(ts), engineSize(100){}
    Bike(): tyreSize(12), engineSize(80){}

};
int main(){
    Bike tvs(12,100); // object creation
    Bike royalEnfield(15);
    Bike bajaj;
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<royalEnfield.tyreSize<<" "<<royalEnfield.engineSize<<endl;
    cout<<bajaj.tyreSize<<" "<<royalEnfield.engineSize<<endl;
}