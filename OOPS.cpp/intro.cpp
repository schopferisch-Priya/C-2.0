#include <iostream>
#include <cstring>
// #include "Hero.cpp"
using namespace std;

class Empty
{
    // Size of empty class has 1byte for keeping the track for the class.
};

class Hero
{
    // Properties
    int health;

public:
    char level;
    char *name;
    int timeToComplete;

    // Behaviours
    // Construtor
    Hero()
    {
        cout << "Constructor called " << endl;
    }
    // Parameterised Construtor
    Hero(int health, char level, char *name)
    {
        this->name = name;
        this->health = health;
        this->level = level;
    }
    // Copy Construtor
    Hero(Hero &temp)
    {
        // For Deep copy Case
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;


        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << endl;
        cout << "[ Name: " << this->name << " ,";
        cout << "health: " << this->health << " ,";
        cout << "level: " << this->level << " ]";
        cout << endl
             << endl;
    }

    void setLevel(char l)
    {
        level = l;
    }
    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }
    int getHealth()
    {
        return health;
    }

    void setName(char *name)
    {
        this->name = name;
    }
    char *getName()
    {
        return name;
    }

    //Destructor
    ~Hero(){
        cout<<"\nDestructor called";
    }
};

int main()
{
    /*
    // Destructor - Memory de-allocate
    //Statically- destructor called automatically 
    Hero a;

    //For Dynamically- manually destructor called
    Hero *b = new Hero();
    delete b; 
    */


    /*
    // Swallow Constructor
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[6] = "Priya";
    hero1.setName(name);
    hero1.print();

    // use default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'T';    //Shallow Copy (name passed by its address that's why name changed in hero2 also )
    hero1.print();
    hero2.print();

    //Copy Assignment
    hero2= hero1;
    hero1.print();
    hero2.print();
    */



    /*
    //Object created statically with construtor
    Hero Ramesh(60,'A');

    //Copy Construtor
    Hero S(45,'C');
    Hero R(S);
    R.print();
    */

    /*
    // Object creation - Static allocation (In Stack)
    Hero h1;
    h1.setHealth(40);
    h1.setLevel('B');
    cout << "\nLevel of Hero h1 is " << h1.level;
    cout << "\nHealth of Hero h1 is " << h1.getHealth();

    // Dynamical allocation (In Heap Memory)
    Hero *Priya = new Hero;
    cout << "\nLevel of Hero Priya is " << (*Priya).level;
    cout << "\nHealth of Hero Priya is " << (*Priya).getHealth();
    // Alternative mtd also
    Priya->setHealth(40);
    Priya->setLevel('B');
    cout << "\nLevel of Hero Priya is " << Priya->level;
    cout << "\nHealth of Hero Priya is " << Priya->getHealth();
    */

    /*
    cout<<"Size of Hero class is "<<sizeof(h1)<< endl;
    cout<<"Size of Hero class is "<<sizeof(Priya)<< endl;

    //Size of empty class has 1byte for keeping the track for the class.
     Empty e;
    cout<<"Size of Empty class is "<<sizeof(e)<< endl;
    */

    return 0;
}