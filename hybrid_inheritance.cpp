// C++ program for Hybrid Inheritance

#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// base class
class Fare {
public:
	Fare() { cout << "Fare of Vehicle\n"; }
};

class Car : public Vehicle {
};
class Bus : public Vehicle, public Fare {
};
int main()
{
	Bus obj2;
}
