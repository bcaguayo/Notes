#include <iostream>
#include "crip.h"

using Dog_t = Animal<Dog>;
using Cat_t = Animal<Cat>;
std::variant,

int main() {

    Dog_t dog1("dog 1");
    Dog_t dog2("dog 2");
    Cat_t cat1("cat 1");
    Cat_t cat2("cat 2");

    std::vector<Animal_t> animals = {dog1, dog2, cat1, cat2};

    // template in lambda uses auto
    auto lambda = [](auto& arg) { arg.pet(); }

    for (Animal_t& animal : animals) {
        std::visit(lambda, animal);
    }

    return 0;
}