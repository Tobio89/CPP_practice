#ifndef HEAD_HPP

#define HEAD_HPP

#include <vector>
#include <string>

std::vector<int> read_int_to_vector();
std::vector<std::string> read_str_to_vector();

inline int sumAll(std::vector<int> v) {
    int total = 0;

    for (int x : v) {
        total += x;
    }
    return total;
}

inline int average(std::vector<int> v){
    std::size_t size = v.size();
    
    if (size <=0)
        return 0;

    int sumTotal = sumAll(v);

    return sumTotal / size;
}

#endif