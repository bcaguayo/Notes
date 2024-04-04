#include <iostream>
#include <vector>

// dont use namespace in large projects
// can cause name conflicts
using namespace std;

int main()
{
    vector<int> v;

    for (int i {0}; i < 10; ++i)
        v.push_back(i);

    for (unsigned int i {0}; i < v.size(); ++i)
        cout << v[i] << "\n";

    for (auto i : v)
        cout << i << "\n";
}

// vector is like java arraylist
// use vector instead of list

// vector and array are the most used