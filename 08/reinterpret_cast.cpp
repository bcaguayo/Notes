#include <iostream>
#include <memory>

using namespace std;

struct A
{
    unsigned char c[4] {1, 0, 1, 0};
};

struct B
{
    unsigned int i;
};

class A();

class B : public A
{
};

int main()
{
    A a;
    cout << dynamic_cast<B &>(a);

    auto downcastedPtr = std::dynamic_pointer_cast<B>(a);

    std::shared_ptr<A> a = std::make_shared<B>();

    if (std::shared_ptr<B> b = std::dynamic_pointer_cast<A>(a)) {

    }
}

// for unique ptr, move 
// for shared ptr, copy