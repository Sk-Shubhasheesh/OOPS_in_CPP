#include <iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;
    // parameterized constructor
    Bike(int a, int engineSize){
        tyreSize = a;
        this->engineSize = engineSize;
        cout<<"This is default constructor"<<endl;
    }
};
int main(){
    Bike tvs(12,100); // object creation
    Bike honda(13,150);
    Bike royalEnfield(15,350);
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;;
    cout<<royalEnfield.tyreSize<<" "<<royalEnfield.engineSize<<endl;
}