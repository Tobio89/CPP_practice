#include <iostream>
#include <fstream> // the part of the std library that lets you handle files.
#include <vector>

int main() {

    std::ofstream file; // We need to create an instance of the std::ofstream class.
    file.open("new.txt"); //Apparently linux is okay with if we miss the extension off.

    if (file.is_open()) {
        std::cout << "File opened successfully" << std::endl;
    }

    std::vector<std::string> names;
    names.push_back("Toby");
    names.push_back("Aziz");
    names.push_back("Jamshid");
    names.push_back("Andrea");
    names.push_back("Ivan");

    for (std::string name : names) {
        file << name << std::endl;
    }


    // std::ofstream file ("new.txt"); // This is also valid :O

    file.close(); // Not always necessary, but it lets you get errors if there were any.

}


/*
    When writing to a file, C++ will create it if it doesn't already exist.

    file has a method, is_open(), that can be used to check the file opened properly.

    file << "Hey"; // Use the same << operator to push something to the file stream.

    With the default setup file.open("...") it overwrites the whole file.
    To append, ("...", std::ios::app) - app = append mode.

*/