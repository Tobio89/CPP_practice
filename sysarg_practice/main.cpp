#include <iostream>

void waitForInput() {
    char input;
    std::cin >> input;
}

int main(int argc, char** argv){
    std::cout << "Argument count: " << argc << std::endl;
    std::cout << "Arguments: ";

    for (int i=0; i < argc; ++i){

        std::cout << argv[i] << "\n";
    }
    std::cout << std::endl;

    waitForInput();

}

/* 
    In C++, sys args are passed to the main function.

    argc is ARGument Count - how many arguments there are.

    argv is ARGument Vector - It contains the arguments.
    There are a bunch of ways to do this - char *argv[] or char **argv
    This method char** argv lets us do a for loop on it nicely.
    With char* argv[] it contains pointers.

    Char works because the argvs are pointers, and a pointer is basically one char long.

    Argv[0] is always the program itself.
    
*/