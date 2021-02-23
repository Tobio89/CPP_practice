
#include "functions.cpp"
// #include <iostream>

int main() {
    std::vector<int> v = read_int_to_vector();

    std::cout << "You added " << v.size() << " numbers." << std::endl;
    std::cout << "The average was " << average(v) << std::endl;
    std::cout << "The total was " << sumAll(v) << std::endl;

}