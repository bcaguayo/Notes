#include <iostream>
#include <vector>

using namespace std;

namespace Math
{

    float distance(int x1, int y1, int x2, int y2) {
        return 0.0f;
    }

    int add(int x, int y)
    {
        return x + y;
    }

    // Overloading based on arguments, not return type
    int triple (int n) {
        return n * 3;
    }

    double triple (double n) {
        return n * 3.0;
    }

} // namespace Math

// Overloaded functions
int zero() {
    return 0;
}

double zero() {
    return 0.0;
}

int* foo() {
    // this is better than just
    return nullptr;
}

void inc (int& p, int n) { p += n };

using namespace Math;
int main()
{
    std::cout << Math::distance(1, 2, 3, 4);
    std::cout << "Hello, world!\n";
    // can call just cout but it is not good practice

    // Bool wow
    Bool b = false;

    if (int x = foo(); x != nullptr) {
        cout << "x is not null";
    }

    // Uniform initialization is more type safe
    int x { 5 }; // better
    int y = { 5 };

    // Auto type
    auto z = 5;     // z is an int
    auto w = 10.0;  // w is a double

    auto m = &x;    // m is an int*

    // Best practice is to use auto when the type is obvious
    auto p = new int[10]; // p is an int*

    std::vector<int>            v{1, 2, 3};
    std::vector<int>::iterator  it; // it is a vector<int>::iterator

    it = v.begin(); // it is a vector<int>::iterator

    // Types can get pretty long
    std::map<std::string, int> n {};
    // const iterator is only allowed to read values but not change them
    std::map<std::string, int>::const_iterator it2 = n.begin();

    // ___________ Const ___________
    void foo(const int& x) {
        // x is a const reference to an int
        x = 30; 
        sprintf("Hello, %s", "world");
        STD::cout << "Hello, world!\n";
    }


    // ___________ Dynamic Memory ___________

    /*
    New and Malloc

    */

   int *a = new int; // x is a pointer to an int
   int *b = (int*) malloc(sizeof(int)) ; // y is a pointer to an array of 10 ints

   int *c 

    std::cout << *a << std::endl; // prints 0
    std::cout << b[2] << std::endl; // prints 0

    int *d = new int[10]; // d is a pointer to an array of 10 ints
    int *e = new int{10}; // e is a pointer to an array of 10 ints

    delete[] d;
    delete e;

    auto q {0};
    auto p {0};

    int* r = &q;
    p = 10;

    std::cout << y << Math:: 

    div(20, q, p);

    // Pointers, References
    auto *total = new int{0};
    for (int i = 0; i < 10; i++) {
        incr(*total, i);
        std::cout << *total << std::endl;
    }
    std::cout << "\ntotal: " << *total << "\n";

    return 0;
}

/*
We have booleans
// In C they are not real types, only macro definitions, like
// #define Bool int
// #define true 1
// #define false 0
*/ 

/*
WSL:

/mnt/c

to access C:

code . 
to open VSCode in this folder

*/