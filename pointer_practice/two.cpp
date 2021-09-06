#include <iostream>
#include <fstream>
#include <vector>

int main() {


  std::string thing = "words";

  std::string* point = &thing;

  std::cout << *point << std::endl;
  std::cout << point << std::endl;

  *point = "changed";

  std::cout << *point << std::endl;
  std::cout << point << std::endl;

}

/*

& will tell you what memory address something is at

* is a pointer variable. It is assigned a value that is a memory address, and points to that address.

this is useful if you create a function or class, since this usually copies a variable. 
Using a pointer, it will reuse the same memory address.

If you reassign a pointer, you reassign what is at that address.
Take care to use the same type.

*/