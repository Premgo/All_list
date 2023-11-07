#include<iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() 
    {
        cout<<"Prem Gohel"<<endl;
		cout<<"220130318003"<<endl;
        cout << "Eating" << endl;
    }

    void sleep() {
        cout << "Sleeping" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
       cout << "Barking" << endl;
    }
};

int main() {
    Dog dog;

    // Accessing methods of the base class
    dog.eat();
    dog.sleep();

    // Accessing method of the derived class
    dog.bark();

    return 0;
}
