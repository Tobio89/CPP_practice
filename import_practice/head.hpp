#ifndef HEAD_HPP

#define HEAD_HPP

#include <vector>
#include <string>

std::vector<int> read_int_to_vector();
std::vector<std::string> read_str_to_vector();

inline int sum(int a, int b) {
    return a + b;
}

#endif