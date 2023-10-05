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