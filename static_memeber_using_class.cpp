#include <iostream>
using namespace std;
class Bike{
public:
    static int noOfBikes; // this belongs to the class not object
    int tyreSize;
    int engineSize;
    Bike(int a, int engineSize){
        tyreSize = a;
        this->engineSize = engineSize;
    }
    // static function
    static void increaseNoOfBikes(){
        noOfBikes++;
    }
};
int Bike::noOfBikes = 10;
int main(){
    Bike tvs(12,100); // object creation
    Bike royalEnfield(15,350);
    tvs.increaseNoOfBikes();
    cout<<tvs.noOfBikes<<endl; // 11
    cout<<royalEnfield.noOfBikes<<endl; // 11

    royalEnfield.increaseNoOfBikes();
    cout<<tvs.noOfBikes<<endl; // 12
    cout<<royalEnfield.noOfBikes<<endl; // 12

    // calling through class name
    Bike::increaseNoOfBikes();
     cout<<tvs.noOfBikes<<endl; // 13
    cout<<royalEnfield.noOfBikes<<endl; // 13
}