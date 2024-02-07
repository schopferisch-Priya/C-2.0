// Polymorphism - exists in many forms
// Types : -compile - time &Runtime(dynamic) polymorphism
// In compile time-- - function overloading and operator overloading
// Runtime polymorphism ---- method overriding
// Rules : 1. func name 2. func arg 3. Inheritence

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    int b;

public:
    // Function
    void sayHello()
    {
        cout << "Hello Priya Praksh " << endl;
    }
    void sayHello(string name)
    {
        cout << "\nHello " << name;
    }

    // same name function can't be overloaded by return type change
    // int sayHello(){
    //     cout<<"Error";
    // }

    // Operator Overloading
    int operator+(A &obj)
    {
        return this->a + obj.a;
    }
    void operator()()
    {
        cout << "\nmain bracket hu " << this->a << endl;
    }
};

class Animal
{

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    A a;
    a.sayHello();
    a.sayHello("Priya");

    A a1, a2;
    a1.a = 4;
    a2.a = 3;

    // Operator overload
    cout << "\nAns: " << a1 + a2;
    a1();

    Dog obj;
    obj.speak(); // Barking- implement own function only

    return 0;
}