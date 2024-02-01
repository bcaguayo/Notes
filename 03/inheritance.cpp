#include <iostream>

using std::cout;
using std::string;

class animal
{
protected:
    string name;

public:

    // this is an abstract class, derive only
    animal(string name) : name {name}
    {}

    // virtual function means other classes can implement this 
    // function in their own way
    // = 0 means pure virtual function, no implementation
    // every class that inherits from animal must implement this function
    virtual void pet() const = 0;

    void feed();
};

class dog : public animal
{
public:
    dog(string name) : animal {name}, x {0}
    {}

    // override signals that this function is meant to override a virtual function
    void pet() const override
    {
        cout << name << " wags its tail.";
    }

    int x;
};

class cat : public animal
{
public:
    cat(string name) : animal {name}
    {}

    void pet() const override
    {
        cout << name << " purrs.";
    }
};

// can call on any class that inherits from animal
// can pass in an animal: default behavior, takes pet from animal
// erases polymorphism
// can pass in a reference to an animal: takes pet from the derived class
void petLots(const animal & a)
{
    for (int i {0}; i < 10; ++i)
    {
        a.pet();
        cout << "\n";
    }
}

int main()
{
    dog d {"Rover"};
    cat c {"Strawberry"};

    // default feed behavior
    d.feed();
    
    // two different functions with the same name
    // to avoid this, use virtual keyword
    c.cat::feed();
    c.animal::feed();

    petLots(d);
    petLots(c);
}
