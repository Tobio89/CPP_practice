# include <iostream>
# include <string>

using namespace std;



int main() {
    string name;
    int age;
    string birthday_already;
    int compensator;

    std::cout << "Hello. Who are you?\n";
    std::cin >> name;

    std::cout << "Hello, " << name << "!\n";

    age_question:
    std::cout << "How old are you?, " << name << "?" << endl;

    std::cin >> age;
    
    if (!std::cin) {
        std::cout << "You need to enter a number!\n";
        goto age_question;
    } else {
        std::cin >> age;
    }


    birthday_question:
    std::cout << "Has it been your birthday already this year, " << name << "?" << endl;
    std::cout << "Y/N\n";
    std::cin >> birthday_already;
    

    if (birthday_already == "Y") {
        compensator = 0; 

    } else if (birthday_already == "N") {
        compensator = 1;
    } else {
        std::cout << "I need you to answer either Y or N only. Try again! \n";
        goto birthday_question;
    }

    std::cout << "Then you were born in " << (2021 - compensator - age) << "!\n";

    
    return 0;
}