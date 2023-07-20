#include <iostream>

#include "boost/format.hpp"

int main() {
    auto format = boost::format("A = %1%, B = %2%");
    std::cout << format % 1 % 2 << std::endl;
    std::cout << format % 3 % 9 << std::endl;
    return 0;
}
