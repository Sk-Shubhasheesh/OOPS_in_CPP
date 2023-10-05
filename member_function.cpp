#include<iostream>
using namespace std;
class Calculator{
 public:
    int a; // data member
    int b; // data member
    void add(){ // member functions - which can easily access data member
       cout<<"Addition: "<<a+b<<endl;;
    }
    void subtract(){ // member functions
       cout<<"Substraction: "<<a-b<<endl;
    }
};
int main(){
    Calculator calci;
    calci.a = 10;
    calci.b = 7;
    calci.add();
    calci.subtract();
}
