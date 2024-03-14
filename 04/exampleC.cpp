class A {
public:

    int x;

    A() {}
    A(const A&) = default;

    // Move construct, set to default = iteratively copy all member vars
    // Avoid, normally does not do what you want
    A(A&&) = default;
};


int main() {
    A a;
    A b;
    // cannot do, no copy constructor
    // a = b;
}

class Wrapper {
public:
    int i;

    // if defined in terms of other variables that have correct constructors
    // it is okay to use default
    Wrapper(const Wrapper&) = default;
};