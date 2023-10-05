# OOPS_in_CPP
# OOPS in C++
## What is OOP ?
Object oriented progrmming is a methodology or paradigm to design a program using classes and objects.There are four important pillers of OOP that is :
1. Data Abstraction
2. Data Encapsulation
3. Inheritance
4. Polymorphism

## What are classes ?
Class is a user-defined datatype. And we can also say that Class is nothing but a blueprint/template/model/design for object. 
```c++
class Player {
    int health;
    int score;
}
```
## What are Objects ?
Object is an instance of the class.
```c++
class Player {
    int health;
    int score;
}
Player harsh; // object
harsh.score
```
## Classes and Objects example
```c++
#include<iostream>
using namespace std;
class Player{
    public:
    // data members -  Variable inside class is called Data Members
    int score;
    int health;
};
int main(){
    Player amit; // creation of object
    amit.score = 90;
    amit.health = 100;
    cout<<amit.health<<endl;
    cout<<amit.score<<endl; 
    // creating another object of class
    Player Shubhasheesh; // creation of object
    Shubhasheesh.score = 100;
    Shubhasheesh.health = 20;
    cout<<Shubhasheesh.health<<endl;
    cout<<Shubhasheesh.score<<endl; 
}
```
## Why Classes ?
Classes enables us to apply OOP concepts.


# Data Abstraction
* Hiding internal implementation and just highlight the set of services is the concept of Abstraction.
  Ex: Bank ATM GUI Screen, Bank pepole are highlight the set of services what they are offering without highlighting internal implementation.
  ### Ways of Achieving Data Abstraction 
  There are two ways of achieving data abstraction in C++:
   1. **Abstraction In Header Files**\
    One more type of abstraction in C++ can be header files. For example, consider the pow() method present in math.h header file. Whenever we need to calculate the power of a number, we simply call the function pow() present in the math.h header file and pass the numbers as arguments without knowing the underlying algorithm according to which the function is actually calculating the power of numbers.
      ```c++
      #include <iostream>
      #include <math.h>
      using namespace std ;
      int main (){
        int a = 5 ;
        int power = 2 ;
        int result = pow ( a , power ) ;// pow(n,power) is the power function to calculate power
        cout << " Square of a = " << result <<endl ;
      }
   
      ```
   2. **Abstraction Using Classes**\
    * An abstraction can be achieved using classes. A class is used to group all the data members and member functions into a single unit by using the access specifiers. A class has the responsibility to determine which data member is to be visible outside and which is not.
    * The core principle of implementing abstraction in C++ is permission labels that determine how the data is accessed in a program. To impose restrictions on data members of a class, we can use permission labels as follows:
         * **Public** - Data members and member functions declared as public can be accessed from anywhere the class is visible.
        * **Private** - Data members and member functions declared as private can only be accessed within the class. Outside of the class, they are inaccessible.
        * **Protected** – Data members and member functions can be accessed by their friend class and derived class only.
    ```c++
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
  ```


## Member Function
Member functions are operators and functions that are declared as members of a class.
```C++
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
```
## Getters and setters
Getters and setters in C++ are as the name suggests functions that are created to set values and to fetch i.e. get values.
```c++
#include<iostream>
using namespace std;
class Player{
private:
    int score;
    int health;
public: 
     // Setter
     void setScore(int s){
        score = s;
     }
     void setHealth(int h){
        health = h;
     }
     // getter
     int getScore(){
        return score;
     }
     int getHealth(){
        return health;
     }
};
int main(){
    Player virat;
    // set the value
    virat.setScore(181);
    virat.setHealth(100);
    // get the value
    cout<<"Player score is: "<<virat.getScore()<<endl;
    cout<<"Player Health is: "<<virat.getHealth()<<endl;
}
```
# **Let's play with Classes & Objects**
 ### Passing class objects to function
 ```c++
 // Passing class objects to function
#include<iostream>
using namespace std;
class Player {
 private:
    int health;
    int age;
    int score;
    bool alive;
 public:
    // getter
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int isAlive(){
        return alive;
    }
    // setter
    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score =  score;
    }
    void setisAlive(bool alive){
        this->alive = alive;
    }      
};

// creating a function where we pass class object as parameter
int addScore(Player a, Player b){
    return a.getScore() + b.getScore();
}
// creating another function which return the class
Player getMaxScorePlayer(Player a, Player b){
    if(a.getScore() > b.getScore()){
        return a;
    } else{
        return b;
    }
}
int main(){
    Player rohit; // object creation
    rohit.setHealth(90);
    rohit.setAge(32);
    rohit.setScore(264);
    rohit.setisAlive(true);
    
    Player sky; // object creation
    sky.setHealth(100);
    sky.setAge(33);
    sky.setScore(113);
    sky.setisAlive(true);
    
    int total_score = addScore(rohit, sky); // passing object as parameter
    cout<< "Score of rohit & sky are: "<<total_score<<endl;
   
   /*getMaxScorePlayer function return Player to us we can not directy print it because it is object, so we can 
    store it to a player object  */
    Player rahul = getMaxScorePlayer(rohit, sky);
    cout<<rahul.getScore()<<endl;
} 
 ```

 ### Static Allocation vs Dynamic Allocation
 * In static memory allocation, size and location where variable will be stored is fixed during compile time. Stack memory is used for static allocation.
 * Dynamic memory allocation allows you to define memory requirement during execution of the program. Dynamic memory allocation uses special type of memory called as heap memory. In dynamic memory allocation, new keyword is used to allocate memory and delete keyword is used to deallocate memory. Pointer is also used.
```c++
#include <iostream>
using namespace std;
int main() {
    int n = 19;
    // Allocate memory.
    int * arr = new int[n];
    cout << sizeof(arr) << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Free up space.
    delete[] arr;
    return 0;
}
```
### Class in Class - Nested Class
```C++
#include <iostream>
using namespace std;
class OuterClass {
public:
    // Public member function of the OuterClass
    void displayOuterValue(int value) {
        outerValue = value;
        cout << "OuterClass value: " << outerValue << std::endl;
    }
    // Nested InnerClass
    class InnerClass {
    public:
        // Public member function of the InnerClass
        void displayInnerValue(int value) {
            innerValue = value;
            cout << "InnerClass value: " << innerValue << std::endl;
        }
    private:
        int innerValue;
    };
private:
    int outerValue;
};
int main() {
    // Create an instance of OuterClass
    OuterClass outer;

    // Create an instance of InnerClass using OuterClass's scope
    OuterClass::InnerClass inner;

    // Call member functions of both classes
    outer.displayOuterValue(42);
    inner.displayInnerValue(10);
    return 0;
}
```
# **Constructor**
* Constructor in C++ is a special method that is invoked automatically at the time of object creation. It is used to initialize the data members of new objects generally. 
* Constructor is a member function of a class, whose name is same as the class name.
* Constructor should be declared in the public section of the Class.
* Constructor do not return value, hence they do not have a return type.
* If we have not defined a constructor in our class, then the C++ compiler will automatically create a default constructor with an empty code and no parameters.
 ## Types of Constructor
  ### 1. Default constructor
* Default constructors that do not pass or accept any parameters.
```C++
#include <iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    // default constructor
    Bike (){
        cout<<"This is default constructor"<<endl;
    }
};
int main(){
    Bike tvs; // object creation
}
``` 
### 2. Parameterized constructor
* We may be required to initialize the data elements of different objects with different values. C++ enables us to accomplish this by the use of parameterized constructors that can take parameters when the objects are created.
```C++
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
```
### 3. Copy constructor
* The copy constructor in c++ is a constructor that creates an object by initialising it with a previously created object of the same class.
* To overcome shalllow copy problem we used copy constructor and copy construcotr create a deep copy.
```c++
#include <iostream>
using namespace std;
// declare a class
class Wall {
  private:
    double length;
    double height;

  public:
    // initialize variables with parameterized constructor
    Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }
    // copy constructor with a Wall object as parameter
    // copies data of the obj parameter
    Wall(Wall &obj) {
      length = obj.length;
      height = obj.height;
    }
    double calculateArea() {
      return length * height;
    }
};
int main() {
  // create an object of Wall class
  Wall wall1(10.5, 8.6);

  // copy contents of wall1 to wall2
  Wall wall2 = wall1;

  // print areas of wall1 and wall2
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}
```
## Constructor overloading
* This is where more than one constructor function is defined in a class. Overloaded constructors have the same name as the class but with a different number of arguments.
```C++
#include <iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;
    // constructor overloading
    Bike(int ts, int es): tyreSize(ts), engineSize(es){}
    Bike(int ts): tyreSize(ts), engineSize(100){}
    Bike(): tyreSize(12), engineSize(80){}

};
int main(){
    Bike tvs(12,100); // object creation
    Bike royalEnfield(15);
    Bike bajaj;
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<royalEnfield.tyreSize<<" "<<royalEnfield.engineSize<<endl;
    cout<<bajaj.tyreSize<<" "<<royalEnfield.engineSize<<endl;
}
```

# **Destructor**
* A destructor is also a special member function like a constructor. Destructor destroys the class objects created by the constructor. 
* Destructor has the same name as their class name preceded by a tilde (~) symbol.
* It is not possible to define more than one destructor. 
* Destructor neither requires any argument nor returns any value. It is automatically called when an object goes out of scope.
```c++
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
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
    cout<<royalEnfield.tyreSize<<" "<<royalEnfield.engineSize<<endl;
}
``` 
# *Static Members* 
* The static keyword is used with a variable to make the memory of the variable static once a static variable is declared its memory can't changed.
```C++
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
```
```C++
// static memeber through Class
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
```

# Initialisation list
* Initializer List is used in initializing the data members of a class. The list of members to be initialized is indicated with constructor as a comma-separated list followed by a colon.
```c++
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
```
# Polymorphism
* The term "Polymorphism" is the combination of "poly" + "morphs" which means many forms. It is a greek word.
* There are two types of polymorphism in C++:
## 1. Compile time polymorphism
* A function is called during program compilation in compile-time polymorphism. In this type of polymorphism, the decision of which function to invoke is taken at compile time. This type of polymorphism is known as early binding or static binding. This can be achieved via function overloading and operator overloading.
### Function Overloading
* Creating functions with same name but different parameters is not but called as function overloading.
```c++
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
```
### Operator Overloading
* We can easily apply operators on primitive data types (like integers, characters, and floating point numbers) but not on user-defined data types like Complex numbers, fractions, etc. We can also make operators work for user-defined data types by explicitly defining the operation performed by a given operator on a given data type, known as Operator overloading in C++.
```c++
#include <iostream>
using namespace std;
class ComplexNumber{
    public:
        int imaginary;
        int real;
    
    ComplexNumber operator +(ComplexNumber &c1){
        ComplexNumber c3;
        c3.imaginary = c1.imaginary + this->imaginary;
        c3.real = c1.real + this->real;
        return c3; 
    }
     ComplexNumber operator -(ComplexNumber &c1){
        ComplexNumber c3;
        c3.imaginary = c1.imaginary - this->imaginary;
        c3.real = c1.real - this->real;
        return c3; 
    }
};
int main(){
    ComplexNumber a1, a2;
    a1.imaginary = 10;
    a1.real = 5;

    a2.imaginary = 2;
    a2.real = 3;

    ComplexNumber a3 = a1 + a2;
    cout<<"real : "<<a3.real<<" "<<"imaginary : "<<a3.imaginary<<endl;

    ComplexNumber a4 = a1 - a2;
    cout<<"real : "<<a4.real<<" "<<"imaginary : "<<a4.imaginary<<endl;
}
```
## 2. Run time polymorphism
* Runtime polymorphism occurs when functions are resolved at runtime rather than compile time. It is achieved by method overriding which is also known as dynamic binding or late binding.

### Function overriding
* When a function of base class is redefined in it's derived class, it's called function overriding.
* In other words, sometimes child class may not satisfy with parent class implementation, then child calss is allowed to redefine that method based on its requirement. This process is called function overriding.  
```c++
#include <iostream>
using namespace std;
class Vehicle {     // Base Class or Parent Class or Super Class
   public:
       int tyreSize;
       int engineSize;
       int lights;
       string companyName; 
       
       // function
       void showCompany(){
        cout<<"Hello, i am showCompany function of Vechicle class"<<endl;
       }
};

class Bike: public Vehicle{ // Derived Class or Child Class  or Inherited Class
public:
    int handleSize;
    // function overriding
       void showCompany(){
        cout<<"Hello, i am showCompany function of Bike class"<<endl;
       }
};
int main(){
    Bike honda;
    honda.showCompany(); // Hello, i am showCompany function of Bike class

    // accessing show function of Vechicle class in Bike class through scope resolution operator
    honda.Vehicle::showCompany(); // Hello, i am showCompany function of Vechicle class  
}
```
### Operator overriding
* We can easily apply operators on primitive data types (like integers, characters, and floating point numbers) but not on user-defined data types like Complex numbers, fractions, etc. We can also make operators work for user-defined data types by explicitly defining the operation performed by a given operator on a given data type, known as Operator overloading in C++.
```c++
#include <iostream>
using namespace std;
class ComplexNumber{
    public:
        int imaginary;
        int real;
    
    ComplexNumber operator +(ComplexNumber &c1){
        ComplexNumber c3;
        c3.imaginary = c1.imaginary + this->imaginary;
        c3.real = c1.real + this->real;
        return c3; 
    }
     ComplexNumber operator -(ComplexNumber &c1){
        ComplexNumber c3;
        c3.imaginary = c1.imaginary - this->imaginary;
        c3.real = c1.real - this->real;
        return c3; 
    }
};

int main(){
    ComplexNumber a1, a2;
    a1.imaginary = 10;
    a1.real = 5;

    a2.imaginary = 2;
    a2.real = 3;

    ComplexNumber a3 = a1 + a2;
    cout<<"real : "<<a3.real<<" "<<"imaginary : "<<a3.imaginary<<endl;

    ComplexNumber a4 = a1 - a2;
    cout<<"real : "<<a4.real<<" "<<"imaginary : "<<a4.imaginary<<endl;
}
```



## Virtual Function
* A virtual function is declared by keyword virtual. The return type of virtual function may be int, float, void.
* A virtual function is a member function in the base class. We can redefine it in a derived class. It is part of run time polymorphism. The declaration of the virtual function must be in the base class by using the keyword virtual. A virtual function is not static. 
* It is necessary to use a single pointer to refer to all the different classes’ objects. This is because we will have to create a pointer to the base class that refers to all the derived objects.
* But, when the base class pointer contains the derived class address, the object always executes the base class function. For resolving this problem, we use the virtual function.
* When we declare a virtual function, the compiler determines which function to invoke at runtime.
```c++
#include <iostream>
using namespace std;
class Vehicle {     // Base Class or Parent Class or Super Class
   public:
       int tyreSize;
       int engineSize;
       int lights;
       string companyName; 
       
       // function
       virtual void show(){
        cout<<"This is Vehicle show"<<endl;
       }
};

class Bike: public Vehicle{ // Derived Class or Child Class  or Inherited Class
public:
    int handleSize;
       void show(){
        cout<<"This is Bike show"<<endl;
       }
};
int main(){
    Vehicle *car; //Base class pointer 
    Bike honda; //derived class object creation
    car = &honda;
    //virtual function, binded at runtime (Runtime polymorphism) 
    car->show(); // This is Bike show
}
```

## Pure Virtual Function
* When the function has no definition, we call such functions as “Do-nothing function or Pure virtual function”. The declaration of this function happens in the base class with no definition.
* In other word, the function which declartion is done in base class and defination in child class is called Pure virtual function. 
```c++
#include <iostream>
using namespace std;
class Vehicle {
   public:
       int tyreSize;
       int engineSize;
       // pure virtual function - declartion in base class    
       virtual void calculateMileage() = 0;
       virtual void refuel() = 0;
};
class Bike: public Vehicle{
public:
    int handleSize;
      // defination in child class
       void calculateMileage(){
        cout<<"calculateMileage"<<endl;
       }
       void refuel(){
        cout<<"Refuel"<<endl;
       }
};
int main(){
    Bike honda;
    honda.calculateMileage();
}
```
## Abstract Class
* A class that contains a pure virtual function is known as an abstract class. We cannot create objects of an abstract class.
## Pure Abstract Class
* Pure Abstract Class is just like an interface. Only pure virtual functions can be defined here. 

# Inheritance
* It allows classes to be related to each other so that a child class can inherit from a parent class and access the same methods, functions, and variables that the parent class has.
* In C++, the class which inherits the members of another class is called derived class and the class whose members are inherited is called base class. 
## Types of Inheritance
### 1. Single Inheritance
* Single Inheritance in C++ programming language is defined as a type of Inheritance in which a derived class is generally inherited from one and only base class.
```C++
#include <iostream>
using namespace std;
class Vehicle {     // Base Class or Parent Class or Super Class
   public:
       int tyreSize;
       int engineSize;
       int lights;
       string companyName; 
       
       // function
       void showCompany(){
        cout<<companyName<<endl;
       }
};

class Bike: public Vehicle{ // Derived Class or Child Class  or Inherited Class
public:
    int handleSize;
};
int main(){
    Bike honda;
    honda.handleSize = 5;
    honda.tyreSize = 10;
    honda.engineSize = 500;
    honda.companyName = "Honda";
    cout<<honda.tyreSize<<endl; // 10
    honda.showCompany(); // Honda
}
```
### 2. Multi-level Inheritance
* When one class inherits another class which is further inherited by another class, it is known as multi level inheritance in C++. 
* Inheritance is transitive so the last derived class acquires all the members of all its base classes.
* In other word, the concept of inheriting members from multiple classes to a single class is known as multi level inheritance.
```c++
#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// first sub_class derived from class vehicle
class fourWheeler : public Vehicle {
public:
	fourWheeler()
	{
		cout << "Objects with 4 wheels are vehicles\n";
	}
};
// sub class derived from the derived base class fourWheeler
class Car : public fourWheeler {
public:
	Car() { cout << "Car has 4 Wheels\n"; }
};

// main function
int main()
{
	Car obj;
	return 0;
}
```
### 3. Multiple Inheritance
* Multiple parents and single child is the concept of multiple inheritance.

```c++
#include <iostream>
using namespace std;
class A {
    protected:
    int a;
    public:
    void get_a(int n){
        a = n;
    }
};
class B {
    protected:
    int b;
    public:
    void get_b(int n){
        b = n;
    }
};
class C : public A,public B {
   public:
    void display() {
        cout << "The value of a is : " <<a<<endl;
        cout << "The value of b is : " <<b<<endl;
        cout<<"The addition of a and b is : "<<a+b;
    }
};
int main(){
   C c;
   c.get_a(120);
   c.get_b(80);
   c.display();
}
```
### 4. Hierarchical Inheritance
* One parent but multiple child class and all child class are at same level.
```c++
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
```
### 5. Hybrid (Virtual) Inheritance
* Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance.
```c++
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
```
# Friend Function
* Friend functions of the class are granted permission to access private and protected members of the class in C++. They are defined globally outside the class scope. Friend functions are not member functions of the class. 
* The friend function is declared using the friend keyword inside the body of the class.
```c++
#include <iostream>
using namespace std;
class A
{
   int x=4; // private member
   friend class B; //friend class
};
class B
{
   public:
   void display (A &a)
     {
        cout<<"value of x is:" <<a.x<<endl;
     }
};
int main ()
{
   A a;
   B b;
   b. display (a);
   return 0;
}
```
