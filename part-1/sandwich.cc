// Ernesto Moran
// emoran19@csu.fullerton.edu
// @Ernesto952
// Partners: @Ernesto952

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() != 4) {
    std::cerr << "Error: Incorrect number of arguments. Expected 3. "
              << std::endl;
    return 1;
  }

  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];

  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << "." << std::endl;

  return 0;
}
