#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream file("read.txt");

    std::vector<std::string> names;

    std::string line;
    while (getline(file, line)){
        names.push_back(line);
    }

    for (std::string n : names) {
        std::cout << n << std::endl;
    }


}

/*

    getline can be put in a while loop.
    This way, you can get a full line, including whitespace.

*/
