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