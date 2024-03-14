#include <iostream>
using namespace std;

class test
{
public:
    int a;
    int b;

    // compiler warning about order
    // Deallocation occurs in reverse order, b is deallocated before a
    // If a depends on b, declare a after b
    // cannot depend on something that's been destroyed
    test() : b {1}, a {b}
    {}
    // Cirucular dependencies are bad news
    // Garbage collection is expensive, 
    // cpp doesn't have it so performance is better, but memory leaks can occur
};

int main()
{
    test t;
    cout << t.a;
}
