#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l {1, 2, 3, 4};
    list<int> l2 {5, 6, 7, 8};

    // use an iterator to update the first element
    *l.begin() = -1;

    // auto is convenient for code like this
    for (list<int>::iterator i {l.begin()}; i != l.end(); ++i)
        cout << *i << "\n";

    auto iter1 {l.begin()};
    auto iter2 (l2.begin());

    
}

// access a determined element in the list
// an iterator is like a pointer

// += or advance if container has a random access operator

// Iterators can become invalid quickly, only use in scope, dont return