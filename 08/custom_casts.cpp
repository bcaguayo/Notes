#include <iostream>

// static casts
// mostly int and float
// and double and long
struct A {

    operator int() {
        return x;
    }

    int x = 5;
}

struct B {
    B(A);


}

int main() {
    
}