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