#include <iostream>

using namespace std;

// Templates for runtime polymorphism
// Inheritance also works for compile time polymorphism
// Virtual functions have significant overhead
template <>
void foo(int t) {
    cout << "specialized for t: " << t << endl;
}


template <typename T>

// using T is like class
void f(T t, U u) {
    std::cout << t << "" << u;
}

void my_swap (T & a, T & b)
{
    T c {a};
    a = move(b);
    b = move(c);
}

// equivalent to
// template <typename T, typename U>
// void my_swap_auto(T & a, U & b) ...
void my_swap_auto(auto & a, auto & b)
{
    auto c {a};
    a = move(b);
    b = move(c);
}


int main()
{
    int i {1};
    int j {2};

    my_swap(i, j); // could also do my_swap<int>(i, j);
    my_swap_auto(i, j); // or my_swap_auto<int, int>(i, j);

    cout << i << " " << j;
}
