#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    char level;

    int gethealth()
    {
        return health;
    }
    void sethealth(int h1)
    {
        health = h1;
    }
};
int main()
{

    Hero *Devesh;
    cout << "health of devesh is" << Devesh->gethealth();
    Devesh->sethealth(67);
    cout << "health of devesh is" << Devesh->gethealth();
    return 0;
}