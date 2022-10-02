#include <iostream>
#include <cstring>
using namespace std;
class Hero
{
public:
    int health;
    char level;
    char *name;

    //  Default constructor
    Hero()
    {
        cout << "this is a constructor" << endl;
        name = new char[100];
    }
    // parametrise constructor

    // Hero(int health)
    //{
    // this->health = health;
    // cout << "this:" << this << endl;
    // }

    // Hero(int health, char level)
    //{
    // this->health = health;
    // this->level = level;
    //}

    // copy constructor
    Hero(Hero &temp)
    {
        cout << "this is a copy constructor";

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->level = temp.level;
        this->health = temp.health;
    }

    // getter and setter

    int gethealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void sethealth(int h1)
    {
        health = h1;
    }
    void setlevel(char ch)
    {
        level = ch;
    }

    void setname(char name[])
    {

        strcpy(this->name, name);
    }
    void print()
    {

        cout << "name of object is:" << name << endl;
        cout << "level of object is:" << level << endl;
        cout << "health of object is:" << health << endl;
        cout << endl;
        cout << endl;
    }
};
int main()
{

    // Hero shiva(34);
    // cout << "address of shiva:" << &shiva << endl;

    // Hero *montu;
    // (*montu).sethealth(700);
    //(*montu).setlevel('t');

    // cout << "montu health is:" << montu->gethealth() << endl;

    // Hero *shiva2 = new Hero;

    // Hero temp(33, 't');

    // COPY CONSTRUCTOR----->it is a inbuilt constructor when we create an object;

    // Hero armaan(30 , 'A');
    // armaan.print();

    // Hero faiz(armaan);
    // faiz.print();

    // CONCEPT OF DEEP AND SHALLOW COPY//
    Hero hero1;
    hero1.sethealth(23);
    hero1.setlevel('S');
    char name[8] = "farmaan";
    hero1.setname(name);
    // hero1.print();

    Hero hero2(hero1);
    // hero2.print();

    hero1.name[0] = 'h';
    hero1.print();
    hero2.print();

    // copy assignment operator

    hero1 = hero2;
    hero1.print();
    hero2.print();

    return 0;
}