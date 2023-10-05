#include <iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;
    Bike(int a, int engineSize){
        tyreSize = a;
        this->engineSize = engineSize;
    }
    // creating destructor
    ~Bike(){
        cout<<"Calling Destructor"<<endl;
    }
};
int main(){
    Bike tvs(12,100); // object creation
    Bike honda(13,150);
    Bike royalEnfield(15,350);
    bool flag = true;
    if(flag == true){
        Bike bmw(17, 10000);
        cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;
    }
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;;
    cout<<royalEnfield.tyreSize<<" "<<royalEnfield.engineSize<<endl;
}