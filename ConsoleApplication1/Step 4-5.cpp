

#include <iostream>
using namespace std;

class Player
{
public:
    int health;
    float speed;
    string name;
    Player() 
    {
        health = 100;
        speed = 5.0f;
        name = "Neria";
    }
};

int main()
{
    Player Player1;
    Player *Pointer;

    Pointer = &Player1;

    Pointer->health = 45;

    cout << Player1.health;
}
