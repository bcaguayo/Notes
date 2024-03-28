#include <variant>

// Variants allow to decide the type during runtime
int main() {
    std::variant<int, double> c = {1};
    c                           = 1.0;
    c                           = true; // this is fine

    // if holds retrieve, otherwise do nothing
    if (std::holds_alternative<int>(c)) {
        auto x = std::get<int>(c);
    }

    // better way
    if (int *p = std::get_if<int>(&c)) {
        // do something with p
    }

    // otherwise use
    c.index(); // returns the index of the active alternative
}