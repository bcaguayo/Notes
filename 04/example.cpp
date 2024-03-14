#include <iostream>

class base
{
public:
    ~base()
    {
        std::cout << "base dtor\n";
    }
};

class derived : public base
{

public:
    int *p;

    derived() : p{}
    {
    }

    ~derived()
    {
        delete p;
    }
};

class derived2 : public base
{
public:
    derived2()
    {
    }
};

int main()
{
    // doesn't know dynamic type, tries to destroy with base destructor
    // problematic if derived has more resources, they won't be cleaned up
    base *b = new derived();
    derived b;
}

// g++ example.cpp -o example
// ./example