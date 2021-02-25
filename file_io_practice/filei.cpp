#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream file("read.txt");

    std::vector<std::string> names;

    std::string input;
    while (file >> input){
        names.push_back(input);
    }

    for (std::string n : names) {
        std::cout << n << std::endl;
    }


}

/* 

    When reading with a while loop, it type checks the input. If the content can be interpreted as that type, it will succeed.
    Otherwise, it will fail.
    
    Here is another method:

    std::string line;
    getline(file, line);
    std::cout << line << std::endl;

    This code gets one line.
    It can also get whitespace.


*/