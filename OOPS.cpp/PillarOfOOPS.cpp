#include <iostream>
using namespace std;

// Encapsulation
class Student
{
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};

// Inheritence
class Human
{
protected:
    int height;

public:
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }

    int getWeight()
    {
        return this->weight;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
    void speak()
    {
        cout << "Speaking " << endl;
    }
};

// Child class
class Male : public Human
{
public:
    string colour;

    void sleep()
    {
        cout << "I am sleeping." << endl;
    }
    int getHeight()
    {
        return this->height;
    }
};

// Single Inheritence
class Man : private Human
{
public:
    string colour;

    void sleep()
    {
        cout << "I am sleeping." << endl;
    }
    int getHeight()
    {
        return this->height;
    }
};

// Multilevel Inheritence
class boy : public Male
{
};

class Animal
{
public:
    int age;

public:
    void bark()
    {
        cout << "Barking " << endl;
    }
};
// Multiple Inheritence
class hybrid : public Human, public Animal
{
};

// Inheritence Ambiguity
class A
{
public:
    void func()
    {
        cout << " I am A." << endl;
    }
};
class B
{
public:
    void func()
    {
        cout << " I am B." << endl;
    }
};
class C : public A, public B
{
};

int main()
{
    // Encapsulation
    Student Ram;
    cout << "Sbb shi chal rha h" << endl;

    // Inheritence
    Male Yash;
    // Private data members and fuctions can't be inherited.
    // Parent(Public) is inherit in public mode --- is Public in child class.
    cout << Yash.age << endl;
    cout << Yash.weight << endl;
    cout << Yash.colour << endl;
    Yash.sleep();
    Yash.setWeight(65);
    cout << Yash.getWeight();
    // // Protected functions in public mode --- is protected
    // cout << Yash.getHeight() << endl;

    // Public members in private mode ---- is private.
    // So, we can't access outside the child class.

    // Multilevel Inheritence
    boy beta;
    cout << beta.getAge();

    hybrid obj1;
    obj1.speak();
    obj1.bark();

    // Inheritence Ambiguity resolved using scope resoluter ::
    C obj;
    obj.A::func();
    obj.B::func();

    return 0;
}