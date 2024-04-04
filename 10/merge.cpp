#include <iostream>
#include <list>
#include <queue>

std::list<int> merge(const std::list<std::list<int>> &lists) {
    using iter_t = std::list<int>::const_iterator;
    auto lam = [](const iter_t& it1, const iter_t& it2) {
        return *it1 < *it2;
    };

    std::priority_queue<iter_t, std::vector<iter_t>, decltype(lam)> queue(lam);

    for (const auto& list : lists) {
        z
    }

}

int main () {
    std::list l1 = {1, 4, 7};
    std::list l2 = {2, 5, 8};
    std::list l3 = {3, 6, 9};

    std::List<int>::iterator iter1 = l1.begin();
}