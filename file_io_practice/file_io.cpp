#include <iostream>
#include <fstream>
#include <vector>

int main(){

  std::ifstream name_file("new.txt");
  std::ifstream props_file("staff_properties.txt");

  std::vector<std::string> names;
  std::vector<std::string> props;

  std::string line;

  while(getline(name_file, line)){
    names.push_back(line);
  }
  while(getline(props_file, line)){
    props.push_back(line);

  }

  std::ofstream out_file;
  out_file.open("about_staff.txt");

    if (out_file.is_open()) {
      std::cout << "File opened successfully" << std::endl;
  } else {
      std::cout << "File could not be opened" << std::endl;
  }

    for (int i = 0; i <  names.size(); i++){
    std::cout << "Writing: "<< names[i] << " is " << props[i] << std::endl; 
    out_file << names[i] << " is " << props[i] << std::endl; 
  }

  out_file.close();

}