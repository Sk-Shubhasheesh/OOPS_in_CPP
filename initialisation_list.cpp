#include <iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;
    Bike(int ts, int es): tyreSize(ts), engineSize(es){}
};
int main(){
    Bike tvs(12,100); // object creation
    Bike royalEnfield(15,350); 
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<royalEnfield.tyreSize<<" "<<royalEnfield.engineSize<<endl;
}