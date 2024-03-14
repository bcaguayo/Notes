#include <iostream>

using namespace std;

int a() { return 0; }

int & b()
{
    return &(new int {0});
}

ostream & f()
{
    return cout;
}

void test(ostream & os)
{
    os << "lvalue\n";
}
void test(ostream && os)
{
    os << "rvalue\n";
}

int main()
{
    f() << "test\n";

    test(cout);
    test(move(cout));
}

// 1 = x does not compile
// x = 1 does compile
// x = a() does compile
// a() = x does not compile
// x + x does compile
// b() = 1 does not compile