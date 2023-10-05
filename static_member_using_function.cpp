#include <iostream>
using namespace std;
// static member through function
void print(){
    static int b = 10;
    cout<<b<<endl;
    b++;
}
int main(){
    // if we not use static keyword and try to print its always print 10 but we used static so its print 10, 11, 12
    print();
    print();
    print();
}