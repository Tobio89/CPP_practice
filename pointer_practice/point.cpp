#include <iostream>

int main() {

    std::string food = "pizza";

    std::string &foodref = food; // Basically, 'what does food point to? I point to it, too.'

    std::string* foodpoint = &food; // Save the address food has

    std::cout << food << std::endl; // What is food?
    std::cout << &food << std::endl; // What is food's address?

    std::cout << foodref << std::endl; 
    std::cout << foodpoint << std::endl;

    std::cout << *foodpoint << std::endl; // Find out what's at the address foodpoint is a pointer to


    food = "burger";

    std::cout << food << std::endl;

    *foodpoint = "chips";

    std::cout << food << std::endl;


}