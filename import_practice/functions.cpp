#include <iostream>
#include "head.hpp"


std::vector<int> read_int_to_vector() {
    std::vector<int> result;
    int x;

    std::cout << "Enter numbers. When you are done, press Ctrl+D or Ctrl+Z." << std::endl;

    while (true) {

        while (std::cin >> x) 
            result.push_back(x);
        
        if (std::cin.eof()) // If there is a ctrl+d or z event:
            break;
   
        std::cin.clear();

        std::string s;
        std::getline(std::cin, s);

        std::cout << "Ignoring " << s << std::endl;

    }   

    return result;

}

