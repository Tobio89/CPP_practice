#include <iostream>
#include <string>

int main() {

    std::string food = "pizza"; // Init. food as 'pizza'
    std::cout << "food:         " << food << std::endl; // What is food?

    std::string &foodref = food; // Basically, 'what does food point to? I point to it, too.'
    std::cout << "foodref:      " << foodref << "              - Reference, an alias for food" << std::endl;

    std::string* foodpoint = &food; // Save the address food has
    std::cout << "foodpoint:    " <<foodpoint  << "     - Pointer, holds the address for food\n" << std::endl;

    std::cout << "std::cout << &food:  " <<&food  << "     - &food tells you the memory address for a variable\n" << std::endl;

    std::cout << "Reassign food to 'burger'" << std::endl;
    food = "burger";
    std::cout << food << " -  food updated" << std::endl;

    std::cout << "Reassign foodref to 'chips'" << std::endl;
    foodref = "chips"; // You can reassign the thing a reference points to like this
    std::cout << food << " -  food updated via foodref" << std::endl;


    std::cout << "Reassign foodpoint to 'chicken'" << std::endl;
    *foodpoint = "chicken"; // You can reassign the thing a pointer points to like this
    std::cout << food << " -  food updated via *foodpoint" << std::endl;







}