#include <iostream>

using std::cout;

class integer
{
private:
    int * p = nullptr;
public:
    integer(int i) : p {new int {i}}
    {
        cout << "ctor\n";
    }

    // Destructor is a function called when a class is aobut to go out of scope
    // Before it is deallocated
    virtual ~integer()
    {
        delete p;
        cout << "dtor\n";
    }

    int get() const
    {
        return *p;
    }
    void set(int i)
    {
        *p = i;
    }
};

int main()
{
    integer i {1};
    integer j {2};
    integer k {i.get() + j.get()};

    cout << k.get() << "\n";
}
