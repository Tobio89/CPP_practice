#include <iostream>
#include <fstream>
#include <vector>

int main(){

  std::ofstream file;
  file.open("staff_properties.txt");

  if (file.is_open()){
    std::cout << "File opened" <<std::endl;
  } else {
    std::cout << "File failed to open" <<std::endl;
    return 1;
  }

  std::vector<std::string> sents{"good", "happy", "sad", "fast", "well", "hard", "cold", "furious", };

  for (std::string sent : sents){
    file << sent << std::endl;
  }
  file.close();
      std::cout << "File closed" <<std::endl;


}