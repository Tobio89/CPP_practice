#include <iostream>
#include <fstream>
#include <vector>

int main(){

std::ifstream file("new.txt");
std::vector<std::string> names;

std::string input;

while (getline(file, input)){
  names.push_back(input);
}

for (std::string n : names) {
  std::cout << n <<std::endl; 
}

}