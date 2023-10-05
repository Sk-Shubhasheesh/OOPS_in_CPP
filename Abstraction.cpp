// Using header files


// #include <iostream>
// #include <math.h>
// using namespace std ;
// int main (){
//   int a = 5 ;
//   int power = 2 ;
//   int result = pow ( a , power ) ;// pow(n,power) is the power function to calculate power
//   cout << " Square of a = " << result <<endl ;
// }



// using Classes
#include<iostream>
using namespace std;
class Sum{
    private: int x,y,z; // private variable we can acces it only inside class
    public:
    // creating method
    void add(){
        cout<<"Enter two numbers"<<endl;
        cin>>x>>y;
        z = x + y;
        cout<<"Sum of two number is: "<<z<<endl;   
    }
};
int main(){
    Sum sm;
    sm.add();
    return 0;
}
