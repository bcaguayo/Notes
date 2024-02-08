#include <iostream>
#include <cmath>
#include <omp.h>

class point
{
    int x;
    int y;

public:
    // in the initializer list C++ can differentiate between the parameter and the member variable, but in the body of the constructor you would have to use this->x to refer to the member variable rather than the parameter
    // fix this
    point(int _x, int _y) {
        _x = x;
        _y = y;
    }

    // colon syntax gets constructed automatically


    double distanceFromOrigin()
    {
        return std::sqrt(x * x + y * y);
    }

    point operator+(const point & p) const {
        return point {x + p.x, y + p.y};
    }

    point operator-(const point & p) const {
        return point {x - p.x, y - p.y};
    }

    bool operator==(const point & p)  {
        return (x == p.x && y == p.y);
    }
};

int main()
{
    point p {1, -1};
    point q {1, -1};
    // now need constructor with two args
    // point other; // this doesnt work

    const point w {-1, 1};
    // cant modify after this

    std::cout << "distance from origin: " << p.distanceFromOrigin() << "\n";
}

class wrapper {

    point p;

    // this is called an initializer list
    wrapper() : p(1, 2) {
        // the class doesn't have a default constructor, can't initialize
        // inside the brackets
        // p = point(1, 2);
    }
}