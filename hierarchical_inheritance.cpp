#include <iostream>
using namespace std;
class Vehicle {
public:
	Vehicle() { 
        cout << "This is a Vehicle" <<endl;
        }
};
class Car : public Vehicle {
};

// second sub class
class Bus : public Vehicle {
};
int main()
{
    Car obj1;
	Bus obj2;    
}
