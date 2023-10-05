#include <iostream>
using namespace std;
// function overloading concept
void add(int a, int b){
    cout<<a + b << endl;
}
void add(int a){
    cout<<10 + a<<endl;
}
void add(int a, double b){
    cout<< a + b <<endl;
}
int main(){
    add(1, 2); // 3
    add(5); // 15
    add(5, 5.2); // 10.2
}