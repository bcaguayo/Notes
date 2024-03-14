#include <iostream>

using namespace std;

template <typename T>
class wrapper
{
    T t;
    using wrapped_type = T;
public:
    // Strong type deduction, to int during runtime
    wrapper(T t) : t {t} {}

    T get() const
    {
        return t;
    }

    void set(T t)
    {
        this->t = t;
    }
};

// Everything inherits from object, casts at runtime

// Wrappers are recipes for writing classes
// Cannot instantiate, need to inherit
int main()
{
    wrapper w {12}; // again, could be explicit as wrapper<int> w {12};

    w.set(100);
    cout << w.get();

    // This and iterator are generic types that work
    wrapper<int>::wrapped_type i{12};
}
